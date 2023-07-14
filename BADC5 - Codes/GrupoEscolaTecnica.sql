-- BADC5, IFSP-PRC, 2022 (1s)
-- Leonardo Martins -- PC3008941
-- Mateus de Castro -- PC3008851
-- Caio Marcelo -- PC3011259
-- Ivone Antunes -- PC3006107
-- Danylo Sabino -- PC3005674


-- Instrucoes basicas:
-- Nomear o script como GrupoX.sql (onde X e' tema do grupo)
-- Seguir rigorosamente a sintaxe do PostgreSQL
-- Este script precisa ser escrito de modo que possa ser executado completamente sem apresentar erros

create database escolatecnica;

\connect escolatecnica


-- ----------------------------
-- [1] ESQUEMAS
-- Criacao de pelo menos 1 esquema
-- Nesse(s) esquema(s) serao criados: tabelas, visoes, funcoes, procedimentos, gatilhos, sequencias etc (vide secoes seguintes)
CREATE SCHEMA tb;
CREATE SCHEMA vw;


-- ----------------------------
-- [2] TABELAS
-- Criacao das tabelas e de suas restricoes (chaves primarias, unicidades, valores padrao, checagem e nao nulos)
-- Pelo menos 1 UNIQUE, 1 DEFAULT, 1 CHECK
-- Definicao das chaves estrangeiras das tabelas com acoes referenciais engatilhadas
-- As restricoes criadas com ALTER TABLE devem aparecer logo apos a tabela correspondente
CREATE TABLE tb.areatec (
    id_area integer NOT NULL,
    descricao character varying(100) UNIQUE
);
ALTER TABLE ONLY tb.areatec
    ADD CONSTRAINT areatec_pkey PRIMARY KEY (id_area);
	alter table tb.areatec add qtd_cursos_possuidos int default 0;
	
	CREATE TABLE tb.professor (
    id_prof integer NOT NULL,
    nome character varying(50),
    d_nasc date
);
alter table tb.professor add qtd_cursos_ministrados int default 0;
ALTER TABLE ONLY tb.professor
    ADD CONSTRAINT prof_pkey PRIMARY KEY (id_prof);
alter table tb.professor add salario real default 1500;

CREATE TABLE tb.curso (
    id_curso integer NOT NULL,
	nome_curso varchar(50),
	id_professor integer,
    d_inicio date,
    d_fim date,
    id_area integer,
    CONSTRAINT datainicio CHECK ((d_inicio >= CURRENT_DATE))
); 
ALTER TABLE ONLY tb.curso
    ADD CONSTRAINT curso_pkey PRIMARY KEY (id_curso);
ALTER TABLE ONLY tb.curso	
	ADD CONSTRAINT id_prof_fk FOREIGN KEY (id_professor) REFERENCES tb.professor(id_prof) ON UPDATE CASCADE ON DELETE SET NULL;
ALTER TABLE ONLY tb.curso
    ADD CONSTRAINT area_fk FOREIGN KEY (id_area) REFERENCES tb.areatec(id_area) ON UPDATE CASCADE ON DELETE SET NULL;












--TROUXEMOS A SEÇÃO 10 PARA ANTES DOS INSERTS, DESTE MODO, OS GATILHOS CRIADOS PODEM SURTIR EFEITO













-- ---------------------------------------------
-- [10] TRIGGER
-- Revisar as aplicacoes em potencial para bancos de dados ativos (e gatilhos).
-- Vislumbrar a criacao de um gatilho e de uma funcao engatilhada para o banco de dados.
-- Se necessario redigir logo abaixo outros comandos SQL necessarios (criacao de coluna, atualizacao de tuplas etc):


-- [10.1] ROW
-- Comentar aqui a utilidade, para a aplicacao, do gatilho em nivel de tupla e da sua funcao engatilhada.

-- Redigir o comando CREATE OR REPLACE FUNCTION correspondente usando PL/pgSQL

--professor

create or replace function tf_qtde_cursos_ministrados_after_insert_row() 
returns trigger as 
$$
begin 

if (TG_OP = 'INSERT') then
update tb.professor set 
qtd_cursos_ministrados = qtd_cursos_ministrados+1 
where id_prof = NEW.id_professor;
return new;

elsif (TG_OP='DELETE') then
update tb.professor set 
qtd_cursos_ministrados = qtd_cursos_ministrados-1 
where id_prof = OLD.id_professor;
return old;

elsif (TG_OP='UPDATE') then
update tb.professor set 
qtd_cursos_ministrados = qtd_cursos_ministrados+1 
where id_prof = NEW.id_professor;

update tb.professor set 
qtd_cursos_ministrados = qtd_cursos_ministrados-1 
where id_prof = OLD.id_professor;
return new;

end if;
 
return null;

end;
$$
language 'plpgsql';

--area tecnica

create or replace function tf_qtde_cursos_possuidos_after_insert_row() 
returns trigger as 
$$
begin 

if (TG_OP = 'INSERT') then
update tb.areatec set 
qtd_cursos_possuidos = qtd_cursos_possuidos+1 
where id_area = NEW.id_area;
return new;

elsif (TG_OP='DELETE') then
update tb.areatec set 
qtd_cursos_possuidos = qtd_cursos_possuidos-1
where id_area = OLD.id_area;
return old;

elsif (TG_OP='UPDATE') then
update tb.areatec set 
qtd_cursos_possuidos = qtd_cursos_possuidos+1 
where id_area = NEW.id_area;

update tb.areatec set 
qtd_cursos_possuidos = qtd_cursos_possuidos-1 
where id_area = NEW.id_area;
return new;

end if;
 
return null;

end;
$$
language 'plpgsql';


-- Redigir o comando CREATE TRIGGER correspondente ao gatilho em nivel de tupla usando PL/pgSQL

--professor
create trigger t_qtde_cursos_ministrados_after_insert_row 
after insert on tb.curso for each row execute function
tf_qtde_cursos_ministrados_after_insert_row();

--area tecnica
create trigger t_qtde_cursos_possuidos_after_insert_row 
after insert on tb.curso for each row execute function
tf_qtde_cursos_possuidos_after_insert_row();

-- Redigir pelo menos 1 comando SQL que dispare o gatilho em nivel de tupla
-- Descrever o que acontece no banco de dados quando e' disparado

-- INSERT LOCALIZADO APÓS A CARGA DE DADOS


-- Se necessario para executar os comandos seguintes, remover o gatilho de 10.1 abaixo:



-- [10.2] STATEMENT
-- Comentar aqui a utilidade, para a aplicacao, do gatilho em nivel de sentenca e da sua funcao engatilhada.
-- Redigir o comando CREATE OR REPLACE FUNCTION correspondente usando PL/pgSQL
--professor
create or replace function tf_qtde_cursos_ministrados_after_stmt() 
returns trigger as 
$$
begin 
	update tb.professor p set qtd_cursos_ministrados = (
	select count(id_curso) from tb.curso c 
	where c.id_professor=p.id_prof
	);
return new;
end;
$$
language 'plpgsql';

--area tecnica
create or replace function tf_qtde_cursos_possuidos_after_stmt() 
returns trigger as 
$$
begin 
	update tb.areatec a set qtd_cursos_possuidos = (
	select count(id_curso) from tb.curso c 
	where c.id_area=a.id_area
	);
return new;
end;
$$
language 'plpgsql';

-- Redigir o comando CREATE TRIGGER correspondente ao gatilho em nivel de sentenca usando PL/pgSQL
--professor
create trigger t_qtde_cursos_ministrados_after_stmt
after insert or update or delete on tb.curso
for each statement execute function
tf_qtde_cursos_ministrados_after_stmt();

--area tecnica
create trigger t_qtde_cursos_possuidos_after_stmt
after insert or update or delete on tb.curso
for each statement execute function
tf_qtde_cursos_possuidos_after_stmt();

-- Redigir pelo menos 1 comando SQL que dispare o gatilho em nivel de sentenca
-- Descrever o que acontece no banco de dados quando e' disparado

--INSERT LOCALIZADO APOS A CARGA DE DADOS


















-- ----------------------------
-- [3] CARGA DE DADOS
-- 100 tuplas no total e identificar quem fez as insercoes

-- criar 20 areas tecnicas -- Ivone Antunes / Leonardo Martins
INSERT INTO tb.professor(nome, id_prof, d_nasc) values
('IVETE PEREIRA DA SILVA LEMOS', '100', '1960/09/20'),
('PATRICIA HELENA DE SOUZA', '101', '1970/08/17'), 
('ALESSANDRO LIMA DOS SANTOS', '102', '1973/03/09'), 
('EDILAINE CRISTINA DE OLIVEIRA', '103', '1984/10/07'),
('FELIPE DE ANDRADE FORTES DA SILVA', '104', '1986/07/31'),
('CARLOS EDUARDO APARECIDO REZENDE', '105', '1986/12/29'),
('NATHALIA FERRAZ SCHIRMER', '106', '1987/04/25'),
('RENATA MARIA NOGUEIRA SANTOS', '107', '1987/07/03'),
('ANA CRISTINA DE QUEIROZ', '108', '1988/01/06'),
('DAMARIS DE FARIA ARAUJO', '109', '1988/11/06'),
('ELISA VENANCIO DE OLIVEIRA', '110', '1989/04/01'),
('FLAVIO RICARDO CIRINO', '111', '1990/09/21'),
('MONISE CRISTINA PEREIRA COELHO', '112', '1991/06/03'),
('MARIA TEREZA OLIVEIRA BATISTA', '113', '1992/01/23'),
('THAIS CAROLINA GOMES DE OLIVEIRA', '114', '1992/03/20'), 
('BRUNA DE OLIVEIRA GIGLI', '115', '1992/03/25'),
('JULIANA LEMOS JOAQUIM', '116', '1992/07/30'),
('RODRIGO OLIVEIRA MONTEIRO SANTOS', '117', '1992/08/17'),
('LARISSA BUENO DE FARIA', '118', '1992/09/24'),
('NATHALIA GADIOLI OLIVEIRA', '119', '1994/04/21');

-- criar 20 professores -- Ivone Antunes / Leonardo Martins
INSERT INTO tb.areatec(id_area, descricao) values
('1', 'Tecnicos em Gestão e Negócios'),
('2','Tecnicos em Ambiente, Saúde e Segurança'),
('3', 'Tecnicos em Hospitalidade e Lazer'),
('4', 'Tecnicos em Infraestrutura'),
('5', 'Tecnicos em Militar'),
('6', 'Tecnicos em Produção Alimentícia'),
('7', 'Tecnicos em Produção Cultural e Design'),
('8','Técnicos em Ambiente, Saúde e Segurança'),
('9', 'Tecnicos em Produção Industrial'),
('10', 'Tecnicos em Recursos Naturais'),
('11', 'Engenharia'),
('12', 'Medicina'),
('13', 'Psicologia'),
('14','Pedagogia'),
('15', 'Ciencias Sociais'),
('16', 'Matematica'),
('17', 'Filosofia'),
('18', 'Fisica'),
('19', 'Tecnicos em Apoio Educacional'),
('20', 'Tecnicos em Controle e Processos Industriais');

-- criar 60 cursos -- Ivone Antunes / Leonardo Martins
INSERT INTO tb.curso(id_curso, nome_curso, d_inicio, d_fim, id_professor, id_area) values
('100', 'Administração', '2022-08-01', '2022-10-30', '100', '1'),
('101', 'Comércio', '2022-07-01', '2022-10-30', '100', '1'),
('102', 'Comércio Exterior', '2022-07-01', '2022-10-30', '100', '1'),
('103', 'Contabilidade', '2022-07-01', '2022-10-30', '101', '1'),
('104', 'Gerência em Saúde', '2022-07-05', '2022-10-30', '101', '2'),
('105', 'Farmácia', '2022-07-05', '2022-10-30', '101', '2'),
('106', 'Enfermagem', '2022-07-05', '2022-10-30', '102', '2'),
('107', 'Anestesiologia', '2022-07-01', '2022-10-30', '102', '12'),
('108', 'Cirurgia plástica', '2022-07-01', '2022-07-30', '102', '12'),
('109', 'Geriatria', '2022-07-01', '2022-07-30', '103', '12'),
('110', 'Medicina da família', '2022-07-01', '2022-08-30', '103', '12'),
('111', 'Medicina do trabalho', '2022-07-01', '2022-09-30', '103', '12'),
('112', 'Neurologia', '2022-07-01', '2022-10-30', '104', '12'),
('113', 'Oftalmologia', '2022-07-01', '2022-11-30', '104', '12'),
('114', 'Psiquiatria', '2022-08-01', '2022-09-30', '104', '12'),
('115', 'Psicopedagogia', '2022-07-01', '2022-10-30', '105', '13'),
('116', 'Psicanalise', '2022-07-01', '2022-11-30', '105', '13'),
('117', 'Psicologia do comportamento', '2022-07-01', '2022-12-30', '105','13'),
('118', 'Introducao a hist. Pedagogia', '2022-06-25', '2022-09-30', '106', '14'),
('119', 'Educacao Inclusiva', '2022-06-25', '2022-06-30', '106', '14'),
('120', 'Alimentação Escolar', '2022-06-25', '2022-06-30', '107', '19'),
('121', 'Biblioteconomia', '2022-06-25', '2022-06-30', '106', '19'),
('122', 'Viticultura e Enologia', '2022-06-25', '2022-06-30', '107', '6'),
('123', 'Alimentos', '2022-06-25', '2022-06-30', '107', '6'),
('124', 'Arte Dramática', '2022-06-25', '2022-06-30', '108', '7'),
('125', 'Artes Visuais', '2022-06-25', '2022-06-30', '108', '7'),
('126', 'Produção de Áudio e Vídeo', '2022-06-25', '2022-06-30', '108', '7'),
('127', 'Produção de Moda', '2022-06-25', '2022-06-30', '109', '7'),
('128', 'Publicidade', '2022-06-17', '2022-06-25', '109', '7'),
('129', 'Comunicações Aeronáuticas', '2022-06-25', '2022-06-30', '110', '5'),
('130', 'Controle de Tráfego Aéreo', '2022-06-25', '2022-06-30', '110', '5'),
('131', 'Desenho Militar', '2022-06-25', '2022-06-25', '109', '5'),
('132', 'Desenho de Construção Civil', '2022-06-25', '2022-06-30', '110', '4'),
('133', 'Edificações', '2022-06-25', '2022-06-30', '111', '4'),
('134', 'Estradas', '2022-06-25', '2022-06-30', '111', '4'),
('135', 'Guia de Turismo', '2022-06-25', '2022-06-30', '111', '3'),
('136', 'Hospedagem', '2022-06-25', '2022-06-30', '112', '3'),
('137', 'Introduçao a hist. Sociologia', '2022-06-25', '2022-06-30', '112', '15'),
('138', 'Introducao a hist. Filosofia', '2022-06-25', '2022-06-30', '112', '17'),
('139', 'Análises Químicas', '2022-06-25', '2022-06-30', '113', '20'),
('140', 'Eletroeletrônica', '2022-06-25', '2022-06-30', '113', '20'),
('141', 'Eletromecânica', '2022-06-25', '2022-06-30', '114', '20'),
('142', 'Automação Industrial', '2022-06-25', '2022-06-30', '114', '20'),
('143', 'Introducao a Fisica', '2022-06-25', '2022-06-30', '114', '18'),
('144', 'Calculo1', '2022-06-25', '2022-06-30', '115', '16'),
('145', 'Calculo2', '2022-06-25', '2022-06-30', '115', '16'),
('146', 'Mecanica', '2022-06-25', '2022-06-30', '115', '11'),
('147', 'Eletrica', '2022-06-25', '2022-06-30', '116', '11'),
('148', 'Computacao', '2022-06-25', '2022-06-30', '116', '11'),
('149', 'Agricultura', '2022-06-25', '2022-06-30', '116', '10'),
('150', 'Agroecologia', '2022-06-25', '2022-06-30', '117', '10'),
('151', 'Geologia', '2022-06-25', '2022-06-30', '117', '10'),
('152', 'Mineração', '2022-06-25', '2022-06-30', '117', '10'),
('153', 'Açúcar e Álcool', '2022-06-25', '2022-06-30', '118', '9'),
('154', 'Biocombustíveis', '2022-06-25', '2022-06-30', '118', '9'),
('155', 'Cerâmica', '2022-06-25', '2022-06-30', '118', '9'),
('156', 'Manutenção e Suporte em Informática', '2022-06-25', '2022-06-30', '119', '11'),
('157', 'Telecomunicações', '2022-06-25', '2022-06-30', '119', '11'),
('158', 'Sistemas de Comutação', '2022-06-25', '2022-06-30', '119', '11'),
('159', 'Sistemas de Transmissão', '2022-06-25', '2022-06-30', '119', '11'),
('160', 'Etica', '2022-06-25', '2022-06-30', '113', '17');






--INSERT DO TRIGGER ROW
INSERT INTO tb.curso(id_curso, nome_curso, d_inicio, d_fim, id_professor, id_area) values
('777', 'Gestão Empresarial', '2022-08-01', '2022-10-30', '100', '1');

--INSERT DO TRIGGER STATEMENT
INSERT INTO tb.curso(id_curso, nome_curso, d_inicio, d_fim, id_professor, id_area) values
('888', 'Relações Internacionais', '2022-08-01', '2022-10-30', '100', '1');



-- -----------------------
-- [4] CONSULTAS
-- Alem do comando SELECT correspondente, fornecer o que se pede

-- [4.1] Listagem
-- Usar juncao(oes) (JOINs), filtro(s) (WHERE), ordenacao (ORDER BY)
-- Enunciado: 
-- Importancia na aplicacao: 
-- Usuario(s) atendido(s): 

select c.nome_curso, a.descricao, p.nome from tb.professor p 
inner join tb.curso c on p.id_prof = c.id_professor
inner join tb.areatec a on a.id_area = c.id_area where c.d_inicio <= '2022-06-30' order by p.nome;


-- [4.2] Relatorio
-- Usar juncao(oes) (JOINs), filtro(s) (WHERE), agrupamento (GROUP BY) e funcao de agregacao (count, sum, avg, etc)
-- Enunciado: 
-- Importancia na aplicacao: 
-- Usuario(s) atendido(s): 

select p.nome, count(c.nome_curso) as total_cursos from tb.professor p 
inner join tb.curso c on p.id_prof=c.id_professor 
where p.d_nasc<'1962-01-01' group by p.nome;





-- -------------------------
-- [5] VISOES


-- [5.1] Visao
-- A visao deve ter, no minimo, as caracteristicas de 4.1
-- Enunciado: 
-- Importancia na aplicacao: 
-- Usuario(s) atendido(s): 

create view vw.cursos_area_prof as 
select c.nome_curso, a.descricao, p.nome from tb.professor p 
inner join tb.curso c on p.id_prof = c.id_professor
inner join tb.areatec a on a.id_area = c.id_area where c.d_inicio <= '2022-06-30' order by p.nome;


-- [5.2] Consulta na visao
-- Consultar a visao criada em 5.1 realizando filtro(s) (WHERE)
-- Enunciado: 
-- Importancia na aplicacao: 
-- Usuario(s) atendido(s): 

select * from vw.cursos_area_prof where descricao = 'Engenharia';


-- [5.3] Visao materializada
-- A visao deve ter, no minimo, as caracteristicas de 4.2
-- Enunciado: 
-- Importancia na aplicacao: 
-- Usuario(s) atendido(s): 

create materialized view vw.numcursos_prof_60mais as
select p.nome, count(c.nome_curso) as total_cursos from tb.professor p inner join
tb.curso c on p.id_prof=c.id_professor where p.d_nasc<'1962-01-01' group by p.nome;


-- [5.4] Consulta na visao materializada
-- Consultar a visao criada em 4.2 realizando filtro(s) (WHERE)
-- Enunciado: 
-- Importancia na aplicacao: 
-- Usuario(s) atendido(s): 

select * from vw.numcursos_prof_60mais where total_cursos>1;


-- [5.5] Atualizacao da visao materializada
-- Comente brevemente sobre a necessidade de atualizacao e qual seria a frequencia/periodicidade
-- Redija o comando REFRESH correspondente

refresh materialized view vw.numcursos_prof_60mais;





-- ---------------------------------------------
-- [6] DESEMPENHO DO PROCESSAMENTO DAS CONSULTAS
-- Primeiro analise o desempenho das suas consultas 4.1., 4.2, 5.2 e 5.4, verificando custo e tempo das operacoes
-- Depois de analisa-las, comente a necessidade da criacao ou nao de um indice e justifique a escolha pelo tipo de indice.
-- Selecione uma dentre essas consultas (a mais importante delas) e apresente aquilo que se pede abaixo.

-- [6.1] EXPLAIN 

--Sort  (cost=6.10..6.21 rows=43 width=69)
--   Sort Key: p.nome
--   ->  Hash Join  (cost=2.90..4.93 rows=43 width=69)
--         Hash Cond: (c.id_area = a.id_area)
--         ->  Hash Join  (cost=1.45..3.35 rows=43 width=48)
--               Hash Cond: (c.id_professor = p.id_prof)
--               ->  Seq Scan on curso c  (cost=0.00..1.76 rows=43 width=25)
--                     Filter: (d_inicio <= '2022-06-30'::date)
--               ->  Hash  (cost=1.20..1.20 rows=20 width=31)
--                     ->  Seq Scan on professor p  (cost=0.00..1.20 rows=20 width=31)
--         ->  Hash  (cost=1.20..1.20 rows=20 width=29)
--               ->  Seq Scan on areatec a  (cost=0.00..1.20 rows=20 width=29)
--(12 rows)


-- [6.2] EXPLAIN ANALYZE

--Sort  (cost=6.10..6.21 rows=43 width=69) (actual time=0.134..0.135 rows=43 loops=1)
--   Sort Key: p.nome
--   Sort Method: quicksort  Memory: 30kB
--   ->  Hash Join  (cost=2.90..4.93 rows=43 width=69) (actual time=0.046..0.061 rows=43 loops=1)
--         Hash Cond: (c.id_area = a.id_area)
--         ->  Hash Join  (cost=1.45..3.35 rows=43 width=48) (actual time=0.022..0.031 rows=43 loops=1)
--               Hash Cond: (c.id_professor = p.id_prof)
--               ->  Seq Scan on curso c  (cost=0.00..1.76 rows=43 width=25) (actual time=0.007..0.010 rows=43 loops=1)
--                     Filter: (d_inicio <= '2022-06-30'::date)
--                     Rows Removed by Filter: 18
--               ->  Hash  (cost=1.20..1.20 rows=20 width=31) (actual time=0.010..0.010 rows=20 loops=1)
--                     Buckets: 1024  Batches: 1  Memory Usage: 10kB
--                     ->  Seq Scan on professor p  (cost=0.00..1.20 rows=20 width=31) (actual time=0.005..0.006 rows=20 loops=1)
--         ->  Hash  (cost=1.20..1.20 rows=20 width=29) (actual time=0.019..0.020 rows=20 loops=1)
--               Buckets: 1024  Batches: 1  Memory Usage: 10kB
--               ->  Seq Scan on areatec a  (cost=0.00..1.20 rows=20 width=29) (actual time=0.008..0.009 rows=20 loops=1)
-- Planning Time: 0.173 ms
-- Execution Time: 0.166 ms
--(18 rows)

-- [6.3] Comentarios e justificativas para o indice 
-- É possível observer que o filtro na coluna d_inicio seria muito custoso, por isso será criado o índice
-- nesse atributo.


-- [6.4] CREATE INDEX e PARAMETROS (Set)
-- Crie o indice, verifique se o indice ja esta sendo usado no processamento da consulta e, caso nao esteja, ajuste os parametros
create index data_inicio_btree on tb.curso using btree (d_inicio);
set enable_indexscan = 'on';
set enable_seqscan = 'off';



-- ---------------------------------------------
-- [7] FUNCOES INTERNAS
-- Usar funcoes internas nas operacoes em tabelas do banco de dados

-- seleciona o nome do professor e a quantidade de cursos que os professores com mais de 60 anos 
-- (nascidos antes de 1962) estão lecionando
select p.nome, count(c.nome_curso) as total_cursos from tb.professor p 
inner join tb.curso c on p.id_prof=c.id_professor 
where p.d_nasc<'1962-01-01' group by p.nome;

-- insere um professor, transforma o nome em letra minuscula para maiuscula, para deixar padronizado
insert into tb.professor values (120, UPPER('joão ricardo da silva'), '1959-05-27', 0);

-- altera a data de conclusao do curso para a data atual, pode ser util para registrar términos de cursos
update tb.curso set d_fim = current_date where nome_curso = 'Contabilidade';

-- deleta os cursos que possuem data final igual ou anterior à data atual
delete from tb.curso where d_fim <= current_date;





-- ---------------------------------------------
-- [8] USER-DEFINED FUNCTION (UDF)
-- Vislumbrar a criacao de uma funcao (UDF) para o banco de dados.
-- Comentar a utilidade da funcao na aplicacao.
 -- Essa função calcula o total dos salarios dos professores de alguma area tecnica, que é passada como parametro
-- Redigir o comando CREATE OR REPLACE FUNCTION correspondente usando PL/pgSQL.
-- Redigir um comando SQL que chame a funcao, explicando o que sua chamada faz.

 -- Essa função calcula o total dos salarios dos professores de alguma area tecnica, que é passada como parametro
create or replace function total_salarios_areatec (nomearea VARCHAR) 
returns real
as 
$$
declare total_areatec tb.professor.salario%type;

begin
select sum(salario) as total_salario into total_areatec
from tb.professor p
inner join tb.curso c on p.id_prof=c.id_professor 
inner join tb.areatec a on c.id_area=a.id_area where a.descricao=nomearea
;

return total_areatec;

end;
$$
language 'plpgsql';

 -- Calculará o total de salarios dos professores da area tecnica 'Engenharia'
select total_salarios_areatec('Engenharia');



-- ---------------------------------------------
-- [9] STORED PROCEDURE
-- Vislumbrar a criacao de um procedimento armazenado para o banco de dados.
-- Comentar a utilidade do procedimento na aplicacao.
-- Redigir o comando CREATE OR REPLACE PROCEDURE correspondente usando PL/pgSQL.
-- Redigir um comando SQL que chame o procedimento, explicando o que sua chamada faz.
-- O procedimento devera' ter parametro(s).

-- Este procedimento adiciona 30 dias a data limite do curso especificado no parametro
create or replace procedure prorroga_fim_curso (nomecurso VARCHAR) 
as 
$$
declare 
data_antiga date;
nova_data date;
begin

select d_fim into data_antiga from tb.curso where nome_curso=nomecurso;

update tb.curso set d_fim=d_fim+30 where nome_curso=nomecurso;
RAISE NOTICE 'Foram adicionados 30 dias à data limite do curso de %', nomecurso;

select d_fim into nova_data from tb.curso where nome_curso=nomecurso;

raise notice 'Data antiga = %  Nova Data = %', TO_CHAR(data_antiga, 'DD/MM/YYYY'), 
TO_CHAR(nova_data, 'DD/MM/YYYY');

return;

end;
$$
language 'plpgsql';


-- essa chamada adicionara 30 dias na data limite do curso 'Comércio'
call prorroga_fim_curso('Comércio');








-- ---------------------------------------------
-- [11] SEGURANCA
-- Nao sera incluida aqui
-- Usar/entregar o modelo especifico


-- [11.1] ACESSO REMOTO (pg_hba.conf)
-- Cole nas linhas abaixo o conteudo do arquivo pg_hba.conf que o servidor deve conter, iniciando cada linha com comentario '--' (para nao impedir a execucao desse script); apague esta linha


-- [11.2] PAPEIS (Roles)
-- Criar papeis de usuarios e de grupos
-- Nessa criacao, considerar tanto papeis da equipe (administracao/desenvolvimento) quanto papeis de usuarios da aplicacao
-- Para cada papel criado adicionar um comentario antes explicando qual e' a utilidade dele na aplicacao

CREATE ROLE dbadm with createrole;
ALTER SCHEMA vw OWNER TO dbadm;
ALTER SCHEMA tb OWNER TO dbadm;

create role diretor;
ALTER TABLE tb.professor OWNER TO diretor;
ALTER TABLE tb.curso OWNER TO diretor;
ALTER TABLE tb.areatec OWNER TO diretor;

create role professor;





-- [11.3] PRIVILEGIOS DE ACESSO (Grant)

-- [11.3.1]
-- Assegurar os privilegios necessarios para o(s) papel(is) poder(em) criar o(s) esquema(s) da Secao 1
-- Usuario(s) podem conceder esse acesso alem do superusuario: até esse momento somente o superusuario
grant all privileges on database escolatecnica to dbadm with grant option;


-- [11.3.2]
-- Assegurar os privilegios necessarios para o(s) papel(is) poder(em) criar a(s) tabela(s), as sequencias e as restricoes da Secao 2 e as visoes da Secao 5
-- Usuario(s) podem conceder esse acesso alem do superusuario: dbadm
grant all privileges on database escolatecnica to dbadm with grant option;


-- [11.3.3]
-- Assegurar os privilegios necessarios para o(s) papel(is) poder(em) inserir e atualizar tuplas, conforme a Secao 3
-- Usuario(s) podem conceder esse acesso alem do superusuario: dbadm
grant all on schema tb,vw to diretor;
grant insert, update, select, delete on table tb.curso, tb.professor, tb.areatec to diretor;

-- [11.3.4]
-- Assegurar os privilegios necessarios para o(s) papel(is) poder(em) executar as consultas das Secoes 4 e 5
-- Usuario(s) podem conceder esse acesso alem do superusuario: dbadm
grant insert, update, select, delete on table tb.curso, tb.professor, tb.areatec to diretor;

grant usage on schema tb to professor;
grant select, update on table tb.professor to professor;
grant select on table tb.curso to professor;
grant select on table tb.areatec to professor;



-- [11.3.5]
-- Assegurar os privilegios necessarios para o(s) papel(is) poder(em) executar os comandos da Secao 7
-- Usuario(s) podem conceder esse acesso alem do superusuario: dbadm
grant all on schema tb,vw to diretor;
grant insert, update, select, delete on table tb.curso, tb.professor, tb.areatec to diretor;

-- [11.3.6]
-- Assegurar os privilegios necessarios para o(s) papel(is) poder(em) executar as subrotinas das Secoes 8, 9 e 10
-- Assegurar tambem os privilegios para executar os comandos que realizam as chamadas (ou disparos) daquelas subrotinas
-- Usuario(s) podem conceder esse acesso alem do superusuario: dbadm
grant all on schema tb,vw to diretor;
grant insert, update, select, delete on table tb.curso, tb.professor, tb.areatec to diretor;



-- [11.4] PRIVILEGIOS DE ACESSO (Revoke)

-- [11.4.1]
-- Revogar o acesso em 11.3.1 de pelo menos 1 papel
-- Usuario(s) podem revogar esse acesso alem do superusuario: dbadm
revoke create on database escolatecnica from dbadm;

-- [11.4.2]
-- Revogar o acesso em 11.3.2 de pelo menos 1 papel
-- Usuario(s) podem revogar esse acesso alem do superusuario: dbadm
revoke create on database escolatecnica from dbadm;

-- [11.4.3]
-- Revogar o acesso em 11.3.3 de pelo menos 1 papel
-- Usuario(s) podem revogar esse acesso alem do superusuario: dbadm
revoke all on schema tb,vw from diretor;

-- [11.4.4]
-- Revogar o acesso em 11.3.4 de pelo menos 1 papel
-- Usuario(s) podem revogar esse acesso alem do superusuario: dbadm
revoke insert, update, select, delete on table tb.curso, tb.professor, tb.areatec from diretor;

-- [11.4.5]
-- Revogar o acesso em 11.3.5 de pelo menos 1 papel
-- Usuario(s) podem revogar esse acesso alem do superusuario: dbadm
revoke all on schema tb,vw from diretor;

-- [11.4.6]
-- Revogar o acesso em 11.3.6 de pelo menos 1 papel
-- Usuario(s) podem revogar esse acesso alem do superusuario: dbadm
revoke all on schema tb,vw from diretor;


-- Se for necessario para executar os comandos seguintes, assegure novamente os privilegios de acesso revogados acima

grant all privileges on database escolatecnica to dbadm with grant option;

grant all on schema tb,vw to diretor;
grant insert, update, select, delete on table tb.curso, tb.professor, tb.areatec to diretor;
grant insert, update, select, delete on table tb.curso, tb.professor, tb.areatec to diretor;

grant usage on schema tb to professor;
grant select, update on table tb.professor to professor;
grant select on table tb.curso to professor;
grant select on table tb.areatec to professor;



-- ---------------------------------------------
-- [12] TRANSACOES
-- Nao incluir aqui
-- Usar/entregar o modelo proprio para esse topico




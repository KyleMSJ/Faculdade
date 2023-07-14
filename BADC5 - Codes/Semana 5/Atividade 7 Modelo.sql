-- Banco de Dados II - Visões
-- Caio Marcelo da Silva de Jesus - PC3011259

-- Redija abaixo quaisquer comandos de INSERT ou UPDATE no banco de dados 
-- que foram considerados importantes pela sua dupla durante a resolucao dos
-- exercicios (exceto aqueles pedidos nos exercicios 9 e 10). 



-- Nos exercicios seguintes, redija todos os comandos SQL necessarios
-- abaixo do enunciado correspondente.
-- Nomear cada visão conforme o número do exercício, ou seja, 
-- exercicio1 e assim por diante. Nomear também as colunas da
-- visão, escolhendo nomes adequados para elas.


-- 1. Crie uma visão que liste o nome de cada departamento e a localização 
-- de seus edifícios, classificando os resultados em ordem alfabética do
-- nome do departamento.
 SELECT d.d_nome,
    e.e_localizacao
   FROM departamento d
     JOIN edificios e ON d.d_numero = e.e_depto_num
  GROUP BY d.d_nome, e.e_localizacao
  ORDER BY d.d_nome;

-- 2. Crie uma visão que liste o nome de cada departamento e o nome 
-- de seu(sua) gerente. Consulte a visão ordenando os resultados
-- alfabeticamente pelo nome do(a) gerente.
 SELECT d.d_nome,
    c.c_nome AS d_cpf_gerente
   FROM departamento d
     JOIN colaborador c ON d.d_cpf_gerente::bpchar = c.c_cpf
  GROUP BY d.d_nome, c.c_nome;

-- 3. Crie uma visão que liste o nome de cada departamento e a quantidade 
-- de projetos controlados por ele. Consulte a visão selecionando apenas
-- departamentos que controlam mais que 1 projeto.
 SELECT d.d_nome,
    COUNT(p.p_depto_controle) AS p_depto_controle
   FROM departamento d
     JOIN projeto p ON d.d_numero = p.p_depto_controle
  GROUP BY d.d_nome;

-- 4. Crie uma visão que mostre o nome do departamento e quantos(as)
-- colaboradores trabalham no departamento. Considere também departamentos 
-- nos quais ainda não trabalham colaboradores. Consulte a visão, 
-- listando apenas os nomes dos departamentos nos quais trabalham 
-- menos que 4 pessoas.
 SELECT d.d_nome,
    d.d_qtde_colaboradores
   FROM departamento d
  GROUP BY d.d_nome, d.d_qtde_colaboradores;

-- 5. Crie uma visão que liste o nome do(a) colaborador(a) e todas as 
-- suas dependentes, sendo que o(a) colaborador(a) deve 
-- trabalhar no departamento denominado 'TI'.
 SELECT c.c_nome,
    de.de_nome
   FROM colaborador c
     JOIN dependente de ON de.de_cpf = c.c_cpf
     JOIN departamento d ON d.d_numero = c.c_depto_num
  WHERE d.d_nome = 'TI'
  GROUP BY c.c_nome, de.de_nome;

-- 6. Crie uma visão que contenha o nome do(a) colaborador(a), o seu
-- salário e a quantidade de dependentes (a partir de 0). Consulte esta
-- visão mostrando o nome do(a) colaborador(a), o valor do salário, 
-- o valor do bônus calculado como 200 reais por dependente, e a soma
-- do salário com o bônus.
 SELECT c.c_nome,
    c.c_salario,
    count(de.de_cpf) AS de_cpf
   FROM colaborador c
     LEFT JOIN dependente de ON de.de_cpf = c.c_cpf
  GROUP BY c.c_nome, c.c_salario;
-- Consulta
SELECT 
*,
(de_cpf)*200 AS bonus,
c_salario + (de_cpf)*200 AS salario_novo FROM exercicio6
GROUP BY c_nome, c_salario, de_cpf;


-- 7. Crie uma visão que liste o nome de cada supervisor e a quantidade 
-- de colaboradores que supervisiona (a partir de zero).
-- As colunas da visão deverão ser o nome do supervisor, sup_nome, e 
-- a quantidade de supervisionados, qtde_supervisionados. Consulte a 
-- visão, exibindo os resultados por ordem decrescente da quantidade.
 
 /*CREATE OR REPLACE VIEW exercicio7 (
	c_nome,
 	c_supervisor_cpf,
 	c_cpf) AS 
 SELECT DISTINCT c_nome AS sup_nome WHERE 
    COUNT (c_cpf) AS qtde_supervisionados
   FROM colaborador WHERE c_supervisor_cpf IS NOT NULL
  GROUP BY c_nome;*/ --Precisa arrumar


-- 8. Crie uma visão que liste o nome de cada departamento e o valor total 
-- que este paga de salários a seus colaboradores. Apenas departamentos 
-- cujo total é superior a 13000 devem ser considerados. Agrupe os 
-- resultados pelo nome do departamento. As colunas da visão deverão ser 
-- o nome do departamento depto_nome, e o total gasto por tal departamento 
-- depto_total_salarios. Consulte a visão, exibindo os resultados por 
-- ordem decrescente do total.


-- 9. Escolha uma das visoes criadas anteriormente, e crie uma visao 
-- materializada similar. Consulte ambas as visoes com o mesmo comando
-- SELECT (trocando apenas o nome da visao). Modifique o conteudo do banco
-- de dados de modo a afetar as tabelas-base dessas visoes. Consulte
-- as visoes novamente. Execute o que for necessario para manter a 
-- visao materializada com dados mais atualizados. Consulte as visoes
-- novamente.


-- 10. Idem, mas escolhendo outra visao para iniciar.
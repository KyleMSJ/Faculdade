-- Um grupo de usuários "professores"
CREATE ROLE professores;
/* Poderiam modificar as informações na tabela professor, para alterar algum dado pessoal, e poderiam usar o 
SELECT para visualizar todas as tabelas.  */
GRANT USAGE ON SCHEMA tb, vw TO professores;
GRANT SELECT, UPDATE ON TABLE tb.professor TO professores;
GRANT SELECT ON TABLE tb.curso, tb.areatec, tb.ministra_em TO professores;

--Um usuário "Diretor"
CREATE ROLE diretor;
/*O diretor poderia selecionar, modificar, inserir e até excluir em todas as tabelas, para excluir algum 
curso caso a escola deixe de possuí-lo na grade, ou um professor, caso ele seja demitido.  */
GRANT USAGE ON SCHEMA tb, vw TO diretor;
GRANT ALL ON TABLE tb.professor, tb.curso, tb.areatec, tb.ministra_em to diretor;

--Visão professores_curso: mostra todos os professores que lecionam um curso específico.
CREATE VIEW vw.professores_curso AS SELECT tb.p.nome, tb.c.nome FROM tb.professor p, tb.curso c 
INNER JOIN  tb.ministra_em m ON tb.c.id_curso=tb.m.num_curso;

--Visão cursos_professor: mostra todos os cursos que um professor específico leciona.
CREATE VIEW vw.cursos_professor AS SELECT tb.p.nome, tb.c.nome FROM tb.professor p, tb.curso c 
INNER JOIN  tb.ministra_em m ON tb.c.id_curso=tb.m.num_curso;



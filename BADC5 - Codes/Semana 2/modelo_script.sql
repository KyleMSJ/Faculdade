-- BADC5, IFSP-PRC, 2022 (1s)
-- NomeSobrenome1 - Prontuario1
-- NomeSobrenome2 - Prontuario2
-- NomeSobrenome3 - Prontuario3
-- NomeSobrenome4 - Prontuario4
-- NomeSobrenome5 - Prontuario5


-- Instrucoes basicas:
-- Nomear o script como GrupoX.sql (onde X e' tema do grupo)
-- Seguir rigorosamente a sintaxe do PostgreSQL
-- Este script precisa ser escrito de modo que possa ser executado completamente sem apresentar erros

-- ----------------------------
-- [1] ESQUEMAS
-- Criacao de pelo menos 1 esquema
-- Apague esta linha e redija o comando aqui


-- ----------------------------
-- [2] TABELAS
-- Cria��o das tabelas e de suas restri��es (chaves prim�rias, unicidades, valores padr�o, checagem e n�o nulos)
-- Pelo menos 1 UNIQUE, 1 DEFAULT, 1 CHECK
-- Definicao das chaves estrangeiras das tabelas com acoes referenciais engatilhadas
-- As restricoes criadas com ALTER TABLE devem aparecer logo apos a tabela correspondente

-- Por exemplo (desconsiderando os comentarios '--'):
--CREATE TABLE esquema.nometabela1(
-- colunas,
-- restricoes
--);
-- ALTER TABLE esquema.nometabela1 ADD CONSTRAINT...



-- ----------------------------
-- [3] CARGA DE DADOS
-- 100 tuplas no total e identificar quem fez as insercoes

-- 20 INSERTs - NomeSobrenome1


-- 20 INSERTs - NomeSobrenome2


-- 20 INSERTs - NomeSobrenome3


-- 20 INSERTs - NomeSobrenome4


-- 20 INSERTs - NomeSobrenome5



-- UPDATEs possivelmente necessarios nas linhas abaixo:
	
	
	
-- -----------------------
-- [4] CONSULTAS
-- Alem do comando SELECT correspondente, fornecer o que se pede

-- [4.1] Listagem
-- Usar jun��o(�es) (JOINs), filtro(s) (WHERE), ordena��o (ORDER BY)
-- Enunciado: 
-- Importancia na aplicacao: 
-- Usuario(s) atendido(s): 
-- Apague esta linha e redija a consulta SQL aqui


-- [4.2] Relatorio
-- Usar jun��o(�es) (JOINs), filtro(s) (WHERE), agrupamento (GROUP BY) e fun��o de agregacao (count, sum, avg, etc)
-- Enunciado: 
-- Importancia na aplicacao: 
-- Usuario(s) atendido(s): 
-- Apague esta linha e redija a consulta SQL aqui





-- -------------------------
-- [5] VISOES


-- [5.1] Visao
-- A visao deve ter, no minimo, as caracteristicas de 4.1
-- Enunciado: 
-- Importancia na aplicacao: 
-- Usuario(s) atendido(s): 


-- [5.2] Consulta na visao
-- Consultar a visao criada em 5.1 realizando filtro(s) (WHERE)
-- Enunciado: 
-- Importancia na aplicacao: 
-- Usuario(s) atendido(s): 


-- [5.3] Visao materializada
-- A visao deve ter, no minimo, as caracteristicas de 4.2
-- Enunciado: 
-- Importancia na aplicacao: 
-- Usuario(s) atendido(s): 


-- [5.4] Consulta na visao materializada
-- Consultar a visao criada em 4.2 realizando filtro(s) (WHERE)
-- Enunciado: 
-- Importancia na aplicacao: 
-- Usuario(s) atendido(s): 


-- [5.5] Atualizacao da visao materializada
-- Comente brevemente sobre a necessidade de atualizacao e qual seria a frequencia/periodicidade
-- Redija o comando REFRESH correspondente





-- ---------------------------------------------
-- [6] DESEMPENHO DO PROCESSAMENTO DAS CONSULTAS
-- Primeiro analise o desempenho das suas consultas 4.1., 4.2, 5.2 e 5.4, verificando custo e tempo das operacoes
-- Depois de analisa-las, comente a necessidade da criacao ou nao de um indice e justifique a escolha pelo tipo de indice.
-- Selecione uma dentre essas consultas (a mais importante delas) e apresente aquilo que se pede abaixo.

-- [6.1] EXPLAIN 
-- comente com '--' as linhas do plano abaixo e apague esta linha


-- [6.2] EXPLAIN ANALYZE
-- comente com '--' as linhas do relatorio abaixo e apague esta linha


-- [6.3] Comentarios e justificativas para o indice 
-- Considerar custo e tempo das operacoes, por exemplo
-- comente e justifique nesta linha


-- [6.4] CREATE INDEX e PARAMETROS (Set)
-- Crie o indice, verifique se o indice ja esta sendo usado no processamento da consulta e, caso nao esteja, ajuste os parametros
-- apague esta linha e redija os comandos




-- ---------------------------------------------
-- [7] FUNCOES INTERNAS
-- Usar funcoes internas nas operacoes em tabelas do banco de dados

-- Explicar aqui o que o comando abaixo faz e sua utilidade na aplicacao
-- Redigir abaixo o SELECT (apagar esta linha)

-- Explicar aqui o que o comando abaixo faz e sua utilidade na aplicacao
-- Redigir abaixo o INSERT (apagar esta linha)

-- Explicar aqui o que o comando abaixo faz e sua utilidade na aplicacao
-- Redigir abaixo o UPDATE (apagar esta linha)

-- Explicar aqui o que o comando abaixo faz e sua utilidade na aplicacao
-- Redigir abaixo o DELETE (apagar esta linha)





-- ---------------------------------------------
-- [8] USER-DEFINED FUNCTION (UDF)
-- Vislumbrar a cria��o de uma fun��o (UDF) para o banco de dados.
-- Comentar a utilidade da funcao na aplicacao.
-- Redigir o comando CREATE OR REPLACE FUNCTION correspondente usando PL/pgSQL.
-- Redigir um comando SQL que chame a funcao, explicando o que sua chamada faz.
-- A funcao devera' ter parametro(s).


-- Comentar aqui a utilidade da funcao na aplicacao 
-- CREATE OR REPLACE FUNCTION abaixo (apagar esta linha)

-- Explicar aqui o que a chamada abaixo faz
-- SELECT ou INSERT ou UPDATE ou DELETE abaixo para chamar a funcao (apagar esta linha)



-- ---------------------------------------------
-- [9] STORED PROCEDURE
-- Vislumbrar a cria��o de um procedimento armazenado para o banco de dados.
-- Comentar a utilidade do procedimento na aplicacao.
-- Redigir o comando CREATE OR REPLACE PROCEDURE correspondente usando PL/pgSQL.
-- Redigir um comando SQL que chame o procedimento, explicando o que sua chamada faz.
-- O procedimento devera' ter parametro(s).

-- Comentar a utilidade do procedimento na aplicacao aqui
-- CREATE OR REPLACE PROCEDURE abaixo (apagar esta linha)


-- Explicar aqui o que a chamada abaixo faz
-- chamar aqui o procedimento (apagar essa linha)



-- ---------------------------------------------
-- [10] TRIGGER
-- Revisar as aplica��es em potencial para bancos de dados ativos (e gatilhos).
-- Vislumbrar a cria��o de um gatilho e de uma fun��o engatilhada para o banco de dados.
-- Se necessario redigir logo abaixo outros comandos SQL necessarios (criacao de coluna, atualizacao de tuplas etc):


-- [10.1] ROW
-- Comentar aqui a utilidade, para a aplicacao, do gatilho em nivel de tupla e da sua funcao engatilhada.

-- Redigir o comando CREATE OR REPLACE FUNCTION correspondente usando PL/pgSQL


-- Redigir o comando CREATE TRIGGER correspondente ao gatilho em nivel de tupla usando PL/pgSQL


-- Redigir pelo menos 1 comando SQL que dispare o gatilho em nivel de tupla
-- Descrever o que acontece no banco de dados quando e' disparado


-- Se necessario para executar os comandos seguintes, remover o gatilho de 10.1 abaixo:



-- [10.2] STATEMENT
-- Comentar aqui a utilidade, para a aplicacao, do gatilho em nivel de sentenca e da sua funcao engatilhada.
-- Redigir o comando CREATE OR REPLACE FUNCTION correspondente usando PL/pgSQL


-- Redigir o comando CREATE TRIGGER correspondente ao gatilho em nivel de sentenca usando PL/pgSQL


-- Redigir pelo menos 1 comando SQL que dispare o gatilho em nivel de sentenca
-- Descrever o que acontece no banco de dados quando e' disparado






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


-- [11.3] PRIVILEGIOS DE ACESSO (Grant)

-- [11.3.1]
-- Assegurar os privilegios necessarios para o(s) papel(is) poder(em) criar o(s) esquema(s) da Secao 1
-- Usuario(s) podem conceder esse acesso alem do superusuario: citar aqui
-- Apagar essa linha e adicionar os comandos necessarios


-- [11.3.2]
-- Assegurar os privilegios necessarios para o(s) papel(is) poder(em) criar a(s) tabela(s), as sequencias e as restricoes da Secao 2 e as visoes da Secao 5
-- Usuario(s) podem conceder esse acesso alem do superusuario: citar aqui
-- Apagar essa linha e adicionar os comandos necessarios


-- [11.3.3]
-- Assegurar os privilegios necessarios para o(s) papel(is) poder(em) inserir e atualizar tuplas, conforme a Secao 3
-- Usuario(s) podem conceder esse acesso alem do superusuario: citar aqui
-- Apagar essa linha e adicionar os comandos necessarios


-- [11.3.4]
-- Assegurar os privilegios necessarios para o(s) papel(is) poder(em) executar as consultas das Secoes 4 e 5
-- Usuario(s) podem conceder esse acesso alem do superusuario: citar aqui
-- Apagar essa linha e adicionar os comandos necessarios


-- [11.3.5]
-- Assegurar os privilegios necessarios para o(s) papel(is) poder(em) executar os comandos da Secao 7
-- Usuario(s) podem conceder esse acesso alem do superusuario: citar aqui
-- Apagar essa linha e adicionar os comandos necessarios


-- [11.3.6]
-- Assegurar os privilegios necessarios para o(s) papel(is) poder(em) executar as subrotinas das Secoes 8, 9 e 10
-- Assegurar tambem os privilegios para executar os comandos que realizam as chamadas (ou disparos) daquelas subrotinas
-- Usuario(s) podem conceder esse acesso alem do superusuario: citar aqui
-- Apagar essa linha e adicionar os comandos necessarios




-- [11.4] PRIVILEGIOS DE ACESSO (Revoke)

-- [11.4.1]
-- Revogar o acesso em 11.3.1 de pelo menos 1 papel
-- Usuario(s) podem revogar esse acesso alem do superusuario: citar aqui
-- Apague esta linha e redija o comando aqui

-- [11.4.2]
-- Revogar o acesso em 11.3.2 de pelo menos 1 papel
-- Usuario(s) podem revogar esse acesso alem do superusuario: citar aqui
-- Apague esta linha e redija o comando aqui

-- [11.4.3]
-- Revogar o acesso em 11.3.3 de pelo menos 1 papel
-- Usuario(s) podem revogar esse acesso alem do superusuario: citar aqui
-- Apague esta linha e redija o comando aqui

-- [11.4.4]
-- Revogar o acesso em 11.3.4 de pelo menos 1 papel
-- Usuario(s) podem revogar esse acesso alem do superusuario: citar aqui
-- Apague esta linha e redija o comando aqui

-- [11.4.5]
-- Revogar o acesso em 11.3.5 de pelo menos 1 papel
-- Usuario(s) podem revogar esse acesso alem do superusuario: citar aqui
-- Apague esta linha e redija o comando aqui

-- [11.4.6]
-- Revogar o acesso em 11.3.6 de pelo menos 1 papel
-- Usuario(s) podem revogar esse acesso alem do superusuario: citar aqui
-- Apague esta linha e redija o comando aqui


-- Se for necessario para executar os comandos seguintes, assegure novamente os privilegios de acesso revogados acima
-- Apague esta linha e redija os comandos a partir daqui



-- ---------------------------------------------
-- [12] TRANSACOES
-- Nao incluir aqui
-- Usar/entregar o modelo proprio para esse topico




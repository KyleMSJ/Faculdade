-- Banco de Dados 2
-- ATIVIDADE 2
-- Caio Marcelo da Silva de Jesus PC3011259 
-- Mateus de Castro Duarte Cardoso PC3008851

-- 1
UPDATE empregado SET cpf = '226.842.014-78' WHERE cpf = '226.842.014-87' ;
-- c) Comente abaixo as comente as alterações que ocorreram em consequência da execução
-- ...
-- d) Redija abaixo todos os comandos SQL necessários para retornar o banco de dados ao seu estado anterior (não coloque -- antes dos comandos)


-- 2
DELETE FROM departamento WHERE numero=2;
-- c) Comente abaixo as comente as alterações que ocorreram em consequência da execução
-- ...
-- d) Redija abaixo todos os comandos SQL necessários para retornar o banco de dados ao seu estado anterior (não coloque -- antes dos comandos)


-- 3
UPDATE localizacoes SET depto_num = 1 WHERE localizacao = 'SQS 187';
-- c) Comente abaixo as comente as alterações que ocorreram em consequência da execução
-- ...
-- d) Redija abaixo todos os comandos SQL necessários para retornar o banco de dados ao seu estado anterior (não coloque -- antes dos comandos)


-- 4
DELETE FROM empregado WHERE cpf = '806.178.153-22';
-- c) Comente abaixo as comente as alterações que ocorreram em consequência da execução
-- ...
-- d) Redija abaixo todos os comandos SQL necessários para retornar o banco de dados ao seu estado anterior (não coloque -- antes dos comandos)


-- 5
UPDATE empregado SET supervisor_cpf = '226.842.014-87' WHERE supervisor_cpf = '306.178.144-80';
-- c) Comente abaixo as comente as alterações que ocorreram em consequência da execução
-- ...
-- d) Redija abaixo todos os comandos SQL necessários para retornar o banco de dados ao seu estado anterior (não coloque -- antes dos comandos)


-- 6
DELETE FROM empregado WHERE depto_num = 1;
-- c) Comente abaixo as comente as alterações que ocorreram em consequência da execução

-- Deleta todos os empregados vinculados ao Departamento de Pesquisa e coloca 'Carlos Borges' como gerente por DEFAULT

-- d) Redija abaixo todos os comandos SQL necessários para retornar o banco de dados ao seu estado anterior (não coloque -- antes dos comandos)

INSERT INTO empregado (nome,cpf, sexo, datanasc, logradouro, nro, salario, depto_num) 
VALUES ('Iara Muniz', '806.178.153-22', 'F', '1974-03-05', 'Rua 5', 100, 6049.65, 1);

UPDATE departamento SET cpf_gerente = '806.178.153-22' WHERE numero = 1;

INSERT INTO empregado (nome,cpf, sexo, datanasc, logradouro, nro, salario, depto_num) 
VALUES ('Eloa Martins Chagas', '306.178.144-80', 'F', '1982-07-20', 'Rua 15', 1657, 2822.26, 1);

INSERT INTO empregado (nome,cpf, sexo, datanasc, logradouro, nro, salario, depto_num)
VALUES ('Ivan Chagas', '226.842.014-87', 'M', '1980-12-14', 'Rua 15', 1657, 2522.26, 1);

UPDATE empregado SET supervisor_cpf = '306.178.144-80' WHERE cpf = '226.842.014-87';

-- 7
UPDATE departamento SET numero = 3 WHERE numero = 1;
-- c) Comente abaixo as comente as alterações que ocorreram em consequência da execução

-- O número do departamento de pesquisa atualiza de 1 para 3, assim como na tabela "empregado" na coluna "depto_num" pois foi estabelecida uma CONSTRAINT de FK referenciando a tabela "departamento" no começo, o mesmo acontece com a tabela "localizações"

-- d) Redija abaixo todos os comandos SQL necessários para retornar o banco de dados ao seu estado anterior (não coloque -- antes dos comandos)

UPDATE departamento SET numero = 1 WHERE numero = 3;

-- 8
DELETE FROM empregado WHERE cpf = '806.178.153-22';
-- c) Comente abaixo as comente as alterações que ocorreram em consequência da execução

-- Apaga os dados da 'Iara Muniz' que era gerente do Departamento de Pesquisa, então por DEFAULT, esta coluna na tabela 'departamento' é preenchida pelo cpf de 'Carlos Borges'

-- d) Redija abaixo todos os comandos SQL necessários para retornar o banco de dados ao seu estado anterior (não coloque -- antes dos comandos)

INSERT INTO empregado (nome,cpf, sexo, datanasc, logradouro, nro, salario, depto_num)
VALUES ('Iara Muniz', '806.178.153-22', 'F', '1974-03-05', 'Rua 5', 100, 6049.65, 1);

UPDATE departamento SET cpf_gerente = '806.178.153-22' WHERE nome = 'Pesquisa';

-- 9
UPDATE empregado SET supervisor_cpf = '806.178.153-22', depto_num = 1 WHERE cpf = '886.718.454-10';
-- c) Comente abaixo as comente as alterações que ocorreram em consequência da execução

-- Na tabela "empregado" tanto o supervisor quanto o departamento vinculado a 'Karen Leal' são atualizados ('Lara Muniz' e departamento 2 --> 1, respectivamente)

-- d) Redija abaixo todos os comandos SQL necessários para retornar o banco de dados ao seu estado anterior (não coloque -- antes dos comandos)

UPDATE empregado SET supervisor_cpf = '302.605.324-09', depto_num = 2 WHERE cpf = '886.718.454-10';

-- 10
DELETE FROM localizacoes WHERE depto_num = 1;
-- c) Comente abaixo as comente as alterações que ocorreram em consequência da execução

-- As localizações referenciadas pelo Departamento de Pesquisa (nº 1) foram apagadas na tabela "localizações"

-- d) Redija abaixo todos os comandos SQL necessários para retornar o banco de dados ao seu estado anterior (não coloque -- antes dos comandos)

INSERT INTO localizacoes (depto_num, localizacao) 
VALUES (1, 'SQN 345');

INSERT INTO localizacoes (depto_num, localizacao) 
VALUES (1, 'SQN 122');
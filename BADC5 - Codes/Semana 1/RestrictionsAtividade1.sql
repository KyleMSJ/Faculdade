-- Caio Marcelo da Silva de Jesus, PC3011259
-- 5º Período Eng. Computação

-- comprimento precisa ser > 0, "violates CHECK constraint" 
INSERT INTO rio (id, nome, comprimento)
VALUES (11, 'Rio Amazonas', 0);

-- renda não pode ser negativa, "violates check constraint"
UPDATE pessoa set renda = -10.00 WHERE cpf = '321.123.010-99'

-- "duplicate key value violates unique constraint "municipio_pkey" DETAIL: Key (codigo)=(3538709) already exists."
-- chave primária já criada em "Script2_Dados.sql" referente ao município de Piracicaba.
INSERT INTO municipio (codigo, nome, extensao) VALUES (3538709, 'Rio Claro', 1598.4); 

-- run para criar a restrição
ALTER TABLE municipio ADD CONSTRAINT municipio_nome_unique UNIQUE (nome);

-- "duplicate key value violates unique constraint "municipio_nome_unique" DETAIL: Key (nome)=(Piracicaba) already exists."
INSERT INTO municipio (codigo, nome) VALUES (3254978, 'Piracicaba'); 

-- "null value in column "codigo" of relation "municipio" violates not-null constraint DETAIL: 
-- Failing row contains (null, Piracicaba, 1378.0, null)." chave primária não pode ter o valor nulo
update municipio set (codigo, nome) = (NULL, 'Piracicaba');


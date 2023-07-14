-- 1. Listar todas as pessoas e seus atributos (colunas)
SELECT * 
FROM pessoa;

-- 2. Listar todos os municipios e seus atributos (colunas)
SELECT *
FROM municipio;

-- 3. Listar todos os nomes de municipios
SELECT nome_municipio
FROM municipio;

-- 4. Listar os nomes das pessoas em ordem alfabetica
SELECT nome_pessoa
FROM pessoa
ORDER BY nome_pessoa;

-- 5. Listar os nomes e as datas de nascimento das pessoas, em ordem 
-- decrescente de idade
SELECT nome_pessoa, nascimento
FROM pessoa
ORDER BY nascimento DESC;

-- 6. Mostre o nome e a extensao do municipio cujo codigo e' 3538709
SELECT nome_municipio, extensao
FROM municipio
WHERE codigo=3538709;

-- 7. Listar os nomes e as datas de nascimento das pessoas, em ordem 
-- decrescente de idade, apenas para quem nasceu a partir de 1970
SELECT nome_pessoa, nascimento
FROM pessoa
WHERE nascimento >= '1970-01-01'
ORDER BY nascimento DESC;
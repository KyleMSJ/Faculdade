-- Caio Marcelo da Silva de Jesus
-- PC3011259

-- 1. Listar todos os rios e seus atributos (colunas)
SELECT * FROM rio;

-- 2. Listar todos os CPFs das pessoas
SELECT cpf FROM pessoa;

-- 3. Listar todas as datas de nascimento das pessoas em ordem crescente
SELECT nascimento FROM pessoa ORDER BY nascimento ASC;

-- 4. Listar os nomes dos rios e seus comprimentos, em ordem decrescente do comprimento
SELECT nome_rio, comprimento FROM rio ORDER BY comprimento DESC;

-- 5. Mostre o nome, a data de nascimento e a renda da pessoa cujo CPF é 333.222.000-11
SELECT nome_pessoa, nascimento, renda FROM pessoa WHERE cpf = '333.222.000-11';

-- 6. Corrija para 1339.30 a extensao do municipio cujo codigo é 3501608 
UPDATE municipio SET extensao = 1339.30 WHERE codigo = 3501608;

-- 7. Insira um novo municipio cuja extensao (área) será 1047.80
INSERT INTO municipio (codigo, nome_municipio, extensao) 
VALUES (3464507, 'Coimbra', 1047.80);

-- 8. Liste os nomes, extensoes e codigos dos municipios cuja extensao é maior que 1100.11, 
-- em ordem decrescente de extensao
SELECT nome_municipio, extensao, codigo FROM municipio WHERE extensao > 1100.11 
ORDER BY extensao DESC;
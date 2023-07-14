-- Exercicios

-- A. Nomes dos municipios e de seus(suas) prefeitos(as) (com juncao interna implicita)
SELECT nome_pessoa, nome_municipio
FROM pessoa, municipio
WHERE cpf = prefeitoa;

-- A. Nomes dos municipios e de seus(suas) prefeitos(as) (com juncao interna explicita)
SELECT nome_pessoa, nome_municipio
FROM pessoa INNER JOIN municipio ON cpf = prefeitoa;

-- B. Liste os nomes das pessoas e dos municípios onde habitam, desde que as pessoas 
-- tenham nascido após 1970. (com juncao interna implicita)
SELECT nome_pessoa, nome_municipio
FROM pessoa, municipio WHERE cod_municipio = codigo 
AND nascimento >= '01-01-1970';

-- B. Liste os nomes das pessoas e dos municípios onde habitam, desde que as pessoas 
-- tenham nascido após 1970. (com juncao interna explicita)
SELECT nome_pessoa, nome_municipio
FROM pessoa INNER JOIN municipio ON cod_municipio = codigo 
WHERE nascimento >= '01-01-1970';

-- C. Idem, porém mostrando os resultados em ordem alfabética do nome da pessoa. 
-- (com juncao interna implicita)
SELECT nome_pessoa, nome_municipio
FROM pessoa, municipio WHERE cod_municipio = codigo 
AND nascimento >= '01-01-1970' ORDER BY nome_pessoa ASC;

-- C. Idem, porém mostrando os resultados em ordem alfabética do nome da pessoa. 
-- (com juncao interna explicita)
SELECT nome_pessoa, nome_municipio
FROM pessoa INNER JOIN municipio ON cod_municipio = codigo 
WHERE nascimento >= '01-01-1970' ORDER BY nome_pessoa ASC;
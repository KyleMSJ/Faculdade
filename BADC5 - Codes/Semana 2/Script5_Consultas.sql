-- Nomes das pessoas e dos municipios onde habitam

-- 1. Com produto cartesiano:
SELECT nome_pessoa, nome_municipio
FROM pessoa, municipio;

-- 2. Com juncao interna implicita
SELECT nome_pessoa, nome_municipio
FROM pessoa, municipio
where cod_municipio = codigo;

-- 3. Com juncao interna explicita
SELECT nome_pessoa, nome_municipio
FROM pessoa INNER JOIN municipio 
	 ON cod_municipio = codigo;

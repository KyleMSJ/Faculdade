CREATE TABLE municipio(
  codigo INT PRIMARY KEY,
  nome_municipio VARCHAR(40),
  extensao DEC(10,1),
  prefeitoa CHAR(14)
);

CREATE TABLE rio(
  id INT PRIMARY KEY,
  nome_rio VARCHAR(40),
  comprimento DEC(7,1)
);

CREATE table cruza(
  id_rio INT,
  cod_municipio INT,
  PRIMARY KEY (id_rio, cod_municipio)
);

CREATE TABLE pessoa(
  cpf CHAR(14) PRIMARY KEY,
  nome_pessoa VARCHAR(80),
  renda DEC(10,2),
  nascimento DATE,
  cod_municipio INT
);

ALTER TABLE cruza ADD FOREIGN KEY (id_rio) 
REFERENCES rio(id);

ALTER TABLE cruza ADD FOREIGN KEY (cod_municipio) 
REFERENCES municipio(codigo);

ALTER TABLE municipio ADD FOREIGN KEY(prefeitoa) 
REFERENCES pessoa(cpf);

ALTER TABLE pessoa ADD FOREIGN KEY(cod_municipio) 
REFERENCES municipio(codigo);
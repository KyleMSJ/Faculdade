INSERT INTO empregado (nome,cpf, sexo, datanasc, logradouro, nro, salario, depto_num) 
VALUES ('Iara Muniz', '806.178.153-22', 'F', '1974-03-05', 'Rua 5', 100, 6049.65, 1);

UPDATE departamento SET cpf_gerente = '806.178.153-22' WHERE numero = 1;

INSERT INTO empregado (nome,cpf, sexo, datanasc, logradouro, nro, salario, depto_num) 
VALUES ('Eloa Martins Chagas', '306.178.144-80', 'F', '1982-07-20', 'Rua 15', 1657, 2822.26, 1);

INSERT INTO empregado (nome,cpf, sexo, datanasc, logradouro, nro, salario, depto_num)
VALUES ('Ivan Chagas', '226.842.014-87', 'M', '1980-12-14', 'Rua 15', 1657, 2522.26, 1)

UPDATE empregado SET supervisor_cpf = '306.178.144-80' WHERE cpf = '226.842.014-87'
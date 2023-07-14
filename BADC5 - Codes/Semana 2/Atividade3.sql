-- Banco de Dados II - Consultas
-- Mateus de Castro Duarte Cardoso - PC3008851
-- Caio Marcelo da Silva Jesus - PC3011259
-- Redija a consulta SQL abaixo do enunciado correspondente.


-- 1. Liste todas as localizações do departamento cujo número é 100, em ordem alfabética.
SELECT e_localizacao FROM edificios WHERE e_depto_num = 100 ORDER BY e_localizacao ASC;


-- 2. Liste todos os números de projetos em que trabalha o(a) colaborador(a) com CPF 112.356.757-34.
SELECT t_proj_num FROM trabalha_em WHERE t_cpf = '112.356.757-34';


-- 3. Liste CPFs de colaboradores(as), números de projetos e horas trabalhadas. Classifique os resultados por ordem decrescente de horas trabalhadas. 
SELECT t_cpf, t_proj_num, t_horas FROM trabalha_em ORDER BY t_horas DESC;


-- 4. Liste o nome, o endereço e o salário das colaboradoras que trabalham num dos seguintes departamentos: 66 ou 5.
SELECT c_nome, c_logradouro, c_salario FROM colaborador WHERE c_depto_num = 66 OR c_depto_num = 5;


-- 5. Liste nome e parentesco de dependentes de colaboradores(as) que recebem salário maior que 2.500.
SELECT de_nome, de_parentesco FROM dependente JOIN colaborador ON (de_cpf = c_cpf) WHERE c_salario > 2500;


-- 6. Liste nomes das gerentes cujo salário é maior que 1.000 e menor que 3.000.
SELECT c_nome FROM colaborador join departamento ON (c_cpf = d_cpf_gerente) WHERE c_salario > 1000 AND c_salario < 3000;


-- 7. Nome e endereço das colaboradoras e o nome dos projetos nos quais trabalham, desde que elas dediquem mais que 3h aos projetos.
SELECT c_nome, c_logradouro, p_nome FROM colaborador, projeto INNER JOIN trabalha_em ON (p_numero = t_proj_num)WHERE c_cpf = t_cpf AND t_horas > 3;


-- 8. Liste nome e endereço das supervisoras.
SELECT c_nome, c_logradouro FROM colaborador WHERE c_cpf in(select c_supervisor_cpf FROM colaborador);


-- 9. Liste nomes de dependentes cujos pais trabalham no projeto 'Carro que voa'
SELECT de_nome, p_numero, c_cpf FROM dependente 
INNER JOIN colaborador ON (de_cpf = c_cpf) 
INNER JOIN trabalha_em ON (c_cpf = t_cpf)
INNER JOIN projeto ON (t_proj_num = p_numero)
WHERE (de_parentesco = 'Filho' OR de_parentesco = 'Filha') AND p_nome = 'Carro que voa'; 

-- Consulta sem o filtro para ver todos os projetos cujos dependentes tem parentesco com um colaborador que trabalha nele, e seu cpf
SELECT de_nome, de_parentesco, p_numero, p_nome, c_cpf 
FROM dependente 
INNER JOIN colaborador ON (de_cpf = c_cpf) 
INNER JOIN trabalha_em ON (c_cpf = t_cpf)
INNER JOIN projeto ON (t_proj_num = p_numero)
-----------------------------------------------------------------


-- 10. Liste os departamentos que não controlam nenhum projeto. Exiba: o número e o nome do departamento (e o número e o nome do projeto).
	SELECT d_numero, d_nome, p_nome, p_numero FROM departamento LEFT JOIN projeto ON d_numero=p_depto_controle WHERE p_numero IS NULL or p_nome IS NULL;


-- 11. Reescreva o exemplo de consulta seguinte, mas inverta o lado da junção. 
-- SELECT p.numero AS p_numero, p.nome AS p_nome, d.numero AS d_numero, d.nome as d_nome
-- FROM departamento d LEFT JOIN projeto p ON p.depto_num=d.numero;
	SELECT p.numero AS p_numero, p.nome AS p_nome, d.numero AS d_numero, d.nome as d_nome
	FROM projeto p RIGHT JOIN departamento d ON d.numero = p.depto_num;


-- 12. Liste os dependentes de cada colaborador(a), mostrando inclusive quem não tem dependente. Exiba o nome e o parentesco do dependente, bem como o CPF e o nome do(a) colaborador(a).
	SELECT de_nome, de_parentesco, c_nome, c_cpf FROM dependente FULL OUTER JOIN colaborador ON c_cpf = de_cpf ORDER BY de_nome, c_nome;	


-- 13.Liste apenas colaboradores(as) que não possuem dependentes.
		SELECT c_nome, c_cpf FROM colaborador FULL OUTER JOIN dependente ON c_cpf = de_cpf WHERE de_nome IS NULL AND de_parentesco IS NULL ORDER BY de_nome, c_nome;


-- 14. Calcule o total pago em salários pela empresa.
	SELECT SUM(c_salario) AS soma_salario FROM colaborador;


-- 15. Calcule a soma e a média dos salários pagos pelo departamento número 40.
	SELECT ROUND(AVG(c_salario),2) AS media_salarios, SUM(c_salario) AS soma_salarios FROM colaborador WHERE c_depto_num = 40;

-- Você é capaz de usar a função ROUND na consulta anterior para aproximar o cálculo da média para 2 dígitos decimais?  
-- Consulte: https://www.w3resource.com/PostgreSQL/round-function.php


-- 16. Exiba o nome e o salário do(a) colaborador(a) pertencente ao departamento número 40 e que recebe o maior salário.
	SELECT c_nome AS nome, c_salario AS maior_salario FROM colaborador WHERE c_salario = (SELECT MAX(c_salario) FROM colaborador WHERE c_depto_num = 40);


-- 17. Exiba o nome e o salário do(a) colaborador(a) pertencente ao departamento número 40 e que recebe o menor salário.
	SELECT c_nome AS nome, c_salario AS menor_salario FROM colaborador WHERE c_salario = (SELECT MIN(c_salario) FROM colaborador WHERE c_depto_num = 40);


-- 18. Exiba quantos colaboradores(as) trabalham no projeto de número 1.
	SELECT COUNT(c_cpf) AS Colaboradores FROM colaborador INNER JOIN trabalha_em ON c_cpf = t_cpf AND t_proj_num = 1;


-- 19. Mostre o nome do departamento e a sua quantidade de colaboradores(as).
	SELECT d_nome AS nome, d_qtde_colaboradores AS colaboradores FROM departamento;


-- 20. Mostre o nome de cada colaborador(a) e seu total de horas trabalhadas, desde que o total seja maior ou igual a 20 e menor ou igual a 40.
	SELECT c_nome AS nome, t_horas AS total_horas FROM colaborador INNER JOIN trabalha_em ON c_cpf = t_cpf AND t_horas >= 20 AND t_horas <= 40 ORDER BY t_horas DESC;	

CREATE OR REPLACE FUNCTION f_parentesco_colaboradora (um_parentesco VARCHAR)
RETURNS SETOF dependente AS $$ -- conjunto de dependentes
DECLARE
	var_dependente dependente%ROWTYPE; -- molda conforme o tipo de tuplas
BEGIN
	
	FOR var_dependente IN
	SELECT c.c_cpf, d.de_nome
	FROM colaborador c INNER JOIN dependente d ON (c.c_cpf = d.de_cpf)
	WHERE d.de_parentesco = um_parentesco AND LOWER(c.c_sexo)='f'
	LOOP
	
		IF var_dependente.cpf IS NOT NULL THEN
		
			UPDATE colaborador SET salario = salario*1.05
			WHERE cpf = var_dependente.cpf;
			
			RETURN NEXT var_dependente; 
			
		END IF;
		
	END LOOP;
	
	RETURN;
	
END;
$$ LANGUAGE 'plpgsql';
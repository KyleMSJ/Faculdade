CREATE OR REPLACE FUNCTION f_parentesco_colaboradora (um_parentesco VARCHAR)
RETURNS SETOF dependente AS $$ -- conjunto de dependentes
DECLARE
	var_dependente dependente%ROWTYPE;
BEGIN
	
	FOR var_dependente IN
	SELECT c.cpf, d.nome
	FROM colaborador c INNER JOIN d ON (c.cpf = d.cpf)
	WHERE d.parentesco = um_parentesco AND LOWER(c.sexo)='f'
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
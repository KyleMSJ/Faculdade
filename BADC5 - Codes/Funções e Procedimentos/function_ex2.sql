CREATE FUNCTION atualiza_Salario_colaboradora (um_nome VARCHAR) RETURNS BOOLEAN AS $$
DECLARE
	um_cpf colaborador.cpf%TYPE;
	sexo_colab colaborador.sexo%TYPE;
BEGIN
-- seleciona os colaboradores responsáveis por dependentes e atribui a variável local
	SELECT d.cpf INTO um_cpf 
	 FROM dependente d 
	 WHERE d.nome = um_nome; -- comparação com o nome passado no parâmetro
	
	IF um_cpf IS NOT NULL THEN -- filtro apenas dos nomes existentes na tabela 'dependente' (retorno de algum cpf na consulta anterior)
	 SELECT sexo INTO sexo_colab -- consulta e atribuição a variável local
	  FROM colaborador WHERE cpf = um_cpf;
	
		IF UPPER(sexo_colab) = 'F' THEN -- sexo da colaboradora
		 UPDATE colaborador SET salario = salario*1.05 WHERE cpf = um_cpf;
		 RETURN TRUE;
	    END IF;
		
	END IF;
	
	RETURN FALSE;
	
END;
$$ LANGUAGE 'plpgsql';
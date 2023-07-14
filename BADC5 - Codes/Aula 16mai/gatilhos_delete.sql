CREATE FUNCTION tf_qtde_colaboradores_after_delete_row ()
RETURNS TRIGGER AS $$ 
BEGIN 
	RAISE NOTICE 'OLD.cpf=% OLD.depto_num=%', OLD.cpf, OLD.depto_num; 
	
	UPDATE departamento
	SET qtde_colaboradores = qtde_colaboradores-1
	WHERE numero = OLD.depto_num; -- acesso a variável NEW (interna)
	
	RETURN OLD; 
END;
$$ LANGUAGE 'plpgsql';

CREATE TRIGGER tf_qtde_colaboradores_after_delete_row
AFTER DELETE ON colaborador -- só roda após validar a linha
FOR EACH ROW EXECUTE FUNCTION tf_qtde_colaboradores_after_delete_row();
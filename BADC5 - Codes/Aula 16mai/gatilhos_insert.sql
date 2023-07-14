CREATE FUNCTION tf_qtde_colaboradores_after_insert_row ()
RETURNS TRIGGER AS $$ -- associada ao gatilho da linha 14 em diante
BEGIN 
	RAISE NOTICE 'NEW.cpf=% NEW.depto_num=%', NEW.cpf, NEW.depto_num; 
	
	UPDATE departamento
	SET qtde_colaboradores = qtde_colaboradores+1
	WHERE numero = NEW.depto_num; -- acesso a variável NEW (interna)
	
	RETURN NEW; -- INSERT e UPDATE (RETURN OLD no caso de DELETE)
END;
$$ LANGUAGE 'plpgsql';

CREATE TRIGGER tf_qtde_colaboradores_after_insert_row
AFTER INSERT ON colaborador -- só roda após validar a linha
FOR EACH ROW EXECUTE FUNCTION tf_qtde_colaboradores_after_insert_row();
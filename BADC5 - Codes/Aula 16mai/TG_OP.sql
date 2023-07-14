CREATE OR REPLACE FUNCTION tf_qtde_colaboradores_after_IUD_row()
RETURNS TRIGGER AS $$
BEGIN 
	IF (TG_OP = 'INSERT') THEN 
		UPDATE departamento
		SET qtde_colaboradores = qtde_colaboradores+1
		WHERE numero = NEW.depto_num; 
		RETURN NEW;
	ELSIF (TG_OP = 'DELETE') THEN
		UPDATE departamento
		SET qtde_colaboradores = qtde_colaboradores-1
		WHERE numero = OLD.depto_num;
		RETURN OLD;
	ELSIF (TG_OP = 'UPDATE') THEN 
		IF (OLD.depto_num != NEW.depto_num) THEN -- transferência de departamento por um colaborador
			-- departamento que recebe um colaborador
			UPDATE departamento
			SET qtde_colaboradores = qtde_colaboradores+1
			WHERE numero = NEW.depto_num; 
			-- departamento que perde um colaborador
			UPDATE departamento
			SET qtde_colaboradores = qtde_colaboradores-1
			WHERE numero = OLD.depto_num;
			RETURN NEW;
		END IF;
	END IF;
	RETURN NULL;
END;
$$ LANGUAGE 'plpgsql';

CREATE TRIGGER tf_qtde_colaboradores_after_IUD_row
AFTER INSERT OR UPDATE OR DELETE ON colaborador 
FOR EACH ROW EXECUTE FUNCTION tf_qtde_colaboradores_after_IUD_row();

DROP TRIGGER tf_qtde_colaboradores_after_insert_row ON colaborador;
DROP TRIGGER tf_qtde_colaboradores_after_delete_row ON colaborador;
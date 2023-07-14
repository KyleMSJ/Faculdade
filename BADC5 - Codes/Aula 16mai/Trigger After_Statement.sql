CREATE OR REPLACE FUNCTION tf_qtde_colaboradores_after_stmt()
RETURNS TRIGGER AS $$
BEGIN 
	UPDATE departamento d SET qtde_colaboradores=(
	SELECT COUNT (cpf) 
	FROM colaborador c
	WHERE c.depto_num = d.numero
	);
	RETURN NEW;
END;
$$ LANGUAGE 'plpgsql';

CREATE TRIGGER tf_qtde_colaboradores_after_stmt
AFTER INSERT OR UPDATE OR DELETE ON colaborador 
FOR EACH ROW EXECUTE FUNCTION tf_qtde_colaboradores_after_stmt();

DROP TRIGGER tf_qtde_colaboradores_after_IUD_row ON colaborador;
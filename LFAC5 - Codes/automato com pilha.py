# definição de cadeia de entrada
entrada = 'main { if ( var < valor ) { var = var + valor ; } }'

# quebra a palavra de entrada em elementos de uma lista. se baseando espaço em branco
cadeia = entrada.split()

# definiçao da função transição
transicao = { 'main' : {'S'       : [ 'FECHA_CHAVE', 'COMANDOS','ABRE_CHAVE'] },
              '{'    : { 'ABRE_CHAVE' : []},
              '}'    : { 'FECHA_CHAVE': []},
			  'if'	 : { 'COMANDOS' : [ 'FECHA_CHAVE', 'COMANDOS', 'ABRE_CHAVE', 'FECHA', 'VALOR', 'OP_COMP', 'VAR', 'ABRE' ] },
              'var'  : { 'COMANDOS' : ['PONTO_VIRG', 'EXPRESSAO', 'OP_ATRIB' ], 'VAR' : [ ] },
			  '(' 	 : { 'ABRE'     : [ ] },
			  '<'	 : { 'OP_COMP'  : [ ] },
			  '<='	 : { 'OP_COMP'  : [ ] },
			  '>' 	 : { 'OP_COMP'  : [ ] },
			  '>='   : { 'OP_COMP'  : [ ] },
			  '=='	 : { 'OP_COMP'  : [ ] },
			  '!='   : { 'OP_COMP'  : [ ] },
              '='    : { 'OP_ATRIB' : [ ] },
              'valor': { 'EXPRESSAO' : [ ] },
			  ')'	 : { 'FECHA' : [ ] },
			  '+'	 : { 'OP_ARIT' : [ ] },
			  '-'	 : { 'OP_ARIT' : [ ] },
			  '*'	 : { 'OP_ARIT' : [ ] },
			  '/'	 : { 'OP_ARIT' : [ ] },
			  '%'	 : { 'OP_ARIT' : [ ] },
              ';'    : { 'PONTO_VIRG' : []}
 }


# definição da função automo com pilha
def automato ( fita) :

    # as transições do autômato com pilha ocorrem no estado q1
    estado = 'q1'

    # a transição de q0 para q1 acrescenta a variável S no topo pilha
    pilha = ['S']

    try:
        # vai percorrer os terminais da cadeia de entrada sempre buscando uma transição para o terminal
        for terminal in fita:
            
    
            topo = pilha.pop()   # remove o elemento do topo da pilha

            print(' estado: ',estado, ' terminal: ',terminal,' topo da pilha: ',topo)

            pilha.extend(transicao[terminal][topo])

        # percorri todos os terminais da cadeia - significa que a cadeia está vazia
        if len(pilha) == 0:   # a pilha está vazia
            estado = 'qf'

        # se eu li a cadeia pórem a pilha não estiver vazia não vou para qf e a cadeia rejeita
        if estado != 'qf' :
            return 'rejeitado \n'

    # caso leia uma terminal na cadeia não existe nenhuma transição definida para esse terminal
    # a leitura de terminais da cadeia pára
    except:
        return 'rejeitado \n'

          
    return 'aceito \n'


print(automato(cadeia))

# Caio Marcelo da Silva de Jesus,PC3011259
# Mateus de Castro Duarte Cardoso, PC3008851
# Murilo Formaggio Feliciano, PC3006875
# 5º Período -Eng. Computação

# definição de cadeia de entrada
# entrada = 'main { var = valor ; )'

# ----------------- Entrada -----------------

#lê a cadeia de entrada
nome_arquivo = input("informe o nome do arquivo: ")

arquivo = open(nome_arquivo,"r")

entrada = []

# ======== lê linha a linha do arquivo =========

for linha in arquivo.readlines():

	entrada.extend(linha.split()) # adiciona a linha lida a variável 'entrada'
	
arquivo.close()

# -------------------------------------

# quebra a palavra de entrada em elementos de uma lista. se baseando espaço em branco
cadeia = entrada

# definiçao da função transição
transicao = { 
#{ (t)	:{ (V)	: [( alfa )]
'main' : {'S'    : [ 'MAIS_COMANDOS', 'COMANDOS','ABRE_CHAVE'] },
          '{'    : { 'ABRE_CHAVE' : []},
		  
'var'  : { 'COMANDOS': ['MAIS_ATRIBUICAO'],
		  'MAIS_VALOR': ['MAIS_VALORES'],
		  'MAIS_EXPRESSAO': ['PONTO_VIRG'], 
		  'INICIALIZACAO' : ['ATRIBUICAO'],
		  'TESTE': ['COMPARACAO'], 
		  'VALORES_INI'  : [],
		  'VALORES_TEST' : [],
		  'INCREMENTO' : ['OP_INCREMENTO'],
		  'MAIS_COMANDOS': ['MAIS_COMANDOS','MAIS_ATRIBUICAO']},
		  
'='	 : { 'MAIS_ATRIBUICAO' : [ 'MAIS_VALOR'],
		 'ATRIBUICAO' : ['VALORES_INI'] },
		  
'valor': { 'MAIS_VALOR' : ['PONTO_VIRG'], 
		  'MAIS_EXPRESSAO': ['PONTO_VIRG'],
		  'VALORES_INI': [], 
		  'VALORES_TEST' : [],
		  'VALOR_INCREMENTO' : []},
		  
'+'	 : { 'MAIS_VALORES'  : ['MAIS_EXPRESSAO'] },
'-'	 : { 'MAIS_VALORES'  : ['MAIS_EXPRESSAO'] },
'*'	 : { 'MAIS_VALORES'  : ['MAIS_EXPRESSAO'] },
'/'	 : { 'MAIS_VALORES'  : ['MAIS_EXPRESSAO'] },
'%'	 : { 'MAIS_VALORES'  : ['MAIS_EXPRESSAO'] },
';'  : { 'MAIS_VALORES'  : ['MAIS_EXPRESSAO'] },
		  
'for': { 'COMANDOS': ['MAIS_COMANDOS', 'COMANDOS', 'ABRE_CHAVE', 'FECHA', 'INCREMENTO', 'PONTO_VIRG', 'TESTE', 'PONTO_VIRG', 'INICIALIZACAO', 'ABRE'],
			'MAIS_COMANDOS': ['MAIS_COMANDOS', 'MAIS_COMANDOS', 'COMANDOS', 'ABRE_CHAVE', 'FECHA', 'INCREMENTO', 'PONTO_VIRG', 'TESTE', 'PONTO_VIRG', 'INICIALIZACAO','ABRE']},
		 
'('    : { 'ABRE': [] },
')'    : { 'FECHA': [] },
		  
'<' 	 : { 'COMPARACAO'  : ['VALORES_TEST'] },
'<='	 : { 'COMPARACAO'  : ['VALORES_TEST'] },
'>' 	 : { 'COMPARACAO'  : ['VALORES_TEST'] },
'>='     : { 'COMPARACAO'  : ['VALORES_TEST'] },

'++'	: {'OP_INCREMENTO' : []},
'--'	: {'OP_INCREMENTO' : []},
'=+'	: {'OP_INCREMENTO' : ['VALOR_INCREMENTO']},
'=-'	: {'OP_INCREMENTO' : ['VALOR_INCREMENTO']},
';'    : { 'PONTO_VIRG' : []},
'}'    : {'MAIS_COMANDOS' : []}
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

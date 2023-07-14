# definição de cadeia de entrada
entrada = 'main { var op_atrib valor ; var op_atrib var op_arit var ; if ( var op_comp valor ) { var op_atrib valor ; var op_atrib var op_arit var ; } }'

# quebra a palavra de entrada em elementos de uma lista. se baseando espaço em branco
cadeia = entrada.split()

# definiçao da função transição
transicao = {
#    (t)       (V )        ( alfa )
'main': { 'S' : [ 'MAIS_COMANDOS','COMANDOS','ABRE_CHAVE'] },

'{' : { 'ABRE_CHAVE' : [ ] },

'var' : { 'COMANDOS' : ['MAIS_VAR']  ,
          'MAIS_OP' : ['OP_ARIT']  ,
          'MAIS_OP_ARIT' : [ 'PONTO_VIRG' ]  ,
          'EXPRESSAO' : [ 'MAIS_EXPRESSAO' ]  ,
          'COMPARACAO' : [ ] ,
          'MAIS_COMANDOS' : [ 'MAIS_VAR' ] } ,

'op_atrib' : { 'MAIS_VAR' : ['MAIS_OP'] } ,

'valor' : { 'MAIS_OP' : ['PONTO_VIRG' ]  ,
            'MAIS_OP_ARIT' : [ 'PONTO_VIRG' ]  ,
            'COMPARACAO' : [ ] } ,

';' : { 'PONTO_VIRG' : [ ]  } ,

'op_arit' : { 'OP_ARIT' : [ 'MAIS_OP_ARIT' ] } ,

'if' : { 'COMANDOS' : [ 'MAIS_COMANDOS' , 'COMANDOS', 'ABRE_CHAVE' , 'FECHA', 'EXPRESSAO', 'ABRE' ]  ,
         'MAIS_COMANDOS' : [ 'MAIS_COMANDOS', 'COMANDOS', 'ABRE_CHAVE', 'FECHA', 'EXPRESSAO' , 'ABRE' ] } ,

'(' : { 'ABRE' : [ ] } ,

')' : { 'FECHA' : [ ] } ,

'op_comp' : { 'MAIS_EXPRESSAO' : [ 'COMPARACAO' ] } ,

'}' : { 'MAIS_COMANDOS' : [ ]} 

 }


# definição da função automo com pilha
def automato ( fita) :

    # as trnsição do autômato com pilha ocorrem no estado q1
    estado = 'q1'

    # a transição de q0 para q1 acrescenta a variável S no topo pilha
    pilha = ['S']

    try:
        # vai percorrer os terminais da cadeia de entrada sempre buscando uma transição para o terminal
        for terminal in fita:  
            
            topo = pilha.pop()   # remove o elemento do topo da pilha

            pilha.extend(transicao[terminal][topo])

            print(' terminal: ',terminal,' topo da pilha: ',topo, ' pilha ',pilha)

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

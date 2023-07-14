# comentário em Python

# dicionário { chave    :   { chave2: valor } }
# dicionário { estado_atual    :   { letra : próximo } }

transicao = {
    'q0' : { '-' : 'qf1' , 
    '+' : 'qf2', 
    '*' : 'qf3',
    '/' : 'qf4',
	'%' : 'qf5',
	'=' : 'qf6', 
  	'!' : 'qf7',
  	'>' : 'qf8',
	'<' : 'qf9',
	'&' : 'q1',
  	'|' : 'q2',
     } ,
    
    'q1' : { '-' : 'qf1',
	  '&' : 'qf'} ,
    
    'q2' : { '|' : 'qf'} ,
    
    'qf1' : { '-': 'qf',
    '=' : 'qf'} ,
    
    'qf2' : { '+' : 'qf',
	'=' : 'qf'} ,
	
	'qf3' : { '=' : 'qf' } ,
	
	'qf4' : { '=' : 'qf' } ,
	
	'qf5' : { '=' : 'qf' } ,
	
	'qf6' : { '=' : 'qf' } ,
	
	'qf7' : { '=' : 'qf' } ,
	
	'qf8' : { '=' : 'qf' } ,
	
	'qf9' : { '=' : 'qf' } 
}


# 2ª definição do autômato (reconhecimento = 'excel')

def automato(cadeia) :
    
    estado = 'q0' # definindo o estado inicial 
    F = ['qf', 'qf1', 'qf2', 'qf3', 'qf4', 'qf5', 'qf6', 'qf7', 'qf8', 'qf9']    
    
    try: # podemos ficar *presos* em um estado sem definição para a entrada (ex: "far")
        for letra in cadeia: #percorre letra a letra da cadeia entrada
            print (estado, '    ', letra) # debug para ver os estados atuais
            estado = transicao[estado][letra] # dicionario [chave1][chave2]
        
            print ( ' proximo estado : ', estado) # termina for
							# toda a cadeia foi lida
        
        if estado not in F : # quando lê toda a a cadeia porém não alcança o estado final (a cadeia é um subconjunto das palavras reconhecidas.
					# exemplo "fo" é sub conjunto ( "for" ))
            return 'rejeitada'
    
    except: # não conseguiu executar todo o for, ou seja, partou no meio do caminho
            # Ex: "far" (não existe transição para a letra 'a')
        return 'rejeitada'
        
    return 'aceita' # ela sai da função significando que ele percorreu toda a cadeia de entrada e alcançou o estado final.
    
# 3ª parte: teste

resposta = 's'
while (resposta == 's'): 
    cadeia = input('informe a palavra: ')
    print(automato(cadeia)) 
    resposta = input ('deseja continuar? (s/n): ')
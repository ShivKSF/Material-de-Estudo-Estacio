programa
{
	
	funcao inicio()
	{
		inteiro numMes
		cadeia mesExtenso=""
		logico invalido=falso
		escreva("Informe o número do mês: ")
		leia(numMes)
		escolha(numMes)
  		{
		caso 1:
			mesExtenso="janeiro"
			pare
		caso 2:
			mesExtenso="fevereiro"
			pare
		caso 3:
			mesExtenso="março"
			pare
		caso 4:
			mesExtenso="abril"
			pare
		caso 5:
			mesExtenso="maio"
			pare
		caso 6:
			mesExtenso="junho"
			pare
		caso 7:
			mesExtenso="julho"
			pare
		caso 8:
			mesExtenso="agosto"
			pare
		caso 9:
			mesExtenso="setembro"
			pare
		caso 10:
			mesExtenso="outubro"
			pare
		caso 11:
			mesExtenso="novembro"
			pare
		caso 12:
			mesExtenso="dezembro"
			pare
		caso contrario:
			escreva("Mês inválido!!!")
			invalido=verdadeiro
		}
		se(nao verdadeiro)
		{
		escreva("O número ", numMes, " equivale ao mês de ", mesExtenso)
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 769; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
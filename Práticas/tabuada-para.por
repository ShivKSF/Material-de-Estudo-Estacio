programa
{
	
	funcao inicio()
	{
		inteiro num, contador, res
		escreva("Você deseja ver a tabuada de qual número? ")
		leia (num)
		para(contador=0; contador<=10; contador++)
		{
			res=num*contador
			escreva(num, " x ", contador, " = ", res, "\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 62; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
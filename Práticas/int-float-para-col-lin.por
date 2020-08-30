programa
{
	
	funcao inicio()
	{
		inteiro lin, col
		real notas[35][3]
		para(lin=0;lin<=34;lin++)
		{
			escreva("*** Notas do ", lin+1, "o. aluno ***\n")
			para(col=0;col<=2;col++)
			{
				escreva("Informe a nota ", col+1, ": ")
				leia(notas[lin][col])
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 142; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
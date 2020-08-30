#include <iostream>
using namespace std;
int main()
{
	int qntde_entrevistados, soma_pesos, soma_idades, idade;
	float peso, media_pesos, media_idades;
	qntde_entrevistados=0;
	soma_pesos=0;
	soma_idades=0;
	cout << "Qual o peso do entrevistado? ";
	cin >> peso;
	while (peso!=0)
	{
		cout << "Qual a idade do entrevistado? ";
		cin >> idade;
		qntde_entrevistados++;
		soma_pesos+=peso;
		soma_idades+=idade;
		cout << "Qual o peso do entrevistado? ";
		cin >> peso;
	}
	media_pesos=soma_pesos/qntde_entrevistados;
	media_idades=soma_idades/qntde_entrevistados;
	cout << "Foram entrevistadas " << qntde_entrevistados << " pessoas.\n";
	cout << "A média das idades é: "<< media_idades << "\n";
	cout << "A média de pesos é: " << media_pesos << "\n";
}

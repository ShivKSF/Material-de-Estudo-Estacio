#include <iostream>
using namespace std;

int main()
{
	int anoAtual, anoNasc, idade;
	cout<<"Ano atual: ";
	cin>>anoAtual;
	cout<<"Ano de nascimento: ";
	cin>>anoNasc;
	idade=anoAtual-anoNasc;
	cout<<"Você tem ou fará " << idade << " anos.";
	if (idade>=16)
	{
		cout << "Você já pode votar!";
	}
	else
	{
		cout << "Você ainda não pode votar!";
	}
}

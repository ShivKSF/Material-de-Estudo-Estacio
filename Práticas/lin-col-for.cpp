#include <iostream>
using namespace std;
int main()
{
	int lin, col;
	float notas[35][3];
	for(lin=0;lin<=34;lin++)
	{
		cout << "*** Notas do " << lin+1 << "o. aluno ***\n";
		for(col=0;col<=2;col++)
		{
			cout << "Informe a nota " << col+1 << ": ";
			cin >> notas[lin][col];
		}
	}
}

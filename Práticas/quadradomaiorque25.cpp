#include <iostream>
using namespace std;
int main()
{
	int num, quadrado;
	cout << "Informe um número qualquer: ";
	cin >> num;
	quadrado=num*num;
	cout << num << "ao quadrado é: " << quadrado;
	if (quadrado>25)
	{
		cout << "O quadrado de " << num << " é maior do que 25.";
	}
}

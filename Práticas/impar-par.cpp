#include <iostream>
using namespace std;
int main()
{
	int num, resto;
	cout << "Informe um número qualquer: ";
	cin >> num;
	resto=num%2;
	if(resto==0)
	{
		cout << "Este número é par!";
	}
	else
	{
		cout << "Este número é impar!";
	}
}

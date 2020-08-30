#include <iostream>
using namespace std;
int main()
{
	float lado1, lado2, lado3;
	cout << "Medida do primeiro lado: ";
	cin >> lado1;
	cout << "Medida do segundo lado: ";
	cin >> lado2;
	cout << "Medida do terceiro lado: ";
	cin >> lado3;
	if (lado1==lado2 && lado2==lado3)
	{
		cout << "Este triângulo é equilátero!";
	}
	else if (lado1==lado2 || lado2==lado3 || lado3==lado1)
	{
		cout << "Este triângulo pe escaleno!";
	}
	else
	{
		cout << "Este é um triângulo isóceles!";
	}
}

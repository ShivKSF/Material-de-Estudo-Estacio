#include <iostream>
using namespace std;
int main()
{
	int idade;
	cout << "Idade do competidor: ";
	cin >> idade;
	if (idade>=7 && idade<=12)
	{
		cout << "Categoria: INFANTIL";
	}
	else if (idade>=13 && idade<=17)
	{
		cout << "Categoria: JUVENIL";
	}
	else if (idade>=18 && idade<=49)
	{
		cout << "Categoria: ALDUTO";
	}
	else if (idade>=50)
	{
		cout << "Categoira: SENIOR";
	}
	else
	{
		cout << "Idade Inválida!";
	}
}

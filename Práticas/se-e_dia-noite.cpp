#include <iostream>
using namespace std;
int main()
{
	int hora;
	cout << "Informe a hora: ";
	cin >> hora;
	if(hora>=6 && hora<=18)
	{
		cout << "� dia!";
	}
	else
	{
		cout << "� noite!";
	}
}

#include <iostream>
using namespace std;
int main()
{
	float dias, anos;
	cout << "Quantos dias voc� viveu? ";
	cin >> dias;
	anos=dias/365;
	cout << "Voc� j� viveu ", anos, " anos.";
	if(anos>=18)
	{
		cout << "Voc� � maior de idade.";
	}
}

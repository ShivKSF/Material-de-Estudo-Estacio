#include <iostream>
using namespace std;
int main()
{
	int  contador, res, num=10;
	cout << "Voc� deseja ver a tabuada de que n�mero? "
	cin >> num;
	while (contador<=10)
	{
		res = num * contador;
		cout<<num<<" x "<<contador<<" = "<<res<<"\n";
		contador++
	}
}

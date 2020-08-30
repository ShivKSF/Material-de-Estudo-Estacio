#include <iostream>
using namespace std;
int main()
{
	int regressiva, contador;
	cout<<"Qual o valor para o início da contagem regressiva? ";
	cin>>regressiva;
	for(contador=regressiva;contador>=0;contador--)
	{
		cout<<contador<< "\n";
	}
}

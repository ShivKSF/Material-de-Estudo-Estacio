#include <iostream>
using namespace std;
int main()
{
	int num, contador, idade;
	for(contador=1;contador<=5;contador++)
	{
		cout<<"Qual a "<< contador<< "a. idade? ";
		cin>>idade;
		if(idade>=18)
		{
			cout<<"J� pode tirar carteira de motorista!\n";
		}
		else
		{
			cout<<"Ainda n�o pode tirar carteira de motorista!\n";
		}
	}
}

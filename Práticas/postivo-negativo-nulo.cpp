#include <iostream>
using namespace std;
int main()
{
int num;
cout << "Informe um número!";
cin >> num;
if (num>0)
{
	cout << "Este número é positivo!";
}
else if(num<0)
{
	cout << "Este número é negativo!";
}
else
{
	cout << "Este número é nulo!";
}
}


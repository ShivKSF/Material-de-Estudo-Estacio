#include <iostream>
using namespace std;
enum {BASICO, TRIO, AR, DIRECAO, COMPLETO, SAIR};
void menuOpcoes() {
cout << "0- Basico\n";
cout << "1- Trio eletrico\n";
cout << "2- Ar Condicionado\n";
cout << "3- Direcao hidraulica\n";
cout << "4- Completo (Trio + Ar + Direcao)\n";
cout << "5- Sair\n";
cout << ">>";
}
float calcularValorTotal(int opcao, float valorFabrica) {
float valorTotal;
if (opcao == BASICO) valorTotal = valorFabrica;
if (opcao == TRIO || opcao == AR || opcao == DIRECAO) valorTotal = valorFabrica + valorFabrica*1.02F;
if (opcao == COMPLETO) {
float valorIpi = valorFabrica * 0.02F;
float extraAdicional = valorIpi * 0.02F;
float valorDesconto = extraAdicional/0.35F;
valorTotal = valorDesconto;
}
return valorTotal;
}
int main (void) {
float valorFabrica, valorTotal;
int opcao=-1;
int contBasico = 0, contTrio = 0, contAr = 0, contDirecao = 0, contCompleto = 0;
while (opcao != SAIR) {
cout << "Informe o valor de fabrica do carro: ";
cin >> valorFabrica;
menuOpcoes();
cin >> opcao;
if (opcao < BASICO || opcao > SAIR) {
cout << "Opcao invalida\n";
} else if (opcao >= BASICO && opcao < SAIR) {
if (opcao == BASICO) {contBasico++;}
else if (opcao == TRIO) {contTrio++;}
else if (opcao == AR) {contAr++;}
else if (opcao == DIRECAO) {contDirecao++;}
else if (opcao == COMPLETO) {contCompleto++;}
valorTotal = calcularValorTotal(opcao, valorFabrica);
cout << "Valor total do carro: " << valorTotal;
cout << "\n";
}
};
cout << "Contador das escolhas: " << "\n";
cout << "Basico: " << contBasico << "\n";
cout << "Trio: " << contTrio << "\n";
cout << "Ar: " << contAr << "\n";
cout << "Direcao: " << contDirecao << "\n";
cout << "Completo: " << contCompleto << "\n";
}

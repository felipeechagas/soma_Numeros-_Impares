#include<iostream>

/*
Somar Impares
Ler 2 numeros inteiros x e y (em qualquer ordem).
A serguir, calcular e mostrar a soma dos numeros impares entre eles.
exemplo:

Digite dois numeros:
2
9
Soma dos impares = 15
*/
using namespace std;

int main() {

	int x, y, soma, troca;
	//Solicita os dois numeros e ler
	cout << "Digite dois numeros:" << endl;
	cin >> x;
	cin >> y;

	//Para que possa ter a ordem do maior para o menor, necessario efetuar troca
	if( x > y) {
		//salva o valor na variavel e em seguida atribui a outra variavel
		troca = x;
		x = y;
		y = troca;

	}
	
	soma = 0;
	//condicao para obter os valores corretos e efetuar a soma corretamente.
	for(int i = x+1; i < y; i++) {

		//condicao para saber se eh par ou impar
		if( i % 2 != 0) {
			soma = soma + i;
		}
	}

	cout << "Soma dos impares = " << soma;

	return 0;
}


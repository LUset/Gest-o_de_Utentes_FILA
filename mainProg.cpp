/*
Files: queue.h and mainProg.cpp
Author: Paulo Correia

Created on 02/06/2018
*/

/*
PEQUENO PROGRAMA PARA GESTÃO DE UMA FILA DE ATENDIMENTO NO BALCÃO DE UMA CLÍNICA DENTÁRIA 
*/

//Bibliotecas necessárias
#include <iostream>
#include <stdlib.h>
#include <ctime>
//my header file
#include "queue.h"
//namspace utilizado
using namespace std;

//função main();
int main(void) {

	
	int n;
	
	Queue<int> fila(8);

	do {
		cout << "\n+=====================================+";
		cout << "\n||   Gestao Utentes em Fila          ||";
		cout << "\n||     Clinica Desntista             ||";
		cout << "\n||                                   ||";
		cout << "\n|| (1) Novo utente                   ||";
		cout << "\n|| (2) Atender utente                ||";
		cout << "\n|| (3) Proximo utente                ||";
		cout << "\n|| (4) Ultimo utente                 ||";
		cout << "\n|| (5) Lista completa de utentes     ||";
		cout << "\n|| (6) Sair                          ||";
		cout << "\n||                                   ||";
		cout << "\n|| Escolha uma opcao:                ||";
		cout << "\n||                                   ||";
		cout << "\n+=====================================+";
		cout << "\n -> ";
		cin >> n;

		switch (n) {
		case 1 :
			fila.enqueue();
			break;
		case 2:
			fila.dequeue();
			break;
		case 3:
			fila.first();
			break;
		case 4:
			fila.last();
			break;
		case 5:
			fila.printList();
			break;
		case 6:
			exit(0);
			break;
		default:
			cout << "\nOpcao invalida!!!";
		}
	} while (n <= 6);
	return 0;
}

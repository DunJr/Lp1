#include <iostream>
#include "Imovel.hpp"
#include "Casas.hpp"
#include "Aps.hpp"
#include "Terrenos.hpp"
#include <string>
#include <unistd.h>

using namespace std;

void menuIni(){
	system("clear");

	cout << endl;
	cout << " 1 - Cadastrar imovel." << endl;
	cout << " 2 - Listar imoveis." << endl;
	cout << " 3 - Buscar imoveis." << endl;
	cout << " 4 - Remover imovel." << endl;
	cout << " 5 - Editar imovel." << endl;
	cout << " 6 - Exit." << endl;
	cout << " Escolha uma das opcoes: ";
}

void menuTipo(){
	system("clear");

	cout << endl;
	cout << " 1 - Casa." << endl;
	cout << " 2 - Apartamento." << endl;
	cout << " 3 - Terreno vazio." << endl;
	cout << " 4 - Voltar." << endl;
	cout << " Escolha uma das opcoes: ";
}

void menuLista(){
	system("clear");

	cout << endl;
	cout << " 1 - Lista resumida." << endl;
	cout << " 2 - Lista Completa." << endl;
	cout << " 3 - Por Categoria." << endl;
	cout << " 4 - Voltar." << endl;
	cout << " Escolha uma das opcoes: ";
}

void novoImovel(Casas* c, Aps* a, Terrenos* t){
	int aux;
	do{
		menuTipo();
		cin >> aux;
		system("clear");

		switch(aux){
			case 1:					/* Casa */
				c->criaCasa(c);
				break;
			case 2:					/* Apartamento */
				a->criaAps(a);
				break;
			case 3:					/* Terreno */
				t->criaTerreno(t);
				break;
			case 4:					/* Voltar */
				cout << " Voltando..." << endl;
				sleep(2);
				break;
			default:
				cout << "\tOpcao invalida!\n\tTente novamente..." << endl;
				sleep(2);
				break;
		}
	}while(aux != 4);
}

void listaImoveis(Casas*c, Aps* a, Terrenos* t){
	Imovel* im;
	int aux, x;
	do{
		menuLista();
		cin >> aux;

		switch (aux){
			case 1:		/* resumida */
				im->mostraParte(im);
				break;
			case 2:		/* completa */
				system("clear");
				c->mostraCasa(c);a->mostraAps(a);t->mostraTerreno(t);
				cout << "\nDigite enter para voltar." << endl;
				cin.ignore();cin.ignore();
				break;
			case 3:		/* categoria */
				cout << "1 - Aluguel.\n2 - Venda.\n3 - Volar.\nEscolha uma das opcoes: " << endl;
				cin >> x;--x;
				if(x == 0 || x == 1){
					c->mostraCasaVA(c, x);
				}else if(x == 2){
					break;
				}else{
					cout << "\tOpcao invalida!\n\tTente novamente..." << endl;
					sleep(2);
					break;
				}
				break;
			case 4:		/* voltar */
				cout << " Voltando..." << endl;
				sleep(2);
				break;
			default:
				cout << "\tOpcao invalida!\n\tTente novamente..." << endl;
				sleep(2);
				break;
		}
	}while(aux != 4);
}

void inicio(Casas* c, Aps* a, Terrenos* t){
	int aux;
	do{
		menuIni();
		cin >> aux;

		switch(aux){
			case 1:			/* Cadastrar */
				novoImovel(c, a, t);
				break;
			case 2:			/* Listar */
				listaImoveis(c, a, t);
				break;
			case 3:			/* Buscar */
				break;
			case 4:			/* Remover */
				break;
			case 5:			/* Editar */
				break;
			case 6:			/* Sair */
				cout << " Saindo..." << endl;
				sleep(2);
				break;
			default:
				cout << "\tOpcao invalida!\n\tTente novamente..." << endl;
				sleep(2);
				break;
		}
	}while(aux != 6);
}



void listaCasa(Casas* c){
	c->mostraCasa(c);
}


int main(){
	Casas c; Aps a; Terrenos t;

	inicio(&c, &a, &t);

	c.mostraCasa(&c);
	a.mostraAps(&a);
	t.mostraTerreno(&t);
	system("clear");
	return 0;
}

#ifndef CASAS_H
#define CASAS_H

#include "Imovel.hpp"
#include <iostream>
#include <string>

using namespace std;

class Casas:public Imovel {
	private:
		int pavi;
		int quartos;
		int arTerreno;
		int arConstruida;
	public:
		Casas();
		Casas(string rua, int numero, string bairro, int cep, string cidade, int valor, int venda, int disp, string titulo, int codigo, int pavi, int quartos, int arTerreno, int arConstruida);
	
		int	getPavi();
		int	getQuartos();
		int getArTerreno();
		int	getArConstruida();
		
		void setPavi(int pavi);
		void setQuartos(int quartos);
		void setArTerreno(int arTerreno);
		void setArConstruida(int arConstruida);

		void criaCasa(Casas* c);
		void mostraCasa(Casas* c);
		void mostraCasaVA(Casas* c, int selec);
};

#endif

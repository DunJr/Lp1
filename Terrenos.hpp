#ifndef TERRENOS_H
#define TERRENOS_H

#include "Imovel.hpp"
#include <iostream>
#include <string>

using namespace std;

class Terrenos:public Imovel {
	private:
		int area;
	public:
		
		Terrenos();
		Terrenos(string rua, int numero, string bairro, int cep, string cidade, int valor, int venda, int disp, string titulo, int codigo, int area);
	
		int  getArea();
		
		void setArea(int area);

		void criaTerreno(Terrenos* t);
		void mostraTerreno(Terrenos* t);
		void mostraTerrenoVA(Terrenos* t, int selec);
};

#endif


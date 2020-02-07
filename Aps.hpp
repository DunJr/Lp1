#ifndef APS_H
#define APS_H

#include "Imovel.hpp"
#include <iostream>
#include <string>

using namespace std;

class Aps:public Imovel {
	private:
		int area;
		int quartos;
		string posicao;
		int andar;
		int condominio;
		int garagem;
	public:
		Aps();
		Aps(string rua, int numero, string bairro, int cep, string cidade, int valor, int venda, int disp, string titulo, int codigo, int area, int quartos, string posicao, int andar, int condominio, int garagem);
	
		int		getArea();
		int		getQuartos();
		string 	getPosicao();
		int		getAndar();
		int		getCondominio();
		int 	getGaragem();
		
		void setArea(int area);
		void setQuartos(int quartos);
		void setPosicao(string posicao);
		void setAndar(int andar);
		void setCondominio(int condominio);
		void setGaragem(int garagem);

		void criaAps(Aps* ap);
		void mostraAps(Aps* ap);
		void mostraApsVA(Aps* ap, int selec);

};

#endif

#ifndef IMOVEL_H
#define IMOVEL_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Imovel {
	protected:
		string rua;
		int numero;
		string bairro;
		int cep;
		string cidade;
		int valor;
		int venda;
		int disp;
		int tipo;
		string titulo;
		int codigo;
	public:
		Imovel();
		Imovel(string rua, int numero, string bairro, int cep, string cidade, int valor, int venda, int disp, string titulo, int codigo);
		
		string 	getRua();
		int    	getNumero();
		string 	getBairro();
		int    	getCep();
		string 	getCidade();
		int    	getValor();
		int    	getVenda();
		int    	getDisp();
		int   	getTipo();
		string 	getTitulo();
		int		getCodigo();

		void setRua(string rua);
		void setNumero(int numero);
		void setBairro(string bairro);
		void setCep(int cep);
		void setCidade(string cidade);
		void setValor(int valor);
		void setVenda(int venda);
		void setDisp(int disp);
		void setTipo(int tipo);
		void setTitulo(string titulo);
		void setCodigo(int codigo);

		void mostraParte(Imovel* im);


	protected:
		vector<Imovel*> imoveis;
};

#endif


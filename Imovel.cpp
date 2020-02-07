#include "Imovel.hpp"
#include <string>

using namespace std;

Imovel::Imovel(){
	rua = "";
	numero = -1;
	bairro = "";
	cep = -1;
	cidade = "";
	valor = -1; 
	venda = -1;
	disp = -1;
	tipo = 0;
	titulo = "";
	codigo = -1;
}

Imovel::Imovel(string rua, int numero, string bairro, int cep, string cidade, int valor, int venda, int disp, string titulo, int codigo){
	this->rua = rua;
	this->numero = numero;
	this->bairro = bairro;
	this->cep = cep;
	this->cidade = cidade;
	this->valor = valor;
	this->venda = venda;
	this->disp = disp;
	this->tipo = 0;
	this->titulo = titulo;
	this->codigo = codigo;
}

string Imovel::getRua(){
	return rua;
}

int Imovel::getNumero(){
	return numero;
}

string Imovel::getBairro(){
	return bairro;
}

int Imovel::getCep(){
	return cep;
}

string Imovel::getCidade(){
	return cidade;
}

int Imovel::getValor(){
	return valor;
}

int Imovel::getVenda(){
	return venda;
}

int Imovel::getDisp(){
	return disp;
}

int Imovel::getTipo(){
	return tipo;
}

string Imovel::getTitulo(){
	return titulo;
}

int Imovel::getCodigo(){
	return codigo;
}

void Imovel::setRua(string rua){
	this->rua = rua;
}

void Imovel::setNumero(int numero){
	this->numero = numero;
}

void Imovel::setBairro(string bairro){
	this->bairro = bairro;
}

void Imovel::setCep(int cep){
	this->cep = cep;
}

void Imovel::setCidade(string cidade){
	this->cidade = cidade;
}

void Imovel::setValor(int valor){
	this->valor = valor;
}

void Imovel::setVenda(int venda){
	this->venda = venda;
}

void Imovel::setDisp(int disp){
	this->disp = disp;
}

void Imovel::setTipo(int tipo){
	this->tipo = tipo;
}

void Imovel::setTitulo(string titulo){
	this->titulo = titulo;
}

void Imovel::setCodigo(int codigo){
	this->codigo = codigo;
}

void Imovel::mostraParte(Imovel* im){
	cout << "Lista Resumida de imoveis: " << endl;

	for (int i = 0; i < imoveis.size(); i++){
		im = imoveis[i];
		cout << "\nImovel: " << i << endl;
		
		if(im->getTipo() == 1){
			cout << "Tipo do imovel: Casa" << endl;
		}else if(im->getTipo() == 2){
			cout << "Tipo do imovel: Apartamento" << endl;
		}else if(im->getTipo() == 3){
			cout << "Tipo do imovel: Terreno vazio" << endl;
		}

		cout << "Titulo: " << im->getTitulo() <<endl;
		cout << "Bairro: " << im->getBairro() <<endl;
		cout << "Cidade: " << im->getCidade() <<endl;
		cout << "Valor: "  << im->getValor()  <<endl;
		
	}
}
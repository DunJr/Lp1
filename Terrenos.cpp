#include "Terrenos.hpp"
#include <string>

using namespace std;

Terrenos::Terrenos(){
	setRua("");
	setNumero(-1);
	setBairro("");
	setCep(-1);
	setCidade("");
	setValor(-1);
	setVenda(-1);
	setDisp(-1);
	setTitulo("");
	setCodigo(-1);
	setTipo(3);
	area = 0;
}

Terrenos::Terrenos(string rua, int numero, string bairro, int cep, string cidade, int valor, int venda, int disp, string titulo, int codigo ,int area) : Imovel(rua, numero, bairro, cep, cidade, valor, venda, disp, titulo, codigo){
	setRua(rua);
	setNumero(numero);
	setBairro(bairro);
	setCep(cep);
	setCidade(cidade);
	setValor(valor);
	setVenda(venda);
	setDisp(disp);
	setTitulo(titulo);
	setCodigo(codigo);
	setTipo(3);
	this->area = area;
}

int	Terrenos::getArea(){
	return area;
}

void Terrenos::setArea(int area){
	this->area = area;
}

void Terrenos::criaTerreno(Terrenos* c) {
	c = new Terrenos();

	cout << "Digite a rua: " << endl;
	cin.ignore();
	getline(cin, c->rua);
	cout << "Digite o numero: " << endl;
	cin >> c->numero;
	cout << "Digite o bairro: " << endl;
	cin.ignore();
	getline(cin, c->bairro);
	cout << "Digite o CEP: " << endl;
	cin >> c->cep;
	cout << "Digite a cidade: " << endl;
	cin.ignore();
	getline(cin, c->cidade);
	cout << "Digite o titulo de venda: " << endl;
	//cin.ignore();
	getline(cin, c->titulo);

	while(1){
		cout << "Digite o valor: " << endl;
		cin >> c->valor;
		if(c->valor < 0){
			cout << "O valor precisa ser positivo !\nTente novamente." << endl;
			continue;
		}else{
			break;
		}
	}
	while(1){
		cout << "Digite 0 para aluguel e 1 para venda: " << endl;
		cin >> c->venda;
		if(c->venda != 1 && c->venda != 0){
			cout << "Opcao invalida !\nTente novamente." << endl;
			continue;
		}else{
			break;
		}
	}
	while(1){
		cout << "Digite 0 para indisponivel e 1 para disponivel: " << endl;
		cin >> c->disp;
		if(c->disp != 1 && c->disp != 0){
			cout << "Opcao invalida !\nTente novamente." << endl;
			continue;
		}else{
			break;
		}
	}
	while(1){
		cout << "Digite a area do terreno : " << endl;
		cin >> c->area;
		if(c->area < 0){
			cout << "O valor precisa ser positivo !\nTente novamente." << endl;
			continue;
		}else{
			break;
		}
	}
		while(1){
		int tam, a = 0;
		tam = imoveis.size();
		cout << "Digite o codigo do imovel: " << endl;
		cin >> c->codigo;
		
		for(int cont = 0; cont < tam; ++cont){
			if(c->codigo != imoveis[cont]->getCodigo()){
				a++;
			}else{
				break;
			}
		}
		if(a != tam){
			cout << "Codigo existente!!\nTente novamente com um novo codigo..." << endl;
		}
		else{
			break;
		}

	}

	this->imoveis.push_back(c);
}

void Terrenos::mostraTerreno(Terrenos* im) {

	for(int i = 0; i < this->imoveis.size(); ++i) {
		cout << endl;
		im = (Terrenos*)imoveis[i];

		
   		if(im->getTipo() == 3){
   		cout << "Titulo de venda: " 	<< im->getTitulo() 	<< endl;
		cout << "Nome da rua: " 		<< im->getRua() 	<< endl;
		cout << "Numero da terreno: " 	<< im->getNumero() 	<< endl;
		cout << "bairro da terreno: "	<< im->getBairro() 	<< endl;
		cout << "CEP da terreno: " 		<< im->getCep() 	<< endl;
		cout << "Nome da cidade: " 		<< im->getCidade() 	<< endl;
		cout << "Valor do terreno: " 	<< im->getValor() 	<< endl;
		cout << "Area do terreno : "  	<< im->getArea() 	<< endl;
		cout << "Codigo do imovel" 		<< im->getCodigo()	<< endl;

		if(im->getVenda() == 1)
			cout << "O imovel esta ofertado a venda" << endl;
			else
				cout << "O imovel esta ofertado a aluguel" << endl;
		}
		if(im->getDisp() == 1)
			cout << "O imovel esta disponivel" << endl;
			else
				cout << "O imovel esta indisponivel" << endl;
		}

  }

void Terrenos::mostraTerrenoVA(Terrenos* im, int selec) {

	for(int i = 0; i < this->imoveis.size(); ++i) {
		cout << endl;
		im = (Terrenos*)imoveis[i];

		
   		if(im->getTipo() == 3 && selec == im->venda){
   		cout << "Titulo de venda: " 	<< im->getTitulo() 	<< endl;
		cout << "Nome da rua: " 		<< im->getRua() 	<< endl;
		cout << "Numero da terreno: " 	<< im->getNumero() 	<< endl;
		cout << "bairro da terreno: "	<< im->getBairro() 	<< endl;
		cout << "CEP da terreno: " 		<< im->getCep() 	<< endl;
		cout << "Nome da cidade: " 		<< im->getCidade() 	<< endl;
		cout << "Valor do terreno: " 	<< im->getValor() 	<< endl;
		cout << "Area do terreno : "  	<< im->getArea() 	<< endl;
		cout << "Codigo do imovel" 		<< im->getCodigo()	<< endl;

		if(im->getVenda() == 1)
			cout << "O imovel esta ofertado a venda" << endl;
			else
				cout << "O imovel esta ofertado a aluguel" << endl;
		}
		if(im->getDisp() == 1)
			cout << "O imovel esta disponivel" << endl;
			else
				cout << "O imovel esta indisponivel" << endl;
		}

  }











#include "Aps.hpp"
#include <string>

using namespace std;

Aps::Aps(){
	setRua("");
	setNumero(-1);
	setBairro("");
	setCep(-1);
	setCidade("");
	setValor(-1);
	setVenda(-1);
	setDisp(-1);
	setTipo(2);
	setTitulo("");
	setCodigo(-1);
	area = -1;
	quartos = -1;
	posicao = "";
	andar = -1;
	condominio = -1;
	garagem = -1;
}

Aps::Aps(string rua, int numero, string bairro, int cep, string cidade, int valor, int venda, int disp, string titulo, int codigo, int area, int quartos, string posicao, int andar, int condominio, int garagem) : Imovel(rua, numero, bairro, cep, cidade, valor, venda, disp, titulo, codigo){
	setRua(rua);
	setNumero(numero);
	setBairro(bairro);
	setCep(cep);
	setCidade(cidade);
	setValor(valor);
	setVenda(venda);
	setDisp(disp);
	setTipo(2);
	setTitulo(titulo);
	setCodigo(codigo);
	this->area = area;
	this->quartos = quartos;
	this->posicao = posicao;
	this->andar = andar;
	this->condominio = condominio;
	this->garagem = garagem;
}

int		Aps::getArea(){
	return area;
}

int		Aps::getQuartos(){
	return quartos;
}

string 	Aps::getPosicao(){
	return posicao;
}

int 	Aps::getAndar(){
	return andar;
}

int		Aps::getCondominio(){
	return condominio;
}

int 	Aps::getGaragem(){
	return garagem;
}

void Aps::setArea(int area){
	this->area = area;
}

void Aps::setQuartos(int quartos){
	this->quartos = quartos;
}

void Aps::setPosicao(string posicao){
	this->posicao = posicao;
}

void Aps::setAndar(int andar){
	this->andar = andar;
}

void Aps::setCondominio(int condominio){
	this->condominio = condominio;
}

void Aps::setGaragem(int garagem){
	this->garagem = garagem;
}

void Aps::criaAps(Aps* c) {
	c = new Aps();	
	
	c->setTipo(2);
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
	cout << "Digite a posicao do apartamento: " << endl;
	//cin.ignore();
	getline(cin, c->posicao);

	while(1){
		cout << "Digite o andar do apartamento: " << endl;
		cin >> c->andar;
		if(c->andar < 0){
			cout << "O valor precisa ser no minimo zero !\nTente novamente." << endl;
			continue;
		}else{
			break;
		}
	}
	while(1){
		cout << "Digite o valor do condominio: " << endl;
		cin >> c->condominio;
		if(c->condominio < 0){
			cout << "O valor precisa ser no minimo zero !\nTente novamente." << endl;
			continue;
		}else{
			break;
		}
	}
	while(1){
		cout << "Digite o numero de vagas na garagem: " << endl;
		cin >> c->garagem;
		if(c->garagem < 0){
			cout << "O valor precisa ser no minimo zero !\nTente novamente." << endl;
			continue;
		}else{
			break;
		}
	}
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
		cout << "Digite o numero de quartos: " << endl;
		cin >> c->quartos;
		if(c->quartos < 0){
			cout << "O valor precisa ser positivo !\nTente novamente." << endl;
			continue;
		}else{
			break;
		}
	}
	while(1){
		cout << "Digite a area do apartamento : " << endl;
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

void Aps::mostraAps(Aps* im) {

	for(int i = 0; i < this->imoveis.size(); ++i) {
		cout << endl;
		im = (Aps*)imoveis[i];

		
   		if(im->getTipo() == 2){
   		cout << "Titulo de venda: " 	<< im->getTitulo()	 	<< endl;
		cout << "Nome da rua: " 		<< im->getRua() 		<< endl;
		cout << "Numero do predio: "	<< im->getNumero() 	 	<< endl;
		cout << "Bairro da predio: "	<< im->getBairro()	 	<< endl;
		cout << "CEP da predio: " 		<< im->getCep() 		<< endl;
		cout << "Nome da cidade: " 		<< im->getCidade() 		<< endl;
		cout << "Valor da predio: " 	<< im->getValor() 		<< endl;
		cout << "Area do apartamento : "<< im->getArea() 		<< endl;
		cout << "Numero de quartos : "	<< im->getQuartos() 	<< endl;
		cout << "Area do posicao : "	<< im->getPosicao()		<< endl;
		cout << "Numero do andar : "	<< im->getAndar() 		<< endl;
		cout << "Valor do condominio : "<< im->getCondominio()	<< endl;	
		cout << "Vagas na garagem : "	<< im->getGaragem()		<< endl;
		cout << "Codigo do imovel: "	<< im->getCodigo()		<< endl;

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

void Aps::mostraApsVA(Aps* im, int selec) {

	for(int i = 0; i < this->imoveis.size(); ++i) {
		cout << endl;
		im = (Aps*)imoveis[i];

		
   		if(im->getTipo() == 2 && selec == im->getVenda){
   		cout << "Titulo de venda: " 	<< im->getTitulo()	 	<< endl;
		cout << "Nome da rua: " 		<< im->getRua() 		<< endl;
		cout << "Numero do predio: "	<< im->getNumero() 	 	<< endl;
		cout << "Bairro da predio: "	<< im->getBairro()	 	<< endl;
		cout << "CEP da predio: " 		<< im->getCep() 		<< endl;
		cout << "Nome da cidade: " 		<< im->getCidade() 		<< endl;
		cout << "Valor da predio: " 	<< im->getValor() 		<< endl;
		cout << "Area do apartamento : "<< im->getArea() 		<< endl;
		cout << "Numero de quartos : "	<< im->getQuartos() 	<< endl;
		cout << "Area do posicao : "	<< im->getPosicao()		<< endl;
		cout << "Numero do andar : "	<< im->getAndar() 		<< endl;
		cout << "Valor do condominio : "<< im->getCondominio()	<< endl;	
		cout << "Vagas na garagem : "	<< im->getGaragem()		<< endl;
		cout << "Codigo do imovel: "	<< im->getCodigo()		<< endl;

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






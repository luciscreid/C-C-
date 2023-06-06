#include <iostream>
#include <assert.h>
#include <string>
using namespace std;

class Nodo {
	public:
	int posicao;
	Nodo proximo;
	
};

class ListaLigada {
	public:



	ListaLigada(){}

	bool ehvazia() {
		
		
		return false;
	}


	void add(string palavra){

	}
	
	int posicao(string palavra) {
		return 0;
	}
	private:
	Nodo primeiro;

};

int main() {
	ListaLigada lista;

	assert(lista.ehvazia() == true);
	lista.add("arara");
	assert(lista.ehvazia() == false);
	

	return 0;
}
#include <iostream>
#include <assert.h>

//
// Classe Calc
//
class Calc {
public:
	int dobro(int num) {
		int dobro = num*2;
		return dobro;
	}
	
	int sucessor(int num){
		int sucessor = num +1;
		return sucessor;
	}
	
	int antecessor(int num){
		int antecessor = num-1;
		return antecessor;
	}
};

void testDobro() {
	Calc c;
	assert(10 == c.dobro(5));
	assert(20 == c.dobro(10));
	assert(50 == c.dobro(25));
}
//
// Classe Area
//
class Area {
public:
	int areaQuadrada(int a){
		int resultado = a*a;
		return resultado;
	}
	
	int areaCubica(int altura, int comprimento, int largura){
		
		int resultado = altura*comprimento*largura;
		return resultado;
	}
};

void testArea() {
	Area a;
	assert(4 == a.areaQuadrada(2));
	assert(25 == a.areaQuadrada(5));
	
	assert(64 == a.areaCubica(2, 8, 4));
	}

//
// teste sucessor e antecessor
//
void testSucessorEAntecessor() {
	Calc c;
	assert(11 == c.sucessor(10));
	assert(6 == c.sucessor(5));
	assert(9 == c.antecessor(10));
	assert(4 == c.antecessor(5));
	
}
//
//classe juros simples
//
class Juros {
public:
	double capital;
	double taxa;
	double periodo;
	
	double simples() {
		double simples = capital*taxa*periodo;
		return simples;
	}
};

void testJurosSimples() {
	Juros juros;
	
	juros.capital = 16000;
	juros.taxa = 0.04;
	juros.periodo = 4;

	assert(2560 == juros.simples());
}
//
//classe Triangulo
//
class Triangulo {
public:
	int a, b, c;
	
	bool validarForma(){
		if(a < b+c && b < a+c && c < a+b){
			return true;
		} else return false;
	}
};

void testValidarFormaCasoPositivo() {
	Triangulo triangulo;
	triangulo.a = 3;
	triangulo.b = 4;
	triangulo.c = 5;
	assert(triangulo.validarForma());
}
	
void testValidarFormaCasoNegativo() {
	Triangulo triangulo;
	triangulo.a = 1;
	triangulo.b = 4;
	triangulo.c = 5;
	assert(!triangulo.validarForma());
}
//
//Classe Total de Eleitores
//
class Votos{
public:
	double totalDeEleitores, validos, branco, nulos; //1000, 800, 150, 50
	
	double percentualValidos(){
		double percentual = (validos/totalDeEleitores)*100;
		return percentual;
	}
	double percentualBranco() {
		double percentual = (branco/totalDeEleitores)*100;
		return percentual;
	}
	double percentualNulos() {
		double percentual = (nulos/totalDeEleitores)*100;
		return percentual;
	}
};

void testVotos(){
	Votos votos;
	votos.totalDeEleitores = 1000;
	votos.validos = 800;
	votos.branco = 150;
	votos.nulos = 50;
	
	assert(80 == votos.percentualValidos());
	assert(15 == votos.percentualBranco());
	assert(5 == votos.percentualNulos());
}

int main() {
	testDobro();
	testArea();
	testSucessorEAntecessor();
	testJurosSimples();
	testValidarFormaCasoPositivo();
	testValidarFormaCasoNegativo();
	testVotos();
	
	printf("Deu Bom\n");
	return 0;
	
}
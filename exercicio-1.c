#include <stdio.h>
#include <assert.h>
// exercicio 1
int adicao(int num1, int num2){
	int adicao = num1 + num2;
	return adicao;
}

int subtracao(int num1, int num2){
	int subtracao = num1 - num2;
	return subtracao;
}

int divisao(int num1, int num2){
	int divisao = num1 / num2;
	return divisao;
}

int multiplicacao(int num1, int num2){
	int multiplicacao = num1 * num2;
	return multiplicacao;
}

// exercicio 2
int reajustesalarial(int salario, int reajuste){
	int reajustesalarial = salario * reajuste;
	return reajustesalarial;
}

//exercicio 3
float jurossimples(float capital, float taxadeemprestimo, float periodo){
	int juros = capital * taxadeemprestimo * periodo;
	return juros;
}

float custodefabricacaodeumcarro(float custodefabrica){
	float percentualdodistribuidor = 0.28;
	float percentualdeimpostos = 0.45;
	
	float partedodistribuidor = custodefabrica * percentualdodistribuidor;
	float partedeimpostos = custodefabrica * percentualdeimpostos;
	
	float custodefabricacaodeumcarro = custodefabrica + partedodistribuidor + partedeimpostos;
	return custodefabricacaodeumcarro;
	
	
}


int main(){
	assert(adicao(2, 2) == 4);
	assert(subtracao(2, 2) == 0);	
	assert(divisao(2, 2) == 1);
	assert(multiplicacao(2, 2) == 4);
	assert(reajustesalarial(1000, 0.15) == 150);
	assert(jurossimples(16000, 0.04, 4) == 2560);
	assert(custodefabricacaodeumcarro(10000) == 17300);
	
	printf("deu bom\n");
	return 0;
}
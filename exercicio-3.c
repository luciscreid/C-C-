#include <stdio.h>
#include <assert.h>

int somardigitossemloop(int num){
	int divi1 = num / 10;
	int divi2 = divi1 / 10;
	int divi3 = divi2 / 10;
	int divi4 = divi3 / 10;
	
	int a = num % 10;
	int b = divi1 % 10;
	int c = divi2 % 10;
	int d = divi3 % 10;
	
	int soma = a + b + c + d;
	
	return soma;
}


void printarDe0Ate10ComWhile() {
	int contador = 0;
    
    while (contador <= 10) {
        contador++;
    }
}

void printarDe0Ate10ComFor() {	
	for (int contador = 0; contador <= 10; contador++) {
    }
}

void printarDe0Ate10ComDoWhile() {
	int contador = 0;
	
	do{
		contador++;
	} while (contador <=10);
	
}


int somardigitoscomloop(int num){
	int soma = 0;
	
	while(num > 0){
		soma = soma + num % 10;
		num = num / 10;
	
	}
	return soma;
}

/*
	return 0; se for falso
	return 1; se for verdadeiro
*/
int divisaoexata(int num1, int num2){
	if (num1 % num2 == 0){
		
		return 1;
	} return 0;
}

int ehprimo(int numfix){
	int numdiv = numfix -1;
	int tacerto = 1;
	
	if( numfix <= 3){
		return 1;
	}
	
	while (numdiv >= 2){
		if (divisaoexata(numfix, numdiv) == 1) {
			return 0;	
		}
		numdiv--;
	}
	return 1;
}

//MDC
int mdc(int num1, int num2){
	int resto;	
	do{
		resto = num1 % num2;
		num1 = num2;
		num2 = resto;		
	} while (resto != 0);
	printf("O resultado é: %d\n", num1);
	
	return num1;
}

int mmc(int num1, int num2){
	int mmc = num1 * num2 / mdc(num1, num2);
	
	return mmc;
}


int main(){
	
	printarDe0Ate10ComWhile();
	printarDe0Ate10ComFor();
	printarDe0Ate10ComDoWhile();	
	
	assert(0 == somardigitoscomloop(0));
	assert(8 == somardigitoscomloop(2015));
	assert(15 == somardigitoscomloop(456));
	assert(10 == somardigitoscomloop(1111111111));
	
	//Ver se é primo	
	assert(1 == divisaoexata(3,1));
	
	assert(1 == divisaoexata(3,3));
	
	assert(0 == divisaoexata(3,2));
	
	assert(1 == ehprimo(2));
	assert(1 == ehprimo(3));
	
	assert(1 == ehprimo(5));
	assert(1 == ehprimo(7));
	assert(1 == ehprimo(11));
	assert(1 == ehprimo(13));
	assert(0 == ehprimo(4));
	assert(0 == ehprimo(6));
	assert(0 == ehprimo(9));
	assert(0 == ehprimo(10));
	assert(0 == ehprimo(12));
	assert(1 == ehprimo(104729));
	
	//MDC
	assert(3 == mdc(24,9));
	assert(10 == mdc(30,20));
	
	//MMC
	assert(60 == mmc(12,20));
	
	
	printf("Deu bom\n");
	
	return 0;
}


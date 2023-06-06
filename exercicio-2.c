#include <stdio.h>
#include <assert.h>
#include <math.h>

int ehpar(int num){
	
	if(num % 2 == 0){
		return 1;
	} return 0;	
}

int ehpositivo(int num){
	if(num >= 0){
		return 1;
	} return 0;
}

int maiorque10(int num){
	if(num >= 10){
		return 1;
	} return 0;
}

int ceciusparafahrenheit(int grauscelcius){
	int passo1 = grauscelcius * 9;
	int passo2 = passo1 / 5;
	int passo3 = passo2 + 32;
	int fahrenheit = passo3;
	return fahrenheit;
}

int fahrenheitparacelcius(int fahrenheit){
	int passo1 = fahrenheit - 32;
	int passo2 = passo1 * 5;
	int passo3 = passo2 / 9;
	int celcius = passo3;
	return celcius;	
}

int delta(int a, int b, int c){
	int delta = ( b * b -4 * a * c);
	
	return delta;
}

int divisao(int a, int b, int c){
	int divisao = 2*a;

	return divisao;
}


int x1(int a, int b, int c){
	int x1 = (-b + sqrt(delta(a, b, c))/divisao(a, b, c));
	
	return x1;
}

int x2(int a, int b, int c){
	int x2 = (-b - sqrt(delta(a, b, c))/divisao(a, b, c));

	return x2;
}

int main(){
	assert(ehpar(10) == 1);
	assert(ehpar(7) == 0);
	assert(ehpositivo(-5) == 0);
	assert(ehpositivo(5) == 1);
	assert(maiorque10(11) == 1);
	assert(maiorque10(9) == 0);
	assert(ceciusparafahrenheit(30) == 86);
	assert(fahrenheitparacelcius(86) == 30);
	int a = 1, b = 0, c = -16;
	assert(64 == delta(a, b, c));
	assert(4 == x1(a, b, c));
	assert(-4 == x2(a, b, c));
	printf("deu bom\n");
	
	return 0;
}

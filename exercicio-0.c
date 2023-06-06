#include <stdio.h>
#include <assert.h>

void troca(){
	
	int A = 100;
	int B = 55;
	int C = A;
	
	A = B;
	B = C;
	
	printf("%d\n", A);
	
	assert(A == 55);
	assert(B == 100);
	
}

int dobro(int num){
	int dobro = num*2;
	return dobro;

	
}

int area(int lado1, int lado2){
	int area = lado1 * lado2;
	return area;
}

int antecessor(int num){
	
	int antecessor = num - 1;
	return antecessor;
}

int sucessor(int num){
	
	int sucessor = num + 1;
	return sucessor;
}

int media(int num1, int num2, int num3){
	int valortotal = num1 + num2 + num3;
	
	int valortotal / 3;
	
	return media;
}

int main (){
	
	assert(dobro(6) == 12);
	troca();
	assert(area(3, 9) == 27);
	assert(antecessor(10) == 9);
	assert(sucessor(10) == 11);
	assert(media(6,7,8) == 7);
	
	printf("deu bom\n");
	return 0;
}




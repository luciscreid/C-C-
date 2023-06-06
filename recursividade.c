#include <stdio.h>
#include <assert.h>
#include <time.h>

int soma(int num){
	int somando = 0;
	if(num !=0){
		somando = num + soma(num -1);
		printf("somando: %d\n", somando);
		num--;
		return somando;
	}
}

void sleep() {
	clock_t começo = clock();
	while(clock() < começo +1*CLOCKS_PER_SEC){
		
	}
	return ;
}


int contadorRecursivo(int i) {
	
	if(i != 0){
		printf("%d\n", i);
		sleep();
		contadorRecursivo(i - 1);
	} else printf("LAAAAAAAAAANÇOUUUUUUUUUUUU PORRAAAAAAAAAAAAAAAAAAAAAAAAAA!!!!!!!!!!!!!!!!\n");
	return 0;
}

void contador(int i) {
	printf("inician contagem regressiva\n");
	while(i !=0){
		printf("%d\n", i);
		i--;
		sleep();
	}
	printf("LAAAAAAAAAANÇOUUUUUUUUUUUU PORRAAAAAAAAAAAAAAAAAAAAAAAAAA!!!!!!!!!!!!!!!!\n");
	return ;
}

int fatorial(int num){
	if(num == 0){
		return 1;
	} else if(num > 0){
		return num * fatorial(num -1);
	}
}

int fibonacci(int num){
	if(num == 0){
		return 0;
	} else if(num == 1){
		return 1;
	} else if(num > 1){
		return fibonacci(num -1) + fibonacci(num - 2);
	}
	
}



int main() {
	assert(15 == soma(5));
	assert(10 == soma(4));
	assert(6 == soma(3));
	
	contadorRecursivo(5);
	
	assert(1 == fatorial(0));
	assert(1 == fatorial(1));
	assert(2 == fatorial(2));
	assert(6 == fatorial(3));
	assert(24 == fatorial(4));
	assert(120 == fatorial(5));
	assert(720 == fatorial(6));
	
	assert(0 == fibonacci(0));
	assert(1 == fibonacci(1));
	assert(1 == fibonacci(2));
	assert(2 == fibonacci(3));
	assert(3 == fibonacci(4));
	assert(5 == fibonacci(5));
	assert(8 == fibonacci(6));
	
	return 0;
}
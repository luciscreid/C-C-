#include <stdio.h>
#include <assert.h>



void carregaVetor(){
	int vetor[5];
	
	for(int i = 0;i < 5; i++){
		vetor[i] = i + 1;
		// printf("contador: %d\n", vetor[i]);
	}

		
	// Testes
	assert(1 == vetor[0]);
	assert(2 == vetor[1]);
	assert(3 == vetor[2]);
	assert(4 == vetor[3]);
	assert(5 == vetor[4]);
	//
}


int retSomaVetor(int vetor[], int length){
	int soma = 0;
	for(int i = 0; i < length; i++) {
		int vetorAtual = vetor[i];
		
		soma = soma + vetorAtual;
	}	
	
	return soma;

}

int verSeTemRepetidos(int vetorB[], int length){
	
}



int main(){	
	
//carregar vetor
	carregaVetor();
	
	// ----------||----------
	
//somar vetor
	int vetor[4];
	
	vetor[0] = 10;
	vetor[1] = 20;
	vetor[2] = 30;
	vetor[3] = 0;
	assert(60 == retSomaVetor(vetor, 4));
	
	vetor[0] = 10;
	vetor[1] = 20;
	vetor[2] = 30;
	vetor[3] = 40;
	assert(100 == retSomaVetor(vetor, 4));
	
	// ----------||----------
	
//copiar vetor
	
	int vetor1[3] = {10, 20, 30},
	vetor2[3];
	
	for(int i = 0; i < 3; i++){
		vetor2[i] = vetor2[i] + vetor1[i];
		printf("vetor atual: %d %d\n", vetor1[i], vetor2[i]);
	}
	
	assert(vetor2[0] == 10);
	assert(vetor2[1] == 20);
	assert(vetor2[2] == 30);
	
	// ----------||----------

//maior e menor indice
	int vetorA[4];
	
	vetorA[0] = 5;
	vetorA[1] = 2;
	vetorA[2] = 9;
	vetorA[3] = 6;
	
	int iMaiorValor = 0;
	int iMaior = 0;
	int iMenorValor = vetorA[0];
	int iMenor = vetorA[0];

	for(int i = 0;i < 4;i++){
		if(iMaiorValor < vetorA[i]){
			iMaiorValor = vetorA[i];
			iMaior = i;
			printf("este é o maior indice e valor: %d %d\n", iMaiorValor, iMaior);
		}
		if(iMenorValor > vetorA[i]){
			iMenorValor = vetorA[i];
			iMenor = i;
			printf("este é o menor indice e valor: %d %d\n", iMenorValor, iMenor);
		}
	}
	
	// ----------||----------
	
//ver se tem repetidos
	int vetorB[5];
		
	vetorB[0] = 3;
	vetorB[1] = 7;
	vetorB[2] = 5;
	vetorB[3] = 7;
	vetorB[4] = 8;
	
	int ehrepetido = 0;
	for(int i = 0;i < 5;i++){
		for(int j = i+1;j < 5;j++){
			if(vetorB[i] == vetorB[j]){
				ehrepetido = 1;
			} 
		}
		
	}
	if(ehrepetido == 1){
		printf("tem valores repetidos no vetor\n");
	}
	
	
	
	// for(int i = 0;i < 5; i++){
		// int vetAtual = vetorB[i];
		// if(vetAtual == vetorB[0]){
			// printf("o vetor tem valores repetidos: %d\n", vetAtual);
		// }
		// if(vetAtual == vetorB[1]){
			// printf("o vetor tem valores repetidos: %d\n", vetAtual);
		// }
		// if(vetAtual == vetorB[2]){
			// printf("o vetor tem valores repetidos: %d\n", vetAtual);
		// }
		// if(vetAtual == vetorB[3]){
			// printf("o vetor tem valores repetidos: %d\n", vetAtual);
		// }
		// if(vetAtual == vetorB[4]){
			// printf("o vetor tem valores repetidos: %d\n", vetAtual);
		// }
	// }
	return 0;
}
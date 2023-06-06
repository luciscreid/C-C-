#include <stdio.h>
#include <assert.h>





void bubble_sort (int vetor[], int n) {
    int i, j;
	for(i = 0; i < n;i++){
		for(j = i+ 1;j < n;j++){
			if(vetor[i] > vetor[j]){
				int aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
			printf("vetor pronto %d\n", vetor[i]);

	}
}

void bubble_sort_palavras (char vetor[], int n) {
	int i, j;
	for(i = 0; i < n;i++){
		for(j = i+ 1;j < n;j++){
			if(vetor[i] > vetor[j]){
				int aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
			printf("vetor pronto %c\n", vetor[i]);

	}
}

int main(){
	int vetor[] = {28, 6, 4, 2,24};
	bubble_sort(vetor, 5);
	
	char palavras[] = {'Z','C','D','A','J'};
	printf(" %d %d %d %d %d\n", 'Z' ,'C' ,'D' ,'A' ,'J');
	bubble_sort_palavras(palavras, 5);
	return 0;
}
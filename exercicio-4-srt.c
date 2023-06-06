#include <stdio.h>
#include <assert.h>



int contaChar(char str[]) {
	int soma = 0;
	int i = 0;
	while(str[i] != 0){
		soma++;
		i++;
	}
	return soma;
}

int contaVogal(char str[]){
	int vogais = 0;
	char vogal[] = "aeiou";	

	// for(int i = 0;str[i] != 0; i++){
		// if(str[i] == vogal[0] || str[i] == vogal[1] || str[i] == vogal[2] || str[i] == vogal[3] || str[i] == vogal[4]){
			// vogais++;
			// printf("esta eh a quantidade de vogais: %d\n", vogais);
		// }
	// }
	
	for(int i = 0;str[i] != 0;i++){
		for(int j = 0;vogal[j] != 0;j++){
			if(str[i] == vogal[j]){
				vogais++;
			} 
		}
	}
	return vogais;
}

int compararChar(char str[], char str2[]){
	int ehigual = 1;
	
	for(int i = 0;str[i] != 0;i++){
		if(str[i] != str2[i]){
			ehigual = 0;
		} 
	}
	return ehigual;
}

void concatenarStr(char str[], char str2[]){
	int i;
	int j;
	for(i = 0; str[i] != '\0';i++){
	
	}
	for(j = 0; str2[j] != '\0'; j++, i++){
		str[i] = str2[j];
	}
	
	str[i] = '\0';
}

int main() {
char ola[13] = "palavra";

assert(7 == contaChar(ola));

//----------||----------//

contaVogal(ola);
assert(3 == contaVogal(ola));

//----------||----------//

char ola2[] = "certa";

compararChar(ola, ola2);
assert(0 == compararChar(ola, ola2));

//----------||----------//

concatenarStr(ola, ola2);

//----------||----------//
char strprincipal[] = "animal";
char strinvertida[6];

int i;
int j;
int length = 6;

for(j = 0,i = length - 1; i >= 0; i--, j++){
	strinvertida[j] = strprincipal[i];
}
//----------||----------//
//PALINDROMO

char strpalindromo[] = "arara";

int ehpalindromo = 1;
int tamanho = 5;

for(j = 0, i = tamanho -1;i >= 0; i--, j++){
	if(strpalindromo[i] != strpalindromo[j]){
		ehpalindromo = 0;
		break;
	}
}


if(ehpalindromo == 1){
	printf("a string eh palindroma %s\n", strpalindromo);
}	else printf("a string não eh palindroma %s\n", strpalindromo);




return 0;
}












// for(i = 0,j = 0;i < tamanho; i++, j++){
	// if(strpalindromo[i] == strteste[j]){
		// ehpalindromo = 1;
	// } else ehpalindromo = 0;
	// printf("ehpalindromo %d\n", ehpalindromo);
	// printf("strpalindromo, str teste: %s %s\n", strpalindromo, strteste);
// }

// int ehpalindromo = 0;
// if(strprincipal == strinvertida){
	// ehpalindromo = 1;
// }

// if(ehpalindromo == 1){
	// printf("a string é palindromo %s\n", strprincipal);
// }



// TENTATIVA 1 COM 2
// for(j = 0;strinvertida[j] <= length; j++){
	// strinvertida[j] = stranimal[i];
	// printf("string invertida: %c\n", strinvertida[j]);
// }
// //TENTATIVA 1
// for(i = length - 1;stranimal[i] >= 0;i--){
	// strinvertida[j] = stranimal[i];
	// j++;
	// printf("string str: %c\n", stranimal[i]);
	// printf("string strshua: %c\n", strinvertida[j]);
// }
// strinvertida[j] = '\0';
// stranimal[i] = '\0';

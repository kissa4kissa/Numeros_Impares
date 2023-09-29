#include <stdio.h>

int main(){
	int num, i, impar=1, soma;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	printf("\nExibicao dos numeros impares de 1 ate %d ou o numero impar mais proximo do mesmo: \n", num);
	do{
		if(impar %2 != 0){
			printf("%d\n", impar);
			impar+=2;
		}
	} while(impar <= num);
	return 0;
}

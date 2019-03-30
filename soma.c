#include <stdio.h>

int main(void){
int num;
printf("Escolha um numerero: ");
scanf("%d", &num);
int soma = 0;
    for(;num > 0; num--){
        soma += num;
}
printf("Somou: %d\n\n\n", soma);
}

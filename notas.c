#include <stdio.h>

int main(void){
int  soma = 0, t;
float media = 0;
char notas[5];

for(int i = 0; i < 5; i++){

    printf("Escolha um numerero: ");
    scanf("%d", &t);
    notas[i] = t;
    soma += notas[i];
}

media = soma/5;

printf("\n\nA media e: %.2f \n\n", media);
printf("\n\nAs notas acima da media sao: ");
for(int i = 0; i < 5; i++){
    
    if(notas[i] > media)
        printf("\n %d", notas[i]);

}

printf("\n\n");
}

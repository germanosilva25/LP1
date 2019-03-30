#include <stdio.h>

int main(void){
int num1, num2, temp;
printf("Escolha um numerero: ");
scanf("%d", &num1);

printf("Escolha outro numerero: ");
scanf("%d", &num2);

if(num2 > num1){
    num2--;
    for(; num2 > num1; num2--){
    printf("\n %d ", num2);
}
}
else{
    
    temp = num1;
    num1 = num2;
    num2 = temp;
    num2--;

    for(;num2 > num1; num2--){
    printf("\n %d", num2);

}

}


printf("\n\n");
}

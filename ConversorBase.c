#include <stdio.h>
#include <math.h>

int main(){

    unsigned long int number, lastDigit, sum = 0, mode, base, array[100], digits, i = 0;

    printf("Qual modo gostaria de usar:\n 1- De qualquer base MENOR que 10 para decimal\n 2- De decimal para qualquer base\n 3- De qualquer base MAIOR que 10 para decimal\n");
    scanf("%d", &mode);

    if (mode == 1){
        printf("Digite a base do seu numero: ");
        scanf("%d", &base);
        printf("Digite seu numero: ");
        scanf("%d", &number);
       

        while(number != 0){
            lastDigit = number % 10;
            sum += lastDigit * pow(base,i);
            number /= 10;
            i++;
        }

        printf("%d", sum);

    } else if (mode == 2){
        printf("Digite seu numero em decimal: ");
        scanf("%d", &number);
        printf("Digite sua base alvo: ");
        scanf("%d", &base);

        while(number != 0){
            array[i] = number % base;
            number /= base;
            i++;
        }

        for (int j = i - 1; j >= 0; j--){
            printf("%d ", array[j]);
        }
    } else {
        printf("Digite a base do seu numero: ");
        scanf("%d", &base);
        printf("Digite quantos digitos seu numero tem: ");
        scanf("%d", &digits);
        printf("Digite um digito de cada vez, da esquerda para a direita (sendo A = 10, B = 11, ...)");

        for (int j = 0; j < digits; j++){
           scanf("%d", &array[j]);
        }

        for (int j = 0; j < digits; j++){
        lastDigit = array[digits - i - 1];
        sum += lastDigit * pow(base,i);
        i++;
        }

        printf("%d", sum);
    }
}
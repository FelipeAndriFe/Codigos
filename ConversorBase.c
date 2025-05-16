#include <stdio.h>
#include <math.h>

int main(){

    int number, newNumber, sum = 0, base, mode, lastDigit, i = 0;
    char array[100];

    printf("Qual modo gostaria de usar:\n 1- De qualquer base* para decimal\n 2- De decimal para qualquer base\n");
    scanf("%d", &mode);

    // Converte binário até 10 digitos; Não processa as letras de base 16
    if (mode == 1){
        printf("Digite seu numero: ");
        scanf("%d", &number);
        printf("Digite a base do numero: ");
        scanf("%d", &base);
        newNumber = number;

        while(number != 0){
            lastDigit = number % 10;
            sum += lastDigit * pow(base,i);
            number /= 10;
            i++;
        }

        printf("%d", sum);

    } else {
        printf("Digite seu numero em decimal: ");
        scanf("%d", &number);
        printf("Digite sua base alvo: ");
        scanf("%d", &base);
        newNumber = number;

        while(number != 0){
            array[i] = number % base;
            number /= base;
            i++;
        }

        for (int j = i - 1; j >= 0; j--){
            printf("%d ", array[j]);
        }
    }
}
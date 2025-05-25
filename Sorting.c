#include <stdio.h>

void sort(int array[], int elements){

    for (int i = 0; i < elements - 1; i++){
        for (int j = 0; j < elements - i - 1; j++){
            if (array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int elements){

    printf("{ ");
    for (int i = 0; i < elements; i++){
        printf("%d ", array[i]);
    }
    printf("}\n");
}

float getMean(int array[], int elements){

    int sum = 0;
    for (int i = 0; i < elements; i++){
        sum += array[i];
    }

    return (float)sum / elements;
}

float getMedian(int array[], int elements){

    int middle = elements/2;
    if (elements % 2 == 0){
        return (float)(array[middle - 1] + array[middle]) / 2;
    } else {
        return (float)array[middle];
    }
}

int getMode(int array[], int elements){

    int occurrences = 0, maxOccurrences = 0, maxValue = 0;
    for (int i = 0; i < elements; i++){
        occurrences = 0;
        for (int j = 0; j < elements; j++){
            if (array[i] == array[j]){
                occurrences++;
            }
        }
    if (occurrences > maxOccurrences){
        maxOccurrences = occurrences;
        maxValue = array[i];
        }
    }

    if (maxOccurrences == 0){
        return 0;
    } else {
        return (int)maxValue;
    }
}

int main(){
    
    int array[100] = {0}, elements;
    printf("Quantos elementos deseja inserir? ");
    scanf("%d", &elements);
    printf("Digite cada elemento separadamente: ");

    for (int i = 0; i < elements; i++){
        scanf("%d", &array[i]);
    }

    sort(array, elements);
    printArray(array, elements);

    float media = getMean(array, elements);
    printf("Media: %.2f\n", media);

    float mediana = getMedian(array, elements);
    printf("Mediana: %.2f\n", mediana);

    int moda = getMode(array, elements);
    if (moda == 0){
        printf("Conjunto amodal");
    } else {
        printf("Moda: %d", moda);
    }
    return 0;
}
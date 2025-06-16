#include <stdio.h>

void SortArray(int array[], int size){

    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int RemoveDuplicates(int array[], int size){

    int prev = 0, count = 0;
    for (int i = 0; i < size; ++i){
        if (array[i] != array[prev]){
            array[++prev] = array[i];
        }
    }
    count = prev + 1;
    return count;
}

int main(){

    int A[] = {9,9,1,1,1,2,4,4,4,5}, B[] = {0,0,1,2,3,3,3,4,5,5}, U[20], I[20];
    int sizeA = 10, sizeB = 10, sizeU = 20, count1, count2, c = 0;

    for (int i = 0; i < sizeA; i++){
        U[i] = A[i];
    }
    for (int i = 0; i < sizeB; i++){
        U[i+10] = B[i];
    }

    SortArray(U, sizeU);
    count1 = RemoveDuplicates(U, sizeU);
    
    printf("Uniao: { ");
    for (int i = 0; i < count1; i++){
        printf("%d ", U[i]);
    }
    printf("}\n");

    SortArray(A, sizeA);
    SortArray(B, sizeB);
    count1 = RemoveDuplicates(A, sizeA);
    count2 = RemoveDuplicates(B, sizeB);

    for (int i = 0; i < count1; i++){
        for (int j = 0; j < count2; j++){
            if (A[i] == B[j]){
                I[c] = A[i];
                c++;
            }
        }
    }

    printf("Interseccao: { ");
    for (int i = 0; i < c; i++){
        printf("%d ", I[i]);
    }
    printf("}");
    
}
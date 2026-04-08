#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int capacidade = 10;
    int *vetor1 = (int*) malloc(sizeof(int) * capacidade);

    int num;
    int i = 0;

    scanf("%d", &num);

    while(num != 0) {
        if(i == capacidade) {
            capacidade += 10;
            int *vetor2 = (int*) malloc(sizeof(int) * capacidade);

            for(int k = 0; k < i; k++) {
                vetor2[k] = vetor1[k];
            }
            free(vetor1);
            vetor1 = vetor2;
        }

        vetor1[i] = num;
        i++;

        scanf("%d", &num);
    }

    printf("Valores digitados:\n");
    for(int k = 0; k < i; k++) {
        printf("%d ", vetor1[k]);
    }

    printf("\n");

    free(vetor1);

    return 0;
}
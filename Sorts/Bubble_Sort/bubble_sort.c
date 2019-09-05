#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define  N        10
#define  MAX_RAND 50

void gerar_vetor(int v[], int t);
void organizar_vetor(int v[], int t);
void imprimir_vetor(int v[], int t);


int main(){

    int tam;

    scanf("%d", &tam);
	int vetor[tam];

    // Gera uma semente aleatória
    srand(time(NULL));

    // Gerar vetor de aleatórios
//    gerar_vetor(vetor, N);


    for (int i = 0; i < tam; i++){
		scanf("%d", &vetor[i]);
	}

    //printf("Vetor desordenado: ");
    //imprimir_vetor(vetor, tam);

    // Organizar com Bubble Sort
    organizar_vetor(vetor, tam);
    //printf("Vetor ordenado: ");
    //imprimir_vetor(vetor, tam);

    return 0;
}

void gerar_vetor(int v[], int t){
    for (int i = 0; i < t; i++){
        v[i] = (rand() % MAX_RAND) + 1;
    }
}

void organizar_vetor(int v[], int t){
    int c = 0;
    for (int i = 0; i < t-1; i++){
        int mudou = 1;
        for (int j = 0; j < (t-i) - 1; j++){
            if (v[j] > v[j+1]){
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
                mudou = 0;
            }
        c++;
        }
        if (mudou) break;
    }
    //printf("%d \n", c);
}

void imprimir_vetor(int v[], int t){
    for (int i = 0; i < t; i++)
        printf(" %d", v[i]);
    printf("\n");
}


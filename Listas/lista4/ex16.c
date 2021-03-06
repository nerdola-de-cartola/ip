#include <stdio.h>

int contaRepeticoes(int num, int vet[], int tamanho_vet);
int conta(int num, int vet[], int tamanho_vet);

int main(void) {
    int i, j;
    int num, tamanho, qtd_numeros_unicos, repeticoes;
    int conjunto[5000] = {0};

    scanf("%d", &tamanho);

    for(i = 0, j = 0; i < tamanho; i++) {
        scanf("%d", &num);
        repeticoes = contaRepeticoes(num, conjunto, j);

        if(repeticoes == 0) {
            conjunto[j] = num;
            j++;
            qtd_numeros_unicos++;
        } else if (repeticoes == 1) {
            qtd_numeros_unicos--;
        }
    }

    printf("%d\n", qtd_numeros_unicos);

    return 0;
}

//Retorna true se um numero está presente em um array e false em caso contrário
int contaRepeticoes(int num, int vet[], int tamanho_vet) {
    int i, repeticoes;

    for(i = 0; i < tamanho_vet; i++) {
        if(vet[i] == num) repeticoes++;
    }

    return repeticoes;
}
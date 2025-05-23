#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char modelos[100][50];
int anos[100];
float precos[100];
int disponiveis[100];
int totalCarros = 0;

void cadastrarCarro() {
    if (totalCarros >= 100) {
        printf("Limite de carros atingido.\n");
        return;
    }

    printf("Modelo: ");
    scanf(" %[^\n]", modelos[totalCarros]);

    printf("Ano: ");
    scanf("%d", &anos[totalCarros]);

    printf("Preço por dia (R$): ");
    scanf("%f", &precos[totalCarros]);

    disponiveis[totalCarros] = 1;
    totalCarros++;

    printf("Carro cadastrado com sucesso!\n\n");
}

void listarCarrosDisponiveis() {
    printf("\nCarros disponíveis:\n");
    for (int i = 0; i < totalCarros; i++) {
        if (disponiveis[i]) {
            printf("%d - %s (%d) - R$%.2f/dia\n", i, modelos[i], anos[i], precos[i]);
        }
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL,"portuguese");
    int opcao;

        printf("==== MENU ====\n");
        printf("1. Cadastrar carro\n");
        printf("2. Listar carros disponíveis\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarCarro();
                break;
            case 2:
                listarCarrosDisponiveis();
                break;
           default:
                printf("Opção inválida!\n");
        }

     (opcao != 0);


    return 0;
}



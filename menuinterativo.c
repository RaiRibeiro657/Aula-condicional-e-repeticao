#include <stdio.h>
#include <stdlib.h>

// Função para verificar se um número é par ou ímpar
void verificarParOuImpar() {
    int num;
    printf("Digite um número: ");
    
    // Verificação para garantir que a entrada seja válida
    if (scanf("%d", &num) != 1) {
        printf("Entrada inválida! Por favor, insira um número inteiro.\n");
        while(getchar() != '\n');  // Limpa o buffer de entrada
        return;  // Volta ao menu sem fazer mais nada
    }

    if (num % 2 == 0) {
        printf("%d é um número par.\n", num);
    } else {
        printf("%d é um número ímpar.\n", num);
    }
}

// Função para imprimir os números de 1 a 10
void imprimirNumeros() {
    printf("Números de 1 a 10:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int opcao;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Calcular se um número é par ou ímpar\n");
        printf("2. Imprimir os números de 1 a 10\n");
        printf("3. Sair do programa\n");
        printf("Escolha uma opção: ");
        
        // Verificação de entrada válida para a opção
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada inválida! Por favor, insira um número inteiro.\n");
            while(getchar() != '\n');  // Limpa o buffer de entrada
            continue;  // Volta ao menu
        }

        // Valida a entrada da opção
        if (opcao < 1 || opcao > 3) {
            printf("Opção inválida. Tente novamente.\n");
            continue;  // Volta ao início do loop
        }

        switch (opcao) {
            case 1:
                verificarParOuImpar();
                break;
            case 2:
                imprimirNumeros();
                break;
            case 3:
                printf("Saindo do programa...\n");
                return 0; // Encerra o programa de forma limpa
            default:
                printf("Opção inválida. Tente novamente.\n");
                continue;
        }
    }

    return 0;
}
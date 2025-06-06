#include <stdio.h>

int tabuada()
{
    int numero;

    while (1)
    {
        printf("Digite um numero de 1 a 10: ");
        scanf("%d", &numero); // Corrigido: Removido a vírgula e adicionado o & corretamente

        if (numero >= 1 && numero <= 10)
        {
            break;
        }
        printf("Número inválido! Tente novamente.\n"); // Corrigido: Alterado /n para \n
    }

    // Imprime a tabuada do número válido
    printf("Tabuada de %d:\n", numero); // Corrigido: Alterado /n para \n e corrigido o formato
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i); // Corrigido: Adicionado \n para nova linha
    }
    return 0;
}

int main()
{
    tabuada(); // Chama a função tabuada
    return 0;
}
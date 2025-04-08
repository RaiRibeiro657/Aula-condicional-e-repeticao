#include <stdio.h>

int tabuada()
{
    int numero;

    while (1)
    {
        printf("Digite um numero de 1 a 10:");
        scanf("%d, &numero");

        if (numero >= 1 && numero <= 10)
        {
            break;
        }
        printf("Número inválido! Tente novamente. /n");
    }

    // imprime a tabuadado número válido
    printf("Tabuada de %d/n, numero");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d", numero, i, numero * i);
    }
    return 0;
}
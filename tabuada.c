int main()
{
    int numero;

    printf("Digite um numero de 1 a 10:");
    scanf("%d, &numero");

    if (numero >= 1 && numero <= 10)
    {
        printf("Você digitou o número: %d/n", numero);
    }
    else
    {
        printf("Número inválido! Por Favor, insira um número entre 1 a 10 ");
    }
    printf("Tabuada de %d/n, numero");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d", numero, i, numero * i);
    }
}
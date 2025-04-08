#include <stdio.h>

int main() {
    
    int senha_certa = 4321;
    int senha_digitada;

    printf("Sistema de Login\n");

    do {
        printf("Digite a senha de 4 digitos: ");
        scanf("%d", &senha_digitada);  

        if (senha_digitada != senha_certa) {
            printf("Senha incorreta! Tente denovo.\n"); 
        }

    } while (senha_digitada != senha_certa);  
    
    printf("Login realizado com sucesso!\n");
    
    return 0;
}
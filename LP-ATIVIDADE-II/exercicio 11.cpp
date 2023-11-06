#include <stdio.h>
#include <string.h>

int main() {
    char codigoAcessoCorreto[200] = "senha123"; 
    char codigoAcessoInserido[200]; 

    do {
        printf("Digite o código de acesso: ");
        scanf("%s", codigoAcessoInserido);

        if (strcmp(codigoAcessoInserido, codigoAcessoCorreto) == 0) {
            printf("Acesso permitido. Bem-vindo!\n");
            break;
        } else {
            printf("Código de acesso incorreto. Tente novamente.\n");
        }
    } while (1); 

    return 0;
}

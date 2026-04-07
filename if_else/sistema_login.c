#include <stdio.h>
int main () {
    int usuario, senha;
    printf("Usuario esta ativo? (1-sim; 0-nao):");
    scanf ("%d", &usuario);
    printf ("Senha correta? (1-sim; 0-nao):");
    scanf("%d", &senha);

    if (usuario == 1) {
        if (senha == 1)
        {
            printf ("Acesso concedido\n");
        } else {
            printf ("Senha  Incorreta\n");
        }        
    } else {
        printf ("Usuario bloqueado\n");
    }
    
    
    return 0;
}
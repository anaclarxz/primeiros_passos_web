#include <stdio.h>
int main () {
    int anos, parcela;
    printf ("Quantos anos vc tem a conta no nosso banco?");
    scanf ("%d", &anos);
    printf ("O valor da parcela e maior que 30%% do salario bruto? (1-sim; 0-nao):");
    scanf ("%d", &parcela);
    
    if (anos >= 2)
    {
        if (parcela == 0)
        {
            printf ("Acesso Liberado.\n");
        } else
        {
            printf ("Acesso Negado.\n");
        }  
    } else {
        printf ("Acesso Negado.\n");
    }
    
    return 0;
}
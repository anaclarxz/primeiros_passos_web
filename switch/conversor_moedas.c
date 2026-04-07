#include <stdio.h>
int main() {
    float reais, convertido;
    char moeda_troca;
    printf("Digite o valor em reais:");
    scanf ("%f", &reais);
    printf ("Para qual moeda deseja converter? (E-Euro, D-Dolar, L-Libra):");
    scanf (" %c", &moeda_troca);
    
    switch (moeda_troca)
    {
    case 'E':
    case 'e':
        convertido = reais / 6;
        printf ("O valor convertido fica %.2f", convertido); 
        break;

    case 'L':
    case 'l':
        convertido = reais / 7;
        printf ("O valor convertido fica %.2f", convertido);
        break;

    case 'D':
    case 'd':
        convertido = reais / 5 ;
        printf ("O valor convertido fica %.2f", convertido);
        break;
    
    default:
        printf ("Essa moeda de troca e invalida.");
        break;
    }
    return 0;
}

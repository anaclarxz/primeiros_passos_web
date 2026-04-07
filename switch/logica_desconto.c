#include <stdio.h>
int main () {
    char forma_pagamento;
    printf ("Qual a forma de pagamento? (A- a vista, C-cartao, P-parcelado):");
    scanf (" %c", &forma_pagamento);

    switch (forma_pagamento)
    {
    case 'A':
    case 'a':
        printf ("O desconto aplicado na sua compra é de 10%%");
        break;
    
    case 'C':
    case 'c':
        printf ("Sua compra nao apresenta desconto");
        break;

    case 'P':
    case 'p':
        printf ("Acrescimo de 5%% a sua compra");
        break;
    
    default:
        printf ("Forma de pagamento invalida.");
        break;
    }
    return 0;
}
#include <stdio.h>
int main () {
    float litros, total;
    char combustivel;
    float preco_alcool = 3.00;
    float preco_gasolina = 5.00;
    printf ("Qual Combustivel deseja? (A-Alcool; G-Gasolina):");
    scanf (" %c", &combustivel);
    
    if (combustivel == 'A' || combustivel == 'a')
    {
       printf ("Quantos litros deseja encher?");
       scanf ("%f", &litros);
       if (litros <= 20)
       {
        total = litros * preco_alcool * 0.97;
        printf ("Com desconto de 3%% fica: %.2f", total);
       } else {
        total = preco_alcool * litros * 0.95;
        printf ("Com desconto de 5%% fica: %.2f", total);
       }     
    } else if (combustivel == 'G' || combustivel == 'g')
    {
        printf ("Quantos litros deseja encher?");
        scanf ("%f", &litros);
        if (litros <= 20)
        {
            total = litros * preco_gasolina * 0.96;
             printf ("Com desconto de 4%% fica: %.2f", total);
        } else {
             total = litros * preco_gasolina * 0.94;
             printf ("Com desconto de 6%% fica: %.2f", total);
        }   
    }
    
    return 0;
}
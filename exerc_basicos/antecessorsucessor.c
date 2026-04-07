#include <stdio.h>
int main()
{
    float suc, ant, num;
    printf ("Digite um número inteiro:");
    scanf("%f", &num);
    ant = num - 1;
    suc = num + 1;
    printf("Analisando o numero: %.2f\n", num);
    printf ("Seu antecessor é: %.2f\n", ant);
    printf("Seu sucessor é: %.2f\n", suc);
    return 0;
}



//Início
    //Exibir "Digite um número inteiro:"
    //Ler num
    //ant <- num - 1
    //suc <- num + 1
    //Exibir "Analisando o número ", num, ":"
    //Exibir "Seu antecessor é: ", ant
    //Exibir "Seu sucessor é: ", suc
//Fim


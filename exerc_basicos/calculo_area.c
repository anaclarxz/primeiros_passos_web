#include <stdio.h>
int main()
{
    float raio, area;
    printf ("Digite o valor do raio do círculo:");
    scanf("%f", &raio);
    area = 3,1415 * raio * raio;
    printf("A área do círculo é: %.4f\n", area);
    return 0;
}



//Início
    //Exibir "Digite o valor do raio do círculo:"
    //Ler raio
    // Processamento: Área = PI * r²  
    //area <- 3.1415 * (raio * raio)
    //Exibir "A área do círculo é: ", area
//Fim
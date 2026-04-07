#include <stdio.h>
int main () {
    int idade;
    printf ("Digite a idade do atleta:");
    scanf ("%d", &idade);

    if (idade <= 12)
    {
        printf ("Infantil\n"); 
    } else if (idade <= 17) {
            printf ("Juvenil\n");
    } else if (idade <= 60) {
            printf ("Adulto\n");
    } else {
        printf ("Senior\n");
    }             
    return 0;
}
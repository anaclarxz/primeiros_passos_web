#include <stdio.h>
int main () {
    const saldo = 1000;
    int saque;
    printf ("Digite o valor que deseja sacar:");
    scanf ("%d", &saque);
    if (saque <= saldo) {
        if (saque % 10 == 0) {
            printf ("Saque Valido!");
        } else {
            printf ("Saque Invalido.");
        }
    } else {
        printf ("Saque Invalido.");
    }
    return 0;
}
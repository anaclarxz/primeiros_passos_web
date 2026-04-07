#include <stdio.h>
int main () {
    int mes;
    printf ("Digite o mes em que voce nasceu:");
    scanf("%d", &mes);

    switch (mes)
    {
    case 12:
    case 1:
    case 2:
        printf ("No mes em que voce nasceu e verao!"); 
        break;
    
    case 3:
    case 4:
    case 5:
        printf ("No mes em que voce nasceu e outono!"); 
        break;
    case  6:
    case 7:
    case 8:
        printf ("No mes em que voce nasceu e inverno!");
        break;
    case 9:
    case 10:
    case 11:
        printf ("No mes em que voce nasceu e primavera!"); 
        break;
    
        default:
        printf ("Esse mes nao existe!"); 
        break;
    }
    
    return 0;
}
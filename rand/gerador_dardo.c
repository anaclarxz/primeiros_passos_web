#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    srand(time(NULL));
    int pontos = (rand() % 100) + 1;
    printf ("Sua pontuacao no jogo e de %d pontos.", pontos);
    return 0;
}

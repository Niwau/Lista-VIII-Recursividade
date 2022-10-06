#include <stdio.h>

/* 04: Pede-se a implementação de uma
função recursiva que exiba os n primeiros
termos de uma PG (Progressão Geométrica),
onde a1 é o seu primeiro termo e q a razão. */

void showPG(int n, int a1, int q){
    if(n > 0){
        printf("%d ", a1);
        showPG(n - 1, a1 * q, q);
    }
}

void main(){
    int n, a1, q;
    printf("Insira 3 valores (n, a1, q) ");
    scanf("%d %d %d", &n, &a1, &q);
    showPG(n, a1, q);
}

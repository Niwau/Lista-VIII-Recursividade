#include <stdio.h>

/*
    Desenvolver uma fun��o recursiva
    que exiba todos os m�ltiplos do n�mero N,
    inferiores ou iguais ao valor V.
*/

void exibir(int n, int v){
    if(n <= v){
        printf("%d ", n);
        exibir(n + n, v);
    } else {
        printf("%d", 0);
    }
}

void main(){
    int n, v;
    printf("Insira o valor de N e V: ");
    scanf("%d %d", &n, &v);
    exibir(n, v);
}

#include <stdio.h>
#include <locale.h>
#include <string.h>

/* Dada uma string s, desenvolver uma função
recursiva que determine se s é ou não um
palíndromo. */

int isPalindrome(char word[], int start, int length){

    if(word[0] != word[length - 1]){
        return 0;
    } else {
        isPalindrome(word, start + 1, length - 1);
        return 1;
    }

}

void main(){

    setlocale(LC_ALL, "portuguese");

    char word[32];
    printf("Escreva uma palavra: ");
    gets(word);

    if(isPalindrome(word, 0, strlen(word)) == 1){
        printf("\nA palavra %s é um palíndromo!\n", word);
    } else {
        printf("\nA palavra %s não é um palíndromo!\n", word);
    }

}

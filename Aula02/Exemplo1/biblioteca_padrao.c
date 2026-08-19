/*
Dado um caractere fixo no código, converter para maiúsculo e informar se ele é uma letra.
*/ 
#include <stdio.h>
#include <ctype.h>

int main(void){

    char caractere = 'g';

    if(isalpha(caractere)){
        printf("Eh um caractere!\n");
        char maiusculo = toupper(caractere);
        printf("O caractere era %c e ficou %c!\n",caractere,maiusculo);

    }else{
        printf("Nao eh um caractere!");
    }
}
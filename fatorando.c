/* 
   Cálculo do fatorial de um número.
*/

#include <stdio.h>
//mudança
//só mais uma mudança
int calc_fat(int);

int main()
{
    printf("\nEste programa calcula fatorial. ");
    int numero = 5; //modifiquei de 13 para 5
    int num_fat = calc_fat(numero);
    printf("\nO fatorial de %d eh: %d", numero , num_fat);
    return 0;
}

/* Definição da funcao fatorial */
int calc_fat(int b)
{
    int fatorial = 1;
    for (int contador = b; contador >= 1; contador--)
    {
        fatorial *= contador;
        printf(" %d",fatorial);
    }
    return fatorial;
    
}


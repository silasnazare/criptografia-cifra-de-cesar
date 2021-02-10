/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: SilasChagas
 *
 * Created on 08 de fevereiro de 2021, 18:58
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv)
{    
    char palavra[30] = "silas", aux[30];
    int chave=1, i;
 
    while(chave < 26)
    {
        i = 0;
        while(palavra[i] != '\0')
        {
            aux[i] = palavra[i] + chave;
            if((palavra[i] + chave) > 122)
            {
                aux[i] -=26;
            }
            if((palavra[i] + chave) < 97)
            {
                aux[i] += 26;
            }
            i++;
        }
        aux[i] = '\0';
        printf("chave %d: %s ", chave, aux);
 
        if(chave%5 == 0)
        {
            printf("\n");
        }
        chave++;
    }
    return (EXIT_SUCCESS);
}


/*1) Escreva um programa que receba uma palavra e verifique se
ela é um palíndromo, ou seja, se escrita do fim para o
começo é igual à palavra escrita do começo para o fim.
Exemplos: RENNER, ANA, MIRIM, OVO.*/

/*#include <stdio.h>
#include <string.h>  

int main() {

    char palavra[100];
    int tamanho, palindromo = 1; 

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra); 

    for (int indice = 0; indice < (tamanho / 2); indice++) {
        if (palavra[indice] != palavra[tamanho - 1 - indice]) {
            palindromo = 0;  
            break;  
        }
    } 

    if (palindromo) {
        printf("Palíndromo\n");
    } else {
        printf("Não é palíndromo\n");
    }

    return 0;
}
*/



/*2) Escreva um programa que leia um nome e imprima as 4
primeiras letras.*/

/*#include <stdio.h>

int main() {

    char nome[100];

    printf("Digite um nome: ");
    scanf("%s", nome);  

    for (int indice = 0; indice < 4; indice++) {
        printf("%c", nome[indice]);
    }

    printf("\n");  
    return 0;
}
*/

/*3) Escreva um programa que leia uma palavra e informe seu
tamanho (sem usar a função len).*/

/*#include <stdio.h>

int main() {

    char palavra[100];
    int tamanho = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);  

    while (palavra[tamanho] != '\0'){
        tamanho++;
    }

    printf("%d", tamanho);  
    return 0;
}
*/

/*4) Escreva um programa que leia uma frase e uma letra. Informe
quantas vezes a letra aparece na frase.*/

/*#include <stdio.h>

int main() {

    char frase[100], letra;
    int tamanho = 0, contador_letra = 0;

    printf("Digite uma frase: ");
    scanf("%[^\n]", &frase);  

    printf("Digite uma letra: ");
    scanf(" %c", &letra);  

    while (frase[tamanho] != '\0'){
        if (frase[tamanho] == letra){
            contador_letra++;
        }      
        tamanho++;
    }

    printf("%d", contador_letra);  
    return 0;
}*/

/*5) Escreva um programa que leia duas palavras e verifique se
são iguais (sem usar a função strcmp).*/

/*#include <stdio.h>

int main() {
    char primeira_palavra[100], segunda_palavra[100];
    int iguais = 1; 
    int tamanho = 0;

    printf("Digite a primeira palavra: ");
    scanf("%s", primeira_palavra);  

    printf("Digite a segunda palavra: ");
    scanf("%s", segunda_palavra);   
    
    while (primeira_palavra[tamanho] != '\0' || segunda_palavra[tamanho] != '\0') {
        if (primeira_palavra[tamanho] != segunda_palavra[tamanho]) {
            iguais = 0; 
            break;
        }
        tamanho++;
    }

    if (iguais) {
        printf("As palavras são iguais.\n");
    } else {
        printf("As palavras são diferentes.\n");
    }

    return 0;
}
*/

/*6) Faça um programa que leia o nome e o sobrenome de
uma pessoa separadamente. O programa deve juntar as
duas strings em uma só e escrever na tela: a nova
string, o seu número de caracteres, a sua primeira e a
última letra.

*/

/*#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], sobrenome[50], nome_completo[100];
    int tamanho = 0;
    
    printf("Digite o nome: ");
    scanf(" %s", nome);  

    printf("Digite o sobrenome: ");
    scanf(" %s", sobrenome);   

    strcpy(nome_completo, nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, sobrenome);

    tamanho = strlen(nome_completo);

    printf("%s \n", nome_completo);
    printf("%d \n", tamanho);
    printf("%c \n",nome_completo[0]);
    printf("%c \n", nome_completo[tamanho-1]);
    return 0;
}
*/

/*7) Faça uma função que receba um nome e mostre-o na
vertical e em formato de escada.*/

/*#include<stdio.h>

int main(){
    char nome[50];
    int tamanho=0;

    printf("Digite um nome: ");
    scanf(" %s",&nome);

    tamanho = strlen(nome);

    for (int caracter = 1; caracter <= tamanho; caracter++){
        for (int indice = 0; indice < caracter; indice++)
            printf("%c", nome[indice]);
        {
         printf("\n");   
        }
        
    }

    return 0;
}
*/

/*8) Escreva um programa que leia uma frase e dois caracteres c1 e
c2. O programa deve trocar todas as ocorrências de c1 por c2.
*/

#include <stdio.h>

int main() {

    char frase[100], primeira_letra, segunda_letra;
    int tamanho = 0;

    printf("Digite uma frase: ");
    scanf("%[^\n]", &frase);  

    printf("Digite a primeira letra: ");
    scanf(" %c", &primeira_letra);  

    printf("Digite a segunda letra: ");
    scanf(" %c", &segunda_letra);  

    while (frase[tamanho] != '\0'){
        if (frase[tamanho] == primeira_letra){
            frase[tamanho] = segunda_letra;
        }      
        tamanho++;
    }

    printf("%s", frase); 
 
    return 0;
}
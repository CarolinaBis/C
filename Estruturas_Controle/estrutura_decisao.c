/*1. Obtenha um número. Depois, se o número for
par exibir o seu dobro, caso contrário, exibir o
seu triplo.*/

#include <stdio.h>

int main(){

int numero;

printf("Digite um número inteiro: ");
scanf("%d", &numero);

if (numero % 2 == 0)
{
    printf("O dobro de %d é %d", numero, numero*2);
}

else{

printf("O triplo de %d é %d", numero, numero*3);

}

    return 0;
} 
*/



/*2. Obtenha um número. Depois, se o número for
divisível por 10, exibir a metade dele, caso
contrário, exibir a mensagem “O número digitado
não é múltiplo de 10”. */

/*#include <stdio.h>

int main(){

int numero;

printf("Digite um número inteiro: ");
scanf("%d", &numero);

if (numero % 10 ==0)
{
    printf("A metade de %d é %d", numero, numero/2);
}

else{
    printf("O número digitado não é múltiplo de 10");
}

    return 0;
} */

/*3. Tendo como dados de entrada a altura e o sexo
de uma pessoa, escreva um programa que
calcule e mostre seu peso ideal utilizando as
seguintes fórmulas:
• Para homens: 72.7 * altura – 58
• Para mulheres: 62.1*altura – 44.7 */

/*#include <stdio.h>

int main() {

    char sexo;
    float altura, pesoIdeal;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o sexo Feminino (f) ou Masculino (m): ");
    scanf(" %c", &sexo);  

    if (sexo == 'f' || sexo == 'F') {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("O peso ideal para uma mulher é: %.2f\n", pesoIdeal);

    } else if (sexo == 'm' || sexo == 'M') {
        pesoIdeal = (72.7 * altura) - 58;
        printf("O peso ideal para um homem é: %.2f\n", pesoIdeal);

    } else {
        printf("Sexo inválido. Use 'f' para feminino ou 'm' para masculino.\n");
    }

    return 0;
}
*/

/*4. Faça um programa que leia 2 notas de um
aluno, calcule a média e imprima aprovado ou
reprovado (para ser aprovado a média deve ser
no mínimo 6).*/

/*#include <stdio.h>

int main() {

    float nota1, nota2, media;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 6) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}*/


/*5. IMC significa Índice de Massa Corporal. Ele é
calculado dividindo o peso corporal (em
quilogramas) pelo quadrado da altura (em
metros). Faça um programa que leia o peso e a
altura de uma pessoa, calcule o IMC e
classifique, de acordo com a tabela de referência:*/

/*#include <stdio.h>

int main() {

    float peso, altura, imc;

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificação: Baixo peso\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Classificação: Normal\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Classificação: Sobrepeso\n");
    } else {
        printf("Classificação: Obesidade\n");
    }

    return 0;
}*/

/*6. Faça um programa que implemente o jogo
jokenpô (pedra-papel-tesoura). A escolha do
computador deve ser feita através de sorteio*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int escolha_usuario, escolha_computador;

    srand(time(NULL));
    escolha_computador = rand() % 3 + 1; 

    printf("Escolha uma das opções:\n 1 - Pedra\n 2 - Papel\n 3 - Tesoura\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha_usuario);  

    if (escolha_usuario < 1 || escolha_usuario > 3) {
        printf("Escolha inválida! Tente novamente.\n");
        return 1; 
    }

    if (escolha_computador == 1) {
        printf("O computador escolheu: Pedra\n");
    } else if (escolha_computador == 2) {
        printf("O computador escolheu: Papel\n");
    } else {
        printf("O computador escolheu: Tesoura\n");
    }

    if (escolha_usuario == escolha_computador) {
        printf("Empate\n");
    } else if ((escolha_usuario == 1 && escolha_computador == 3) || 
               (escolha_usuario == 2 && escolha_computador == 1) || 
               (escolha_usuario == 3 && escolha_computador == 2)) {
        printf("Você ganhou!\n");
    } else {
        printf("O computador ganhou!\n");
    }

    return 0;
}

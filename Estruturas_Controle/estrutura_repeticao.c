//FOR

/*Faça um programa para implementar o jogo Pedra-Papel-Tesoura
(pessoa x computador) . O jogo deve ter 10 rodadas. A cada rodada,
deve ser informado quem venceu e o placar atual deve ser exibido a cada
rodada. Ao final das 10 rodadas, o programa informa o placar final e o
vencedor.*/

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    setbuf(stdout, NULL);

    int escolha_usuario, escolha_computador, rodadas, contador_usuario = 0, contador_computador = 0;

    srand(time(NULL));

    for (rodadas = 1; rodadas <= 10; rodadas++) {

        printf("Rodada %d\n", rodadas);
        printf("Escolha uma das opções:\n 1 - Pedra\n 2 - Papel\n 3 - Tesoura\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha_usuario);

        if (escolha_usuario < 1 || escolha_usuario > 3) {
            printf("Escolha inválida! Tente novamente.\n");
            rodadas--;
            continue;
        }

        escolha_computador = rand() % 3 + 1;

        if (escolha_computador == 1) {
            printf("O computador escolheu: Pedra\n");
        } else if (escolha_computador == 2) {
            printf("O computador escolheu: Papel\n");
        } else {
            printf("O computador escolheu: Tesoura\n");
        }

        if (escolha_usuario == escolha_computador) {
            printf("Empate!\n");
        } else if ((escolha_usuario == 1 && escolha_computador == 3) ||
                   (escolha_usuario == 2 && escolha_computador == 1) ||
                   (escolha_usuario == 3 && escolha_computador == 2)) {
            printf("Você ganhou esta rodada!\n");
            contador_usuario++;
        } else {
            printf("O computador ganhou esta rodada!\n");
            contador_computador++;
        }

        printf("Placar atual: Você %d X %d Computador\n", contador_usuario, contador_computador);
        printf("-------------------------------\n");
    }

    printf("Placar final: Você %d X %d Computador\n", contador_usuario, contador_computador);

    if (contador_usuario > contador_computador) {
        printf("Parabéns! Você venceu o jogo!\n");
    } else if (contador_usuario == contador_computador) {
        printf("O jogo terminou em empate!\n");
    } else {
        printf("O computador venceu o jogo!\n");
    }

    return 0;
}*/










/*1 - Escreva um programa para encontrar a soma S = 3 + 6 + 9 + …. + 333.*/

/*#include<stdio.h>

int main(){

    int numero , soma=0;

    for(numero=0;numero <=333;numero+=3){
         soma+=numero;
    }

    printf("A soma dos valores é %d", soma);

    return 0;
}
*/









/*2 – Escreva um programa que leia a nota de 10 alunos e calcule a média da classe*/

/*#include<stdio.h>

int main(){

	setbuf(stdout,NULL);

     int contador=1, nota, soma =0, media=0, quantidade_nota=0;

    for (quantidade_nota=0; quantidade_nota <=9; quantidade_nota++){
        printf("Digite a nota do %d aluno: ", contador++);
        scanf("%d", &nota);
        soma+=nota;
    }

    media=soma/10;

    printf("A média da classe é %d", media);

    return 0;
}
*/








/*3 – Escreva um programa que leia um número de 1 a 10, e mostre a tabuada desse número.*/

/*#include<stdio.h>

int main(){

	setbuf(stdout,NULL);

    int numero, valor = 0, resultado=0;

    printf("Digite um número de 1 a 10: ");
    scanf("%d", &numero);

    for (valor = 0; valor <=10; valor++){
        resultado = numero * valor;
        printf("%d X %d = %d \n", numero, valor, resultado);

    }

    return 0;
}
*/









/*4. Faça um programa que leia um número inteiro N e imprima todos os números de 1 até
N.*/

/*#include<stdio.h>

int main(){

	setbuf(stdout,NULL);

    int numero, valor = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    for (valor = 1; valor <= numero; valor++){
        printf("%d \n", valor);

    }

    return 0;
}

*/









/*5. Faça um programa que leia dois números inteiros X e Y e imprima todos os números de
X até Y*/

/*#include<stdio.h>

int main(){

	setbuf(stdout,NULL);

    int x, y, numero=0;

    printf("Digite um número inteiro (x): ");
    scanf("%d",&x);

    printf("Digite um número inteiro (y): ");
    scanf("%d", &y);

    for (numero = x; numero <= y; numero++){
        printf("%d \n", numero);

    }

    return 0;
}

*/






/*6. Faça um programa que apresenta o total da soma dos números de 0 até 100*/

/*#include<stdio.h>

int main(){

	setbuf(stdout,NULL);

    int soma=0, numero=0;

    for (numero = 0; numero<=100; numero++){
        soma+=numero;
    }

    printf("A soma dos valores de 0 a 100 é %d", soma);

    return 0;
}
*/


/*7. Faça um programa que apresenta o total da soma dos números pares até 100 */

/*#include<stdio.h>

int main(){

	setbuf(stdout,NULL);

    int soma=0, numero=0;

    for (numero = 0; numero<=100; numero++){
        if (numero % 2 ==0)
        {
            soma+=numero;
        }
        
    }

    printf("A soma dos valores pares de 0 a 100 é %d", soma);

    return 0;
}
*/


/*8- Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e
cresce 3 centímetros por ano. Faça um programa que imprima a altura de cada um ano a
ano durante 30 anos.*/

/*#include<stdio.h>

int main(){

    float chico=1.50; 
    float ze =1.10;
    int anos;

    for (anos = 1; anos <= 30; anos++){
        chico+=0.02;
        ze+=0.03;

        printf("Ano %d:\n", anos);
        printf("Altura de Chico: %.2f metros\n", chico);
        printf("Altura de Zé: %.2f metros\n", ze);
        printf("----------------------\n");

    }


    return 0;
}*/

// WHILE

/*1. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros
por ano. Faça um programa que calcule quantos anos serão necessários para que Zé seja maior que Chico.*/


/*#include<stdio.h>

int main(){

    float chico=1.50; 
    float ze =1.10;
    int anos = 1;

    while (ze <= chico){
        chico+=0.02;
        ze+=0.03;

        printf("Ano %d:\n", anos++);
        printf("Altura de Chico: %.2f metros\n", chico);
        printf("Altura de Zé: %.2f metros\n", ze);
        printf("----------------------\n");

    }


    return 0;

}

/*2. Escreva um programa que leia idade, peso e altura de 10 pessoas. Calcular:
A média das idades
Quantidade de pessoas com mais de 60 Kg e altura inferior a 1,60m
Porcentagem de pessoas entre 10 e 30 anos que medem mais de 1,70m*/

/*#include <stdio.h>

int main() {

    setbuf(stdout, NULL);

    int idade, soma_idades = 0, pessoas_acima_60kg_abaixo_160cm = 0;
    int pessoas_entre_10_30_mais_170cm = 0, total_pessoas_entre_10_30 = 0;
    float altura, peso, media_idade = 0, porcentagem = 0;

    for (int pessoa = 1; pessoa <= 10; pessoa++) {
        printf("Digite a idade da pessoa %d: ", pessoa);
        scanf("%d", &idade);
        soma_idades += idade;

        printf("Digite o peso da pessoa %d (em Kg): ", pessoa);
        scanf("%f", &peso);

        printf("Digite a altura da pessoa %d (em metros): ", pessoa);
        scanf("%f", &altura);

        printf("-------------------------------- \n");

        if (peso > 60 && altura < 1.60) {
            pessoas_acima_60kg_abaixo_160cm++;
        }

        if (idade >= 10 && idade <= 30) {
            total_pessoas_entre_10_30++;
            if (altura > 1.70) {
                pessoas_entre_10_30_mais_170cm++;
            }
        }
    }

    media_idade = soma_idades / 10.0;

    if (total_pessoas_entre_10_30 > 0) {
        porcentagem = (pessoas_entre_10_30_mais_170cm * 100.0) / total_pessoas_entre_10_30;
    }

    printf("A média das idades é: %.2f\n", media_idade);
    printf("Quantidade de pessoas com mais de 60 kg e altura inferior a 1,60m: %d\n", pessoas_acima_60kg_abaixo_160cm);
    printf("Porcentagem de pessoas entre 10 e 30 anos com mais de 1,70m: %.2f%%\n", porcentagem);

    return 0;
}*/








/*3. Escreva um programa que leia as notas dos alunos em uma prova. A entrada de dados termina ao entrar
com uma nota negativa. Imprimir:
Média da classe
Maior e menor nota
Quantidade de alunos com nota inferior a 3
% de alunos com nota superior a 8*/

/*#include<stdio.h>

int main(){

    int quantidade_aluno = 0, inferior_tres = 0, superior_oito = 0;
    float nota, soma = 0, media, maior_nota, menor_nota, porcentagem;

    printf("Digite a nota de um aluno (digite um número negativo para encerrar): ");
    scanf("%f", &nota);

    if (nota >= 0) {
        maior_nota = nota;
        menor_nota = nota;
    }

    while (nota >= 0) {
        quantidade_aluno++;
        soma += nota;

        if (nota > maior_nota) {
            maior_nota = nota;
        }

        if (nota < menor_nota) {
            menor_nota = nota;
        }

        // Contagem de notas abaixo de 3 e acima de 8
        if (nota < 3) {
            inferior_tres++;
        }

        if (nota > 8) {
            superior_oito++;
        }

        printf("Digite a nota de um aluno (digite um número negativo para encerrar): ");
        scanf("%f", &nota);
    }

    if (quantidade_aluno > 0) {
        
        media = soma / quantidade_aluno;
        porcentagem = (100.0 * superior_oito) / quantidade_aluno;

        printf("A média da classe é: %.2f\n", media);
        printf("A maior nota é: %.2f\n", maior_nota);
        printf("A menor nota é: %.2f\n", menor_nota);
        printf("Quantidade de alunos com nota inferior a 3: %d\n", inferior_tres);
        printf("Porcentagem de alunos com nota superior a 8: %.2f%%\n", porcentagem);
    } else {
        printf("Nenhuma nota válida foi inserida.\n");
    }

    return 0;
}
*/





/*4. Arranjo é um conceito da análise combinatória que se refere ao número de maneiras diferentes que um
conjunto de objetos pode ser organizado em grupos ordenados. A fórmula para calcular o número de
arranjos possíveis é dada por A(n,k) = n!/(n-k)!. Escreva um programa que leia os valores n,k e calcule o
número de arranjos possíveis.*/

#include<stdio.h>

// Função para calcular o fatorial de um número
int fatorial(int numero) {
    int resultado = 1;
    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n, k;
    
    // Ler os valores de n e k
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    
    // Verifica se n >= k
    if (n >= k) {
        // Calcular o número de arranjos usando a fórmula A(n,k) = n!/(n-k)!
        int arranjo = fatorial(n) / fatorial(n - k);
        
        // Exibir o resultado
        printf("O número de arranjos possíveis A(%d, %d) é: %d\n", n, k, arranjo);
    } else {
        // Caso n < k, não é possível formar arranjos
        printf("Erro: n deve ser maior ou igual a k.\n");
    }

    return 0;
}

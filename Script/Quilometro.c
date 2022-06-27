#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"Portuguese");
// Escreva um programa que informe o valor  de uma corrida de taxi. Para calcular o valor da corrida é necessario saber a distância percorrida em 
// quilômetro e qual o tipo da bandeira da corrida, 1 ou 2. Caso a bandeira seja 1, o preço do quilômetro percorrido é de R$ 1,80, se a bandeira
// dor 2 o valor é de R$ 2,30. Solicite a distância percorrida em quilômetro e qual o tipo da bandeira da corrida e informe o valor da corrida.

int bandeira;
float q, valor, corrida;

printf("Digite o número da bandeira: ");
scanf("%d", &bandeira); 
printf("Digite os quilômetros: ");
scanf("%f", &q);

if(bandeira == 1)
valor = 1.8;

if(bandeira == 2)
valor = 2.3;
corrida = valor * q;

printf("\n O valor da corrida é: %.2f", corrida);

return 0;

}
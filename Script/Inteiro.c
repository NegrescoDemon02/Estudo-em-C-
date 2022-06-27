#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"Portuguese");
// Faça um programa que receba um número interio e verifique se este número é par ou ímpar
    

   int num;

   printf("Digite um número inteiro: ");

   scanf("%i", &num);

   if(num % 2 == 0){

       printf("\n O número é par\n\n");

   }

   else{

       printf("\n O número é ímpar\n\n");

   }

}

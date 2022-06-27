#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"Portuguese");
    // Desenvolva um programa para comparar a idade de Pedro, Joana e de Ismael, e informe o seu raio e sua altura
    // Obs: V = π * R2 * H, em que π  = 3.14, R = Raio, H = Altura 

     int idade1, idade2, idade3;

     printf("Digite a idade de Pedro: ");
     scanf("%d", &idade1);

     printf("Digite a idade de Joana: ");
     scanf("%d", &idade2);

    printf("Digite a idade de Ismael: ");
    scanf("%d", &idade3);

    if ((idade1 > idade2 ) && (idade1 > idade3))
    printf("\n Pedro é o mais velho entre os três.");
    else{
        if (idade2 > idade3)
        printf("Joana é o mais velho entre os três.");
        else
        printf("Ismael é o mais velho entre os três.");
    }
    
    return 0;
}

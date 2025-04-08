#include <stdio.h>

void movetorre(int casas)
{
    for (int i1 = 0; i1 < casas; i1++) {
        printf("Direita...\n");
    }
}
void movebispo(int casas2)
{
    for (int i2 = 0; i2 < casas2; i2++) {
        printf("Cima-Direita...\n");
    }
}

void moverainha(int casas2)
{
    do
    {
        printf("Esquerda...\n");
        casas2--;
    } while (casas2 > 0);
}

int main() {
//Xadrez (Nivel Mestre)
int option;
int i, i1, i2, i3;
char continuar;

do {
    printf("### Bem vindo ao Prótotipo de Xadrez ###\n");
    printf("Você possui três peças disponíveis para mover!\n");

    printf("1. Torre!\n");
    printf("2. Bispo!\n");
    printf("3. Rainha!\n");
    printf("Escolha uma peça: ");
    scanf("%d", &option);

    switch ( option )
    {
    case 1:

        printf("\n Você escolheu a Torre! \n");
        printf("Escolha quantas casas quer move-lá: ");
        scanf("%d", &i1);
    printf("\n Movendo...\n");
     movetorre(i1);
        break;
    case 2:
  
        printf("\n Você escolheu o Bispo! \n");
        printf("Escolha quantas casas quer move-lo: ");
        scanf("%d", &i2);
        printf("\n Movendo...\n");
        movebispo(i2);
        break;
    case 3:
   
        printf("\n Você escolheu a Rainha! \n");
        printf("Escolha quantas casas quer move-lá: ");
        scanf("%d", &i3);
        printf("\n Movendo...\n");
        moverainha(i3);;
        break;
    default:
        printf("Opção Inválida.");
        continue;
    }
    printf("\nDeseja escolher outra peça?[s/n] ");
    scanf(" %c", &continuar);
    
} while (continuar == 's' || continuar == 'S');

    


  return 0;
}

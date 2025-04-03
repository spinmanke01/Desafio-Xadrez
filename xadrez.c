#include <stdio.h>

int main() {
//Xadrez (Nivel Novato)
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
    i = 1;
        printf("\n Você escolheu a Torre! \n");
        printf("Escolha quantas casas quer move-lá: ");
        scanf("%d", &i1);
    printf("\n Movendo...\n");
    while (i <= i1)
    {
        printf("Direita > ");
        i++;
    }
        break;
    case 2:
        printf("\n Você escolheu o Bispo! \n");
        printf("Escolha quantas casas quer move-lo: ");
        scanf("%d", &i2);
        printf("\n Movendo...\n");
    for (i = 0; i <= i2; i++)
    {
        printf(" / Direita-Cima\n");
    }
        break;
    case 3:
    i = 1;
        printf("\n Você escolheu a Rainha! \n");
        printf("Escolha quantas casas quer move-lá: ");
        scanf("%d", &i3);
        printf("\n Movendo...\n");
    do
    {
        printf(" < Esquerda  ");
        i++;
    } while (i <= i3);
        break;
    default:
        printf("Opção Inválida.");
        continue;
    }
    printf("\nDeseja escolher outra peça?[s/n] ");
    scanf(" %c", &continuar);
    
} while (continuar == 's' || continuar == 'S');

    


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

  return 0;
}

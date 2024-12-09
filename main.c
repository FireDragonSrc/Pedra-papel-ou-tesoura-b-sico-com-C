#include <stdio.h>

int main(){
    char playerUm[25];
    char playerDois[25];
    printf("Player 1, sua vez...\n");
    scanf("%s",playerUm);
    printf("Player 2, sua vez...\n");
    scanf("%s",playerDois);
    if(strcmp(playerUm, "pedra") == 0){
            if(strcmp(playerDois, "pedra") == 0){
                printf("Empate: player 1 jogou %s e player 2 jogou %s \n",playerUm, playerDois);
            }
            else if(strcmp(playerDois, "papel") == 0){
                printf("player 2 Ganhou!!! \n");
            }
            else if(strcmp(playerDois, "tesoura") == 0){
                printf("player 1 Ganhou!!! \n");
            }
            else{
                printf("%s é inválido!!!",playerDois);
            }
    }
    else if(strcmp(playerUm, "papel") == 0){
            if(strcmp(playerDois, "pedra") == 0){
                printf("player 1 Ganhou!!! \n");
            }
            else if(strcmp(playerDois, "papel") == 0){
                printf("Empate: player 1 jogou %s e player 2 jogou %s \n",playerUm, playerDois);
            }
            else if(strcmp(playerDois, "tesoura") == 0){
                printf("player 2 Ganhou!!! \n");
            }
            else{
                printf("%s é inválido!!!",playerDois);
            }
    }
    else if(strcmp(playerUm, "tesoura") == 0){
            if(strcmp(playerDois, "pedra") == 0){
                printf("player 2 Ganhou!!! \n");
            }
            else if(strcmp(playerDois, "papel") == 0){
                printf("player 1 Ganhou!!! \n");
            }
            else if(strcmp(playerDois, "tesoura") == 0){
                printf("Empate: player 1 jogou %s e player 2 jogou %s \n",playerUm, playerDois);
            }
            else{
                printf("%s é inválido!!!",playerDois);
            }
    }
    else{
        printf("%s é inválido!!!",playerUm);
    }
    return 0;
}
#include <stdio.h>

int main(){
int escolha, i = 1;

//irei fazer um menu com a escolha da peca que deseja movimentar
printf("ESCOLHA A PECA QUE DESEJA MOVIMENTAR\n");
printf("1-TORRE\n2-BISPO\n3-RAINHA\n");
printf("DIGITE O NUMERO CORRESPONDENTE:\n");
scanf("%d", &escolha);

//implementando escolha da peca com switch
switch (escolha){
case 1:
     for(i; i <= 5; i++){
printf("TORRE MOVEU-SE PARA DIREITA %d\n", i);
    }
    break;
case 2:
 do{
        printf("BISPO MOVEU-SE PARA CIMA \n");
        printf("BISPO MOVEU-SE PARA DIREITA %d\n", i);
        i++;
    }while (i <= 5);
break;
case 3:
while (i <= 8){
    printf("RAINHA MOVEU-SE PARA ESQUERDA %d\n", i);
    i++;
}
    break;
default:
printf("erro...invalido");
    break;
}
    return 0;
}

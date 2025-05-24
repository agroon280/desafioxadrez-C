#include <stdio.h>
//criar o void 
void torre( int t){
    if(t > 0){
printf("TORRE MOVEU-SE PARA DIREITA\n");
torre(t - 1);}
}

void bispo( int b){
    if(b > 0){
printf("RAINHA MOVEU-SE PARA CIMA\n");
printf("RAINHA MOVEU-SE PARA DIREITA\n");
bispo(b - 1);}
}

void rainha(int r){
if(r > 0){
printf("RAINHA MOVIMENTOU-SE PARA ESQUERDA\n");
rainha(r - 1);}
}

int main(){
    //variaveis para switch e recursividade
int escolha;
int movt=5, movb=5, movr=8;

//irei fazer um menu com a escolha da peca que deseja movimentar
printf("ESCOLHA A PECA QUE DESEJA MOVIMENTAR\n");
printf("1-TORRE\n2-BISPO\n3-RAINHA\n4-CAVALO\n");
printf("DIGITE O NUMERO CORRESPONDENTE:\n");
scanf("%d", &escolha);
/*implementando escolha da peca com switch, com o novo desafio proposto no nível mestre
criei as seguintes recursivas  da variavel void, para rainha, bispo e torre 
e as apliquei no sistema de escolhas das pecas no menu do usuario*/

switch (escolha){
case 1:
 torre(movt);
    break;
case 2:
 bispo(movb);
break;
case 3:
 rainha(movr);
break;
/*Usando uma estrutura de loops aninhadas, estruturei usando duas variáveis para que 
imprima um printf normal e outro usando If com a condicao (j ==2), e logo usando break; 
pulando para o último printf...
*/
case 4:
 for(int i=1,j=2;i>0;i--){
 for(j;j>0;j--){
 printf("CAVALO MOVEU-SE PARA CIMA\n");
 if (j==2){
 printf("CAVALO MOVEU-SE PARA CIMA\n"); 
}
break;}
}
 printf("CAVALO MOVEU-SE PARA DIREITA\n");
break;
default:
 printf("erro...invalido\ntente novamente");
 break;
}
    return 0;
}

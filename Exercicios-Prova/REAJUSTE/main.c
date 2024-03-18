#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Mercadoria(float preco,int quantidade,int categoria,float *TSD, float *TCD);

int main(){

    float preco,TSD,TCD;
    int categoria,opcao, quantidade;

    do{
        printf("\n===MENU===\n");
        printf("[1]-INSERIR MERCADORIA\n[0]-SAIR DO PROGRAMA\n");
        scanf("%d", &opcao);

        if (opcao == 1){
            printf("Digite o preco da mercadoria: ");
            scanf("%f", &preco);
            if (preco < 0.25){
                printf("preco invalido.");
            }
            else {
                printf("Digite a quantidade: ");
                scanf("%d",&quantidade);
                if (quantidade <= 0){
                    printf("numero invalido de mercadoria");
                }
                else{
                    printf("digite a categoria do produto: ");
                    scanf("%d",&categoria);
                    if (categoria == 1 || categoria == 2 || categoria == 3){
                        Mercadoria(preco,quantidade,categoria,&TSD,&TCD);
                        printf("valor total sem reajuste: %f",TSD);
                        printf("valor total com reajuste: %f",TCD);
                    }
                    else{
                        printf("Digite um numero valido");
                    }
                }
            }


            }
            else if (opcao != 1){
                printf("Numero invalido");
            }

            else{
                break;
            }
        }while (opcao != 0);


    return 0;
}

void Mercadoria(float preco,int quantidade,int categoria,float *TSD, float *TCD){

    if (categoria == 1){
        *TSD = preco * quantidade;
        *TCD = (preco * quantidade) - (preco * quantidade * 0.03);
    }
    else if ( categoria == 2){
        *TSD = preco * quantidade;
        *TCD = (preco * quantidade) + (preco * quantidade * 0.05);
    }
    else if (categoria == 3){
        *TSD = preco * quantidade;
        *TCD = (preco * quantidade) - (preco * quantidade * 0.07);
    }


}




#include <stdio.h>
#include <stdlib.h>

//protótipo (não ter retorno-void)
void Funcionario(float *SB, int Q, int C, float *SL, float *VA,float *planoSaude);

int main()
{
    float SB, SL, VA, planoSaude;
    int C,Q,opcao;

    do{
        printf("\n[1]-INSERIR FUNCIONARIO\n\[0]-SAIR DO PROGRAMA\n");
        scanf("%d",&opcao);

        if (opcao ==1){
            printf("Digite seu salario: ");
            scanf("%f",&SB);
            if (SB < 1201.25){
                printf("Valor de salario invalido.");
            }
            else{
                printf("Digite a quantidade de dependentes: ");
                scanf("%d",&Q);
                if (Q <= 0){
                    printf("O numero de dependentes deve ser maior que 0");
                }
                else{
                    printf("Digite sua classificacao: ");
                    scanf("%d",&C);
                    if (C == 1 || C == 2 || C == 3){
                        Funcionario(&SB,Q,C,&SL,&VA,&planoSaude);
                        printf("salario liquido: %f", SL);
                        printf("\nplano de saude: %f", planoSaude);
                        printf("\nvale alimentacao: %f", VA);

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

void Funcionario(float *SB, int Q, int C, float *SL, float *VA,float *planoSaude){

    float porcnt;

    if (C == 1){
        porcnt = (*SB) * (0.10 * Q);
        *VA = 1201.25 + (porcnt);
        *planoSaude = 605.50 + (porcnt);
        *SL = (*SB) - (*planoSaude);
    }
    else if (C == 2){
        porcnt = (*SB) * (0.05 * Q);

        *VA = 1201.25 + (porcnt);
        *planoSaude = 605.50 + (porcnt);
        *SL = (*SB) - (*planoSaude);
    }
    else if (C == 3){
        porcnt = (*SB) * (0.01 * Q);
        *VA = 1201.25 + (porcnt);
        *planoSaude = 605.50 + (porcnt);
        *SL = (*SB) - (*planoSaude);
    }
}



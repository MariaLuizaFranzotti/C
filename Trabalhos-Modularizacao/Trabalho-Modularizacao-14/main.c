/* 14) Crie uma função e seu protótipo que calcule a área e volume de uma esfera. Na main, use a função em
50 esferas e exiba a área e volume para valores de raio (R ∈ R+) informada pelo usuário. Sendo:
Area = 4 ∗ π ∗ R2     Volume = 4/3 * π ∗ R3 */


#include <stdio.h>
#include <string.h>
#include <ctype.h>


#define PI 3.14


void areaVolume (float *raio, float *area, float *volume);



void areaVolume (float *raio,float *area, float *volume){

    *area = 4 * PI * (*raio) * (*raio) ;
    *volume = 4/3 * PI * (*raio)*(*raio)*(*raio);

}


int main(){



    float raio;
    float area,volume;
    int cont = 0;

    while (cont < 100){
        printf("\nDigite o valor do raio da esfera: ");
        scanf(" %f",&raio);

        if ( raio <= 0){
            printf("Digite um número válido: ");
        }
        else{

            printf("\nÁrea e volume:\n");

            areaVolume(&raio,&area,&volume);
            printf("\nA área da esfera é: %.2f\nO volume da esfera é: %.2f\n", area,volume);


        cont ++;

        }
    }


  return 0;
}


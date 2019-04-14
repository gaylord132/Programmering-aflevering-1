#include <stdio.h>
#include <math.h>

float radiantodegree(float yote);//funktion der regne radians om til grader

int main(){

    float hosliggende_katet,modstaende_katete,vinkel_A,vinkel_B,vinkelsum,hypotenusen,sidesum;
    int vinkel_C = 90;

    printf("Hej, det her program kan udregne alle dine vinkler i en retvinklet trekant,\nnar du kender 2 sider.");//spørger efter oplysninger omkring trekanten
    printf("\nStart med at skrive dine side oplysninger ind:\n");
    printf("\nIndtast hypotenusen, skriv 0 hvis ukendt\n");
    scanf("%f", &hypotenusen);
    printf("Intast hosliggende katet,skriv 0 hvis ukendt\n");
    scanf("%f", &hosliggende_katet);
    printf("Indtast den modstaende kate, skriv 0 hvis ukendt\n");
    scanf("%f", &modstaende_katete);

    if (hypotenusen == 0)//hvis hypotenusen skal programmet lave denne udregning
    {

    vinkel_A = atan(modstaende_katete/hosliggende_katet);//tangens
    vinkel_A = radiantodegree(vinkel_A);//brug af funktion

    hypotenusen=sqrt(modstaende_katete*modstaende_katete+hosliggende_katet*hosliggende_katet);//pytagoras læresætning

    vinkel_B=180-vinkel_A-vinkel_C;

    printf("\nVinkel A: %f\nVinkel B: %f\nVinkel C: %d\nSide   c: %f \n",vinkel_A,vinkel_B,vinkel_C, hypotenusen);

    vinkelsum = vinkel_A + vinkel_B + vinkel_C;
    sidesum=modstaende_katete+hosliggende_katet+hypotenusen;

    printf("\nVinkelsum: %f", vinkelsum);
    printf("\nSidesum: %f", sidesum);

    }

    else if (hosliggende_katet==0)

    {

    vinkel_A = asin(modstaende_katete/hypotenusen);//sinus
    vinkel_A = radiantodegree(vinkel_A);//brug af funktion

    hosliggende_katet = sqrt(hypotenusen*hypotenusen - modstaende_katete*modstaende_katete);//pytagoras læresætning

    vinkel_B = 180-vinkel_A-vinkel_C;

    printf("\nVinkel A: %f\nVinkel B: %f\nVinkel C: %d\nSide   b: %f \n",vinkel_A,vinkel_B,vinkel_C, hosliggende_katet);

    vinkelsum = vinkel_A + vinkel_B + vinkel_C;
    sidesum=modstaende_katete+hosliggende_katet+hypotenusen;

    printf("\nVinkelsum: %f", vinkelsum);
    printf("\nSidesum: %f", sidesum);
    }

    else
    {

    vinkel_A = acos(hosliggende_katet/hypotenusen);//cosinus
    vinkel_A = radiantodegree(vinkel_A);//brug af funktion


    modstaende_katete = sqrt((hypotenusen*hypotenusen - hosliggende_katet*hosliggende_katet));//pytagoras læresætning

    vinkel_B = 180-vinkel_A-vinkel_C;

    printf("\nVinkel A: %f\nVinkel B: %f\nVinkel C: %d\nSide   a: %f \n",vinkel_A,vinkel_B,vinkel_C, modstaende_katete);

    vinkelsum = vinkel_A + vinkel_B + vinkel_C;
    sidesum=modstaende_katete+hosliggende_katet+hypotenusen;

    printf("\nVinkelsum: %f", vinkelsum);
    printf("\nSidesum: %f", sidesum);
    }

    }

float radiantodegree(float yote)
{
    return yote*(180/ M_PI);

}

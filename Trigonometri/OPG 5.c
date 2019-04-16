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

    if (hypotenusen == 0)//hvis hypotenusen er =0 skal programmet lave denne udregning
    {

    vinkel_A = atan(modstaende_katete/hosliggende_katet);//tangens^-1 
    vinkel_A = radiantodegree(vinkel_A);//brug af funktion der regner fra radians til grader

    hypotenusen=sqrt(modstaende_katete*modstaende_katete+hosliggende_katet*hosliggende_katet);//pytagoras læresætning isoleret til c=\sqrt(modstaende_katete^2+hosliggende_katet^2)

    vinkel_B=180-vinkel_A-vinkel_C;//Finder vinkel B

    printf("\nVinkel A: %f\nVinkel B: %f\nVinkel C: %d\nSide   c: %f \n",vinkel_A,vinkel_B,vinkel_C, hypotenusen);

    vinkelsum = vinkel_A + vinkel_B + vinkel_C;
    sidesum=modstaende_katete+hosliggende_katet+hypotenusen;

    printf("\nVinkelsum: %f", vinkelsum);
    printf("\nSidesum: %f", sidesum);

    }

    else if (hosliggende_katet==0)//Hvis hosliggende katete er = 0 skal programmet lave denne udregning

    {

    vinkel_A = asin(modstaende_katete/hypotenusen);//sinus^-1
    vinkel_A = radiantodegree(vinkel_A);//brug af funktion der regner fra radians til grader

    hosliggende_katet = sqrt(hypotenusen*hypotenusen - modstaende_katete*modstaende_katete);//pytagoras læresætning isoleret til b=sqrt(hypotenusen^2 - modstaende_katete^2)

    vinkel_B = 180-vinkel_A-vinkel_C;//Finder vinkel B

    printf("\nVinkel A: %f\nVinkel B: %f\nVinkel C: %d\nSide   b: %f \n",vinkel_A,vinkel_B,vinkel_C, hosliggende_katet);

    vinkelsum = vinkel_A + vinkel_B + vinkel_C;
    sidesum=modstaende_katete+hosliggende_katet+hypotenusen;

    printf("\nVinkelsum: %f", vinkelsum);
    printf("\nSidesum: %f", sidesum);
    }

    else
    {

    vinkel_A = acos(hosliggende_katet/hypotenusen);//cosinus^-1 
    vinkel_A = radiantodegree(vinkel_A);//brug af funktion der regner fra radians til grader


    modstaende_katete = sqrt((hypotenusen*hypotenusen - hosliggende_katet*hosliggende_katet));//pytagoras læresætning isoleret til a=sqrt(hypotenusen^2 - hosliggende katete^2)

    vinkel_B = 180-vinkel_A-vinkel_C;//Finder vinkel B

    printf("\nVinkel A: %f\nVinkel B: %f\nVinkel C: %d\nSide   a: %f \n",vinkel_A,vinkel_B,vinkel_C, modstaende_katete);

    vinkelsum = vinkel_A + vinkel_B + vinkel_C;
    sidesum=modstaende_katete+hosliggende_katet+hypotenusen;

    printf("\nVinkelsum: %f", vinkelsum);
    printf("\nSidesum: %f", sidesum);
    }

    }

float radiantodegree(float yote)//funktion der regne fra radians to grader
{
    return yote*(180/ M_PI);

}

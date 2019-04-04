#include <stdio.h>
#include <math.h>


float degreeToRadian(float);// Her er  protorypen
int main(){

    float A,C,a,b,c;//variabler


    printf("Hej, dette program udregne siden c i en vilkaarlig trekant\n");
    printf("Hvad er din vinkel A?\n");
    scanf("%f", &A);

    if (A <= 0)// if statement der sørger for at vinkel ikke kan være 0
    {
        printf("vinkler skal ikke veere negative eller 0");
        return 0;
    }

    printf("Hvad er din vinkel C?\n");
    scanf("%f", &C);

    if(C <= 0)// if statement der sørger for at vinkel ikke kan være 0
    {
        printf("vinkler skal ikke veere negative eller 0");
        return 0;
    }

    printf("Hvad er din side a?\n (skal indtastest i cm)\n");
    scanf("%f", &a);

    if(a <= 0)// if statement der sørger for at siden ikke kan være 0
    {
        printf("Siden burde ikke veere negativ under 0");
        return 0;
    }

    A = degreeToRadian(A);// brug af funktion
    C = degreeToRadian(C);

    c = a*sin(C)/sin(A);//Her bruger vi sinus relationer til at bestemme side c



    printf("Side c: %f cm", c);// print side c


}

float degreeToRadian(float yate)//Ved hjælp ved denne funktion, beregen vi fra grader til radiens
{
    return yate * (M_PI/180);
}

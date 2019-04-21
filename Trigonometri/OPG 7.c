#include <stdio.h>
#include <math.h>


int main(){

    int
    vinkel_C = 60 , vinkel_A = 60 , vinkel_B = 60;//Vinkler

    float
    side_a , side_b , side_c , T , s;//sider, areal T og den halve omkreds

    printf("Hej, det her program kan fortælle dig vinklerne og arealet i en lide sidet trekant.\n");//spørger efter sider
    printf("Hvad er din side a?\n");
    scanf("%f", &side_a);
    printf("Hvad er din side b?\n");
    scanf("%f", &side_b);
    printf("Hvad er din side c?\n");
    scanf("%f", &side_c);

    s = (side_a+side_b+side_c)/2;//Formel for at finde den halve omkreds

    T = sqrt(s*(s-side_a)*(s-side_b)*(s-side_c));//Her udregnes arealet

    printf("Her er dit areal for din ligesidet trekant: %f\n", T);//Printer oplysninger ud
    printf("\nVinkel A:%d\nVinkel B:%d\nVinkel C:%d\n", vinkel_A, vinkel_B, vinkel_C);//printer oplysninger ud
}

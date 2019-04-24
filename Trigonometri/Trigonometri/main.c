#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
void opgaveEt();
void opgaveTo();
void opgaveTre();
void opgaveFire();
void opgaveFem();
void opgaveSex();
void opgaveSyv();
void arrayTester();
float radianToDegree(float);
float degreeToRadian(float);


int main()
{

    int taskNumber;
    printf("To choose a task enter the task's number: ");
    scanf("%d", &taskNumber);

    switch(taskNumber)
    {
    case 1:
        loading();
        opgaveEt();
    break;
    case 2:
        loading();
        opgaveTo();
    break;
    case 3:
        loading();
        opgaveTre();
    break;
    case 4:
        loading();
        opgaveFire();
    break;
    case 5:
        loading();
        opgaveFem();
    break;
    case 6:
        loading();
        opgaveSex();
    break;
    case 7:
        loading();
        opgaveSyv();
    break;
    default:
        printf("\n\t Error\n\nPlease choose a task between 1 and 7.\n");
        Sleep(500);
        loading();
        main();

    }
    return 0;
}

void opgaveEt()
{
    printf("Denne opgave går ud på at regne arealet ud af en vilkårlig trekant med bruger-inputtede sider.\n");
    float a, b, c, areal, s;
    printf("siden a:\n");
    scanf("%f", &a);
    printf("siden b:\n");
    scanf("%f", &b);
    printf("siden c:\n");
    scanf("%f", &c);


    s = (a+b+c)/2;

    areal = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Areal af trekanten med siderne \nsiden a: %f\nsiden b: %f\nsiden c: %f\ner\n%f", a, b, c, areal);

    next();
}

void opgaveTo()
{
    printf("Opgave 2 går ud på at udregne alle 3 vinkler i en vilkårlig trekant med bruger-inputtede sider.\n");
    //sider og vinkler dekleres
    float a, b, c, aA, bB, cC;
    //input fra brugeren
    printf("Siden a: \n");
    scanf("%f", &a);
    printf("Siden b: \n");
    scanf("%f", &b);
    printf("Siden c: \n");
    scanf("%f", &c);
    //Beregning af vinkel A

    aA = acos((pow(b, 2) + pow(c, 2) - pow(a, 2))/(2*b*c));
    printf("Vinklen A: %f\n", radianToDegree(aA));
    bB = acos((pow(a, 2) + pow(c, 2) - pow(b, 2))/(2*a*c));
    printf("Vinklen B: %f\n", radianToDegree(bB));
    cC = acos((pow(b, 2) + pow(a, 2) - pow(c, 2))/(2*b*a));
    printf("Vinklen C: %f", radianToDegree(cC));
    next();
}

void opgaveTre()
{
        float A1,C1,a1,b1,c1;//variabler for OPG 3 første spørgsmål

    A1=0.64577182324;
    C1=1.4137166941;
    a1=50;


    printf("Hej, dette program udregner siden c\nDet her er besvarelsen paa foorste spoorgsmaal 1 opgave 3");//Her udregnes første spørgsmål i opg 3

    c1 = a1*sin(C1)/sin(A1);

    printf("\nSide c: %f\n", c1);


    float A,C,a,b,c;//variabler

    printf("\nHej, dette program udregne siden c i en vilkaarlig trekant\n");
    printf("\nHvad er din vinkel A?\n");
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

    printf("Hvor lang er siden a i cm?\n");
    scanf("%f", &a);

    if(a <= 0)// if statement der sørger for at siden ikke kan være 0
    {
        printf("Siden burde ikke vaere negativ under 0");
        return 0;
    }

    A = degreeToRadian(A);// brug af funktion
    C = degreeToRadian(C);

    c = a*sin(C)/sin(A);//Her bruger vi sinus relationer til at bestemme side c



    printf("Siden c: %f cm", c);// print side c
    next();
}
void opgaveFire()
{
    printf("Denne opgave er i 2 dele den første hvor vi skal finde vinkel B ud fra hardcodede værdier. \nDen anden skal vinklen B igen findes bare med bruger-inputtede værdier.\nDel 1 med hardcodede værdier:\n");
    //DEL 1
    float a, b, c, aA, bB, cC;
    c = 30;
    b = 14;
    cC = 110;
    cC = degreeToRadian(cC);
    bB = asin(sin(cC)/c*b);
    printf("siden c: %f\n", c);
    printf("siden b: %f\n", b);
    printf("Vinklen C: %f\n", radianToDegree(cC));
    printf("\nVinklen B: %f\n\n", radianToDegree(bB));
    //DEL 2 med bruger-input
    printf("Del 2 med bruger-inputtede værdier:\n");
    printf("Siden c:\n");
    scanf("%f", &c);
    printf("Siden b:\n");
    scanf("%f", &b);
    printf("Vinklen C:\n");
    scanf("%f", &cC);

    cC = degreeToRadian(cC);
    bB = asin(sin(cC)/c*b);
    bB = radianToDegree(bB);
    if(0 < radianToDegree(bB) < 180)
    {
        printf("Vinklen B for en vilkårlig trekant med bruger-indtastede mål:\n\n");
        printf("siden c: %f\n", c);
        printf("siden b: %f\n", b);
        printf("Vinklen C: %f\n", radianToDegree(cC));
        printf("\nVinklen B: %f", bB);

    }
    else
    {
        printf("\nError\n");
        printf("\nTry other numbers.");

    }
    next();

}
void opgaveFem()
{
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
    vinkel_A = radianToDegree(vinkel_A);//brug af funktion der regner fra radians til grader

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
    vinkel_A = radianToDegree(vinkel_A);//brug af funktion der regner fra radians til grader

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
    vinkel_A = radianToDegree(vinkel_A);//brug af funktion der regner fra radians til grader


    modstaende_katete = sqrt((hypotenusen*hypotenusen - hosliggende_katet*hosliggende_katet));//pytagoras læresætning isoleret til a=sqrt(hypotenusen^2 - hosliggende katete^2)

    vinkel_B = 180-vinkel_A-vinkel_C;//Finder vinkel B

    printf("\nVinkel A: %f\nVinkel B: %f\nVinkel C: %d\nSiden  a: %f \n",vinkel_A,vinkel_B,vinkel_C, modstaende_katete);

    vinkelsum = vinkel_A + vinkel_B + vinkel_C;
    sidesum=modstaende_katete+hosliggende_katet+hypotenusen;

    printf("\nVinkelsum: %f", vinkelsum);
    printf("\nSidesum: %f", sidesum);
    }
    next();
}
void opgaveSex()
{
    printf("I denne opgave udregne resterende sider og vinkler når det angives 2 vinkler og en side.\n");
    float a, b, c, aA, bB, cC;
    printf("siden a:\n");
    scanf("%f", &a);
    printf("vinklen A:\n");
    scanf("%f", &aA);
    printf("vinklen B:\n");
    scanf("%f", &bB);

    cC = 180 - aA - bB;
    printf("%f\n", cC);
    aA = degreeToRadian(aA);
    bB = degreeToRadian(bB);
    cC = degreeToRadian(cC);
    b = a/sin(aA)*sin(bB);
    c = a/sin(aA)*sin(cC);

    printf("siden b: %f\n", b);
    printf("siden c: %f", c);
    next();
}
void opgaveSyv()
{
    int
    vinkel_C = 60 , vinkel_A = 60 , vinkel_B = 60;//Vinkler

    float
    side, T , s;//sider, areal T og den halve omkreds

    printf("Hej, det her program kan fortælle dig vinklerne og arealet i en lide sidet trekant.\n\n");//spørger efter sider
    printf("Hvor er en af siderne i trekanten?\n");
    scanf("%f", &side);

    s = (side*3)/2;//Formel for at finde den halve omkreds

    T = sqrt(s*(s-side)*(s-side)*(s-side));//Her udregnes arealet

    printf("\nHer er dit areal for din ligesidet trekant: %f\n", T);//Printer oplysninger ud (areal)
    printf("\nVinkel A:%d\nVinkel B:%d\nVinkel C:%d", vinkel_A, vinkel_B, vinkel_C);//printer oplysninger ud (vinkler)
    next();
}

void loading()
{
    printf("\nloading");
    Sleep(300);
    printf(".");
    Sleep(300);
    printf(".");
    Sleep(300);
    printf(".\n\n");
    Sleep(100);
}

void next()
{
    printf("\n\nTask completed.\n\n");
    main();
}

float radianToDegree(float x)
{
    return x*180/M_PI;
}
float degreeToRadian(float y)
{
    return y*M_PI/180;
}

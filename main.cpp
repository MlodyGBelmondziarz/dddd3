#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>


using namespace std;

int main(int argc, char** argv)
{
    system("chcp 1250");
    system("cls");
    
	double m_ciala;
    double sila;
  
    
    
    printf("Podaj masê cia³a: ");
    scanf("%lf",&m_ciala);
    
printf("\n");

    printf("Podaj wartoœæ si³y dzia³aj¹cej na cia³o: ");
    scanf("%lf",&sila);

    

	printf("\ndane\nm=%.2lf",m_ciala);
	printf(" kg");
	printf("\nF=%.2lf",sila);
	printf(" N");

printf("\n");

	printf("Obliczone:\n");
	printf(" ");
	printf("\nF=%.2lf",sila);
	printf(" N");

   
   
   printf("\nwyniki");
   
	printf("\na=%.2lf",sila / m_ciala);
	printf(" m(s^2)");
  
   
   


return 0;
}

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int SerieF(int n) 
{
    if (n == 0) 
    {
     return 0;
	}
     if (n == 1) 
     {
       return 1;
	 }
	  
    return SerieF(n-1)+SerieF(n-2);
}

int main(int argc, char** argv) 
{
    int n;
    int i;

    printf("Ingresar cantidad de elementos: ");
    scanf("%d", &n);

   
     for (i=0;i<n; i++)
	  printf("%d ", SerieF(i));
       printf("\n");
    

    return 0;
}

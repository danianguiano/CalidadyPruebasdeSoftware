#include <stdio.h>
#include <math.h>

int main(void)
{
    int i,j,a,primo;
    primo=911;
    j=0;
    a=0;
    
    while(j<3){

    	for(i=1;i<=primo;i++)
			{
			if(primo%i==0) // si num1 módulo de i es 0, incrementamos a en 1.
				a++;
			}

		if(a==2)
		{
			printf("El número %d es primo\n", primo);
		}

		primo=(primo/10)+((primo%10)*100);
		j++;
		a=0;

	}


    return 0;
}
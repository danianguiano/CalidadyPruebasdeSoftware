#include <stdio.h>
#include <math.h>

int main(void)
{
    int i,j,a,primo,contador, primo2;
    contador=0;
    primo=911;
    primo2=primo;
    j=0;
    a=0;

    while(primo2/10>0)
    {
        primo2=primo2/10;
        contador++;
    }

    
    while(j<contador){

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
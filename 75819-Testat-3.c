#include <stdio.h>

int main()
{
    int zahl = 0;
    int i = 2;

    scanf("%d", &zahl);
    if (zahl < 2){
    	printf("%d kann nicht zerlegt werden.\n", zahl);
    } 
	else {

    while (i <= zahl){
        if (zahl%i == 0){
            printf("%d\n", i);
            if(zahl==i)
            	printf("%d ist prim.\n", zahl);
            zahl /= i;
            
        }
        else
            i++;
    }
}

    return 0;
}

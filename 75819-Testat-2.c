#include <stdio.h>

int main() {
	double bruttogehalt;
    int verheiratet, kinder;
    scanf("%lf%d%d", &bruttogehalt, &verheiratet, &kinder);
    
    const double steuersatz1 = 0.12;
	const double steuersatz2 = 0.15;
	const double steuersatz3 = 0.20;
	const double steuersatz4 = 0.25;	
	
	const double grenze1 = 12000.0; 
	const double grenze2 = 20000.0; 
	const double grenze3 = 30000.0; 
	
		
	double kinderSteuer = kinder * 0.1;
	float steuer;
	double eheSteuer;
	
	    if (verheiratet == 1) {
		    eheSteuer = 0.2;
	    }
	    else if (verheiratet == 0) {
			eheSteuer = 0.0;
		}
	
	// Berechnung 
		if (bruttogehalt <= grenze1) {
		steuer = bruttogehalt * steuersatz1 * (1.0 - (eheSteuer + kinderSteuer)); 
		}
        else if (bruttogehalt <= grenze2) {
		steuer = bruttogehalt * steuersatz2 * (1.0 - (eheSteuer + kinderSteuer));
	    }
		else if (bruttogehalt <= grenze3) {
		steuer = bruttogehalt * steuersatz3 * (1.0 - (eheSteuer + kinderSteuer)); 
		}
		else {
		steuer = bruttogehalt * steuersatz4 * (1.0 - (eheSteuer + kinderSteuer)); 
		}
	// Ausgabe 
		if (bruttogehalt < 0.0 || verheiratet < 0 || verheiratet > 1 || (kinder < 1 && kinder != 0)) {
	    	printf("Eingabefehler\n");
		}
		else if (steuer < 0.0) {
			steuer = 0;
			printf("%.0f", steuer);
		} 
		else 
		printf("%.2lf\n", steuer);
    
	return 0;
}

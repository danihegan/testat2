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
	
	
	int kinderAnzahl = kinder * 0.1;
	float steuer;
	
	if (verheiratet == 1) {
		verheiratet = 0.2;
	}
	    else if (verheiratet == 0) {
			verheiratet == 0.0;
		}
		else {
			printf("Eingabefehler\n");
		}
	}
	
	
	// Berechnung 
		if (bruttogehalt <= grenze1) {
		steuer = bruttogehalt * steuersatz1 * (1 - (verheiratet + kinder)); 
		}
        else if (bruttogehalt <= grenze2) {
		steuer = bruttogehalt * steuersatz2 * (1 - (verheiratet + kinder));
	    }
		else if (bruttogehalt <= grenze3) {
		steuer = bruttogehalt * steuersatz3 * (1 - (verheiratet + kinder)); 
		}
		else if (bruttogehalt > grenze3) {
		steuer = bruttogehalt * steuersatz4 * (1 - (verheiratet + kinder)); 
		};
		
	// Ausgabe 
    printf("%.2lf\n", steuer);
    
	return 0;
}

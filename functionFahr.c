#include <stdio.h>

/* print Fahrenheight-Celsius table
   for fahr = 0, 20, ..., 300 */

float convertFahr(float fahr);

int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;	/* lower limit of temperature scale */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;
	
	printf("%3c %6c\n", 'F', 'C');
	
	while(fahr <= upper) {
		celsius = convertFahr(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}

float convertFahr(float fahr){

	float cels;

	cels = (5.0/9.0) * (fahr-32.0);

	return cels;

}


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    if (argc <= 1) { puts("No price was given."); return 0; }
    
	if (argc > 3) puts("Excess arguments will be ignored.");

	const double price = atof(argv[1]);	// the given price
	const double sixPercentTax = 0.0625 * price;	// the sales tax at 6.25%
	const double eightPercentTax = 0.0825 * price;	// the sales tax at 8.25%

	puts("");
	puts("TAX PERCENTAGE\t│ TOTAL \t│ TAX SURCHARGE");
	puts("────────────────┼───────────────┼──────────────");
	printf("  8.25%%\t\t│ $%.2f \t│ $%.2f\n", price + eightPercentTax, eightPercentTax);
	printf("  6.25%%\t\t│ $%.2f \t│ $%.2f\n", price + sixPercentTax, sixPercentTax);
    if (argc >= 3) {
        const double customPercentageTax = ( atof(argv[2]) / 100.0 ) * price; // custom tax
        printf("  %s%%\t\t│ $%.2f \t│ $%.2f\n", argv[2], price + customPercentageTax, customPercentageTax);
    }
	puts("");

	return 0;
}

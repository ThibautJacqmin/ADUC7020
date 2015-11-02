#include <ADuC7020.h>

// reads ADC that has been selected (with  selectADC.c), and started with ADCconversion.c.

int readADC(void)
{
while (!ADCSTA){}
return ((ADCDAT&0xFFF0000)>>16);
}

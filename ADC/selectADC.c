#include <ADuC7020.h>

// Select ADC to read

void selectADC(int channel)
{
	switch (channel) {
		case 0:
			ADCCP = 0x00;   // conversion on ADC0
			break;
		case 1:
			ADCCP = 0x01;   // conversion on ADC1
			break;
		case 2:
			ADCCP = 0x02;   // conversion on ADC2
			break;
		case 3:
			ADCCP = 0x03;   // conversion on ADC3 
			break;
		}

}
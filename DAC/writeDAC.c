#include <ADuC7020.h>

void writeDAC(int DACindex, int DAT)
{
	unsigned long ADC;
	ADC = DAT;
	if (DACindex == 0){
		DAC0DAT = ADC<<16;}
    else if (DACindex == 1){
		DAC1DAT = ADC<<16;}
	else if (DACindex == 2){
		DAC2DAT = ADC<<16;}
	else if (DACindex == 3){
		DAC3DAT = ADC<<16;}

}


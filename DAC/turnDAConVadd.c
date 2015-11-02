#include <ADuC7020.h>

// Turn on DAC with range from 0V to AVdd = 3.3 V
// By using DACiCON = 0x13;

void turnDACon(int DACindex)
{
	if (DACindex == 0){
		DAC0CON = 0x13;	// AGND-AVdd range 3.3 V
	} else if (DACindex == 1){
		DAC1CON = 0x13;	// AGND-AVdd range 3.3 V
	} else if (DACindex == 2){
		DAC2CON = 0x13;	// AGND-AVdd range 3.3 V
	} else if (DACindex == 3){
		DAC3CON = 0x13;	// AGND-AVdd range 3.3 V
    }

}

#include <ADuC7020.h>

// Turn on DAC with range from 0V to internal voltage
// reference of the chip (2.5 V)

void turnDACon(int DACindex)
{
	if (DACindex == 0){
		DAC0CON = 0x12;	// AGND-ARef range 2.5V
	} else if (DACindex == 1){
		DAC1CON = 0x12;	// AGND-ARef range 2.5V
	} else if (DACindex == 2){
		DAC2CON = 0x12;	// AGND-ARef range 2.5V
	} else if (DACindex == 3){
		DAC3CON = 0x12;	// AGND-ARef range 2.5V
    }

}

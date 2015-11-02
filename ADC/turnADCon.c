#include <ADuC7020.h>

// Turn on ADC
// Wait for ADC to be fully powered on (about 10 µs)
// Select ADC to read
// Start continuous conversion at 773.688 hSPS using 8 clocks 
// turns for acquisition

void turnADCon(void)
{
    int time = 20000;
	ADCCON = 0x0620;	// power-on the ADC
	while (time >= 0)
    time--;
}


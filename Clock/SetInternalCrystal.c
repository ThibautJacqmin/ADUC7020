#include <ADuC7020.h>

// Use internal crystal at 32.768 kHz to drive the PLL clock
// Choose the frequency (label 1 to 7)

void SetClockInt(int freq)
{	  	
	POWKEY1 = 0x01;
	
	switch (freq){
		case 1:
		POWCON = 0x00; // 41.78 MHz
		break;
		case 2:
		POWCON = 0x01; // 20.89 MHz
		break;
		case 3:
		POWCON = 0x02; // 10.44 MHz
		break;
		case 4:
		POWCON = 0x03; // 5.22 MHz
		break;
		case 5:
		POWCON = 0x04; // 2.61 MHz
		break;
		case 6:
		POWCON = 0x05; // 1.31 MHz
		break;
		case 7:
		POWCON = 0x06; // 653 kHz
		break;
		case 8:
		POWCON = 0x07; // 326 kHz
		break;
	}
	
	POWKEY2 = 0xF4;
}	 

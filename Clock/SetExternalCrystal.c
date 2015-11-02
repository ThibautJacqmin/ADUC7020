#include <ADuC7020.h>

// Use external crystal at 32.768 kHz to drive the PLL clock
// Use internal crystal at 32.768 kHz to drive the PLL clock
// Choose the frequency (label 1 to 7)

void SetClock(int freq)
{

int t2val_old;
	  	
	t2val_old= T2VAL;
	T2LD = 5;
	T2CON = 0x480;

	while ((T2VAL == t2val_old) || (T2VAL > 3))
		IRQEN = 0x10;
		                             
		PLLKEY1 = 0xAA;
		PLLCON = 0x01;
		PLLKEY2 = 0x55;

		POWKEY1 = 0x01;
		
		switch (freq){
			case 1:
			POWCON = 0x20; // 41.78 MHz
			break;
			case 2:
			POWCON = 0x21; // 20.89 MHz
			break;
			case 3:
			POWCON = 0x22; // 10.44 MHz
			break;
			case 4:
			POWCON = 0x23; // 5.22 MHz
			break;
			case 5:
			POWCON = 0x24; // 2.61 MHz
			break;
			case 5:
			POWCON = 0x25; // 1.31 MHz
			break;
			case 6:
			POWCON = 0x26; // 653 kHz
			break;
			case 7:
			POWCON = 0x27; // 326 kHz
			break;
	}

		POWKEY2 = 0xF4;
}
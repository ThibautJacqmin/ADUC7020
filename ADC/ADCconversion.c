#include <ADuC7020.h>

// Start continuous conversion at chosen frequency and chose number of clock cycles 
// during conversion (the more clock cycles the better the value, it is all about
// having enough time to charge a capacitor
// turns for acquisition
// Deafault value is 773.688 kSPS, 8 clocks, that is ADCCON = 0x06E4;
// Numclocks can be 2, 4, 8, 16
// Frequencies are labelled 1, 2, 3, 4, 5, 6 (highest to lowest for clock cycle length

void ADCconversion(int numclocks, int freq) {

	switch (numclocks) {

		case 2:
			switch (freq) {
				case 1:
					ADCCON = 0x00E4; // 1989.485 kSPS
				break;
				case 2:
					ADCCON = 0x04E4; // 994.742 kSPS
				break;
				case 3:
					ADCCON = 0x08E4; // 497.371 kSPS
				break;
				case 4:
					ADCCON = 0x0CE4; // 248.685 kSPS
				break;
				case 5:
					ADCCON = 0x10E4; // 124.342 kSPS
				break;
				case 6:
					ADCCON = 0x14E4; // 62.171 kSPS
				break;
				}
		break;

		case 4:
			switch (freq) {
				case 1:
					ADCCON = 0x01E4; // 1816.486 kSPS
				break;
				case 2:
					ADCCON = 0x05E4; // 908.243 kSPS
				break;
				case 3:
					ADCCON = 0x09E4; // 454.121 kSPS
				break;
				case 4:
					ADCCON = 0x0DE4; // 227.060 kSPS
				break;
				case 5:
					ADCCON = 0x11E4; // 113.530 kSPS
				break;
				case 6:
					ADCCON = 0x15E4; // 56.765 kSPS
				break;
				}
		break;

		case 8:
			switch (freq) {
				case 1:
					ADCCON = 0x02E4; // 1547.377 kSPS
				break;
				case 2:
					ADCCON = 0x06E4; // 773.688 kSPS
				break;
				case 3:
					ADCCON = 0x0AE4; // 386.844 kSPS
				break;
				case 4:
					ADCCON = 0x0EE4; // 193.422 kSPS
				break;
				case 5:
					ADCCON = 0x12E4; // 96.711 kSPS
				break;
				case 6:
					ADCCON = 0x16E4; // 48.355 kSPS
				break;
				}
		break;
		case 16:
			switch (freq) {
				case 1:
					ADCCON = 0x03E4; // 1193.691 kSPS
				break;
				case 2:
					ADCCON = 0x07E4; // 596.845 kSPS
				break;
				case 3:
					ADCCON = 0x0BE4; // 298.422 kSPS
				break;
				case 4:
					ADCCON = 0x0FE4; // 149.211 kSPS
				break;
				case 5:
					ADCCON = 0x13E4; // 74.605 kSPS
				break;
				case 6:
					ADCCON = 0x17E4; // 37.302 kSPS
				break;
				}
		break;
		}


}
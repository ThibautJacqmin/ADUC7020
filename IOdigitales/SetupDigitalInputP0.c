#include <ADuC7020.h>

void SetupDigitalInputP0(void)
{
   	GP0CON = 0x00000000;    // IO initialization
	GP0DAT = 0x00000000;    // set group 0 as input
}


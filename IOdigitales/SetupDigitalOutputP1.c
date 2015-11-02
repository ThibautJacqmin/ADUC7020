#include <ADuC7020.h>
// Warning P1 pins cannot be used for digital IO if UART is used
void SetupDigitalOutputP1(void)
{
    GP1CON = 0x00000000;    // IO initialization
	GP1DAT = 0xFF000000;    // set group 1 as output
}


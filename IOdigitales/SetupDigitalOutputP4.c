#include <ADuC7020.h>
// Warning P1 pins cannot be used for digital IO if UART is used
void SetupDigitalOutputP4(void)
{
    GP4CON = 0x00000000;    // IO initialization
	GP4DAT = 0x04000000;    // set group 4 as output
}


#include <ADuC7020.h>

// write digital value to the pin P4.2
void writeP42(void)
{	  
GP4DAT ^= 0x00040000;
}



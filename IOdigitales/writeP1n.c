#include <ADuC7020.h>

// write digital value to the pin P1.n
void Write_Digital(int n, int state)
{	  
    if(state == 1)
	  GP1DAT = (0x00000001<<(n + 16)) | GP1DAT;

	else
	  GP1DAT = ~((0x00000001<<(n + 16)) | (~GP1DAT));
}

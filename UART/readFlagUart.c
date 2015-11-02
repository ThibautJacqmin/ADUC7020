#include <ADuC7020.h>

int readFlagUART(void)
{
if(!(0x01==(COMSTA0 & 0x01))){}
return (COMRX);
}  

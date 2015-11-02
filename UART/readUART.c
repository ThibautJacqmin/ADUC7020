#include <ADuC7020.h>

int readUART(void)
{
while(!(0x01==(COMSTA0 & 0x01))){}
return (COMRX);
}  

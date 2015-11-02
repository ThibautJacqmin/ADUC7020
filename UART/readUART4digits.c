#include <ADuC7020.h>

int readUART4digits(void)
{
int firstbyte;
int secondbyte;

while(!(0x01==(COMSTA0 & 0x01))){}
firstbyte = COMRX;
while(!(0x01==(COMSTA0 & 0x01))){}
secondbyte = COMRX;
return (firstbyte*100+secondbyte);
} 

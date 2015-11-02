#include <ADuC7020.h>

void writeUART(int valeur)
{
while(!(0x020==(COMSTA0 & 0x020))){}
COMTX = valeur;
}
   

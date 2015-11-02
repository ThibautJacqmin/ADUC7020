#include <ADuC7020.h>

// Use internal 2.5V reference

void SetInternalVoltageRef(void)
{
int time = 20000;  
REFCON = 0x01; 
while (time >= 0)
time--;
}


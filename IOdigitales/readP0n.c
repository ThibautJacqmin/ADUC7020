#include <ADuC7020.h>

// read digital value from the pin P0.n
int readP0n(int n)
{
    return ((GP0DAT&0x000000FF) >> n) & 0x1;
}

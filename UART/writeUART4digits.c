extern void writeUART(int valeur); // Write on serial port

void writeUART4digits(int valeur)
{
int firstbyte;
int secondbyte;

firstbyte = valeur/100;
secondbyte = valeur-firstbyte*100;
writeUART(firstbyte);
writeUART(secondbyte);
}

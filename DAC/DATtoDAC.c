// convert integer format to ADC/DAC format
unsigned long DATtoDAC(int DAT)
{
	unsigned long DAC;
	DAC = DAT;
	return DAC<<16;
}

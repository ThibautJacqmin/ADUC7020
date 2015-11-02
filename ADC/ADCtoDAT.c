// convert ADC/DAC format to integer format
int ADCtoDAT(unsigned long ADC)
{
	return (ADC&0xFFF0000)>>16;
}

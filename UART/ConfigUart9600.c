void ConfigUART9600(void)
{	
    //GP1CON = 0x11; // Don't know what this is for. Removed since it disallow to use PI.n pins as digital input or outputs
	COMCON0 = 0x80;
	COMDIV0 = 0x88;
	COMDIV1 = 0x0;
	COMCON0 = 0x007; 
	COMDIV2 = 0x0;
}
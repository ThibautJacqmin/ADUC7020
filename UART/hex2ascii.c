char hex2ascii(char toconv)
{
	if (toconv<0x0A) 
	{
		toconv += 0x30;
	}
	else 
	{
		toconv += 0x37;
	}
	
	return (toconv);
}

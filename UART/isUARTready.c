//returns 1 if data is ready and 0 if not
char isUARTready(void){
	return (COMSTA0 & 0x01);
}

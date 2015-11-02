void senddata(short to_send)   
{   
    while(!(0x020==(COMSTA0 & 0x020))){}   
        COMTX = 0x0A;                       // output LF    
    while(!(0x020==(COMSTA0 & 0x020))){}   
        COMTX = 0x0D;                       // output CR    
    while(!(0x020==(COMSTA0 & 0x020))){}   
        COMTX = hex2ascii ((to_send >> 8) & 0x0F);   
    while(!(0x020==(COMSTA0 & 0x020))){}   
        COMTX = hex2ascii ((to_send >> 4) & 0x0F);                           
    while(!(0x020==(COMSTA0 & 0x020))){}   
        COMTX = hex2ascii (to_send & 0x0F);                            
}
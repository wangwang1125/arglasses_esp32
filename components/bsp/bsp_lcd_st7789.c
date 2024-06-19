#include "bsp_lcd_st7789.h"

void WriteComm(uint8_t i)
{
    DC_low;//C/D拉高
    CS_low;//片选拉低
    
	Spi_send_data(i);

	CS_high;//片选拉高
    //DC_low;//C/D拉低

}

void WriteData(uint8_t i)
{
    DC_high;//C/D拉低

    CS_low;//片选拉低
	Spi_send_data(i);
	CS_high;//片选拉高

    //DC_high;//C/D拉高
}

void WriteData_16bit(uint16_t dat)
{
    
    DC_high;//C/D拉低

    CS_low;//片选拉低
	Spi_send_data(dat>>8);
	Spi_send_data(dat);
	CS_high;//片选拉高
    
    //DC_low;//C/D拉高
}


void Lcd_SetRegion(uint16_t x_start,uint16_t y_start,uint16_t x_end,uint16_t y_end){
    WriteComm(0x2a);

    WriteData_16bit(x_start);
    WriteData_16bit(x_end);


    WriteComm(0x2b);

    WriteData_16bit(y_start);
    WriteData_16bit(y_end);

    
    WriteComm(0x2c);
}


void write_gbk_16(uint8_t x,uint8_t y,uint16_t color,uint8_t *byte)//写入16*16汉字，取模作为参数
{
    uint8_t i,j;
    uint8_t *k = byte;
    Lcd_SetRegion(x,y,x+45,y+45);
    for(j=0;j<32;j++){
        for(i=0;i<8;i++){
            WriteData_16bit(0x001f);
            // if((k[j]&(1<<i))!=0){
            //     WriteData_16bit(color);
            // }
            // else
            // {
            //     WriteData_16bit(0xFFFF);
            // }

        }

    }

}
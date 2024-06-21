#ifndef BSP_LCD_ST7789_H
#define BSP_LCD_ST7789_H
#include <stdio.h>
#include "driver/spi_master.h"
#include "bsp_gpio.h"
#include "bsp_spi.h"


void WriteComm(uint8_t i);
void WriteData(uint8_t i);
void WriteData_16bit(uint16_t dat);
void Lcd_init();
void Lcd_SetRegion(uint16_t x_start,uint16_t y_start,uint16_t x_end,uint16_t y_end);
void Lcd_Rst();
void write_gbk_16(uint8_t x,uint8_t y,uint16_t color,uint8_t *byte);
void Lcd_Init(void);
void AMOLED_Init(void);
#endif

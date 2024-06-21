#ifndef BSP_SPI_H
#define BSP_SPI_H
#include <stdio.h>
#include "driver/spi_master.h"
#include "bsp_gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#define EXAMPLE_LCD_PIXEL_CLOCK_HZ     (20 * 1000 * 1000)



#define LCD_HOST  SPI2_HOST

#define EXAMPLE_LCD_H_RES              240


void spi_init();

void Spi_send_data(uint8_t dat);

#endif


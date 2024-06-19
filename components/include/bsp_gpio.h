#ifndef BSP_GPIO_H
#define BSP_GPIO_H

#include "driver/gpio.h"
#include "esp_attr.h"
#include "bsp_spi.h"
#include <stdio.h>

#define EXAMPLE_PIN_NUM_LCD_DC         5
#define EXAMPLE_PIN_NUM_LCD_CS         4
#define EXAMPLE_PIN_NUM_BK_LIGHT       2

#define CS_low gpio_set_level(EXAMPLE_PIN_NUM_LCD_CS, 0);
#define CS_high gpio_set_level(EXAMPLE_PIN_NUM_LCD_CS,1);

#define DC_low gpio_set_level(EXAMPLE_PIN_NUM_LCD_DC, 0);
#define DC_high gpio_set_level(EXAMPLE_PIN_NUM_LCD_DC, 1);

#define SCLK_low gpio_set_level(EXAMPLE_PIN_NUM_SCLK, 0);
#define SCLK_high gpio_set_level(EXAMPLE_PIN_NUM_SCLK, 1);

#define MOSI_low gpio_set_level(EXAMPLE_PIN_NUM_MOSI, 0);
#define MOSI_high gpio_set_level(EXAMPLE_PIN_NUM_MOSI, 1);

#define MISO_low gpio_set_level(EXAMPLE_PIN_NUM_MISO, 0);
#define MISO_high gpio_set_level(EXAMPLE_PIN_NUM_MISO, 1);


#define BK_low gpio_set_level(EXAMPLE_PIN_NUM_BK_LIGHT, 0);
#define BK_high gpio_set_level(EXAMPLE_PIN_NUM_BK_LIGHT, 1);

void Gpio_Init();

#endif

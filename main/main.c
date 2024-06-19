#include <stdio.h>
#include "bsp_spi.h"
#include "bsp_gpio.h"
#include "bsp_lcd_st7789.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void LCD_task(void* pvParam)
{
    while (1)
    {
        //Lcd_SetRegion(1,1, 70, 70);
        //WriteData_16bit(0x001f);
        uint8_t key[32]={0xff};
        write_gbk_16(5,5,0x001f,key);
        vTaskDelay(100 / portTICK_PERIOD_MS);
    }
}
void LED_task(void* pvParam)
{
    while (1)
    {
        BK_low;
        vTaskDelay(1000 / portTICK_PERIOD_MS);
        BK_high;
        
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}

void app_main(void)
{
    Gpio_Init();
    spi_init();
    
    xTaskCreate(LCD_task, "LCD_task", 1024, NULL, 1, NULL);
    xTaskCreate(LED_task, "LED_task", 1024, NULL, 1, NULL);
        
}
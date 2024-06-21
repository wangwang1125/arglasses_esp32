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
        uint8_t key[32]={0xff};
        for(int i=0;i<=96;i+=16){
            for(int j=0;j<=144;j+=16){
                write_gbk_16(i,j,0x5f01,key);
            }
        }
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
    AMOLED_Init();
    //Lcd_Init();
    xTaskCreate(LCD_task, "LCD_task", 1024, NULL, 1, NULL);
    xTaskCreate(LED_task, "LED_task", 1024, NULL, 1, NULL);
        
}
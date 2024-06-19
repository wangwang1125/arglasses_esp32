#include "bsp_gpio.h"

void Gpio_Init(){
    // gpio_config_t GpioConfigt;

    // GpioConfigt.pin_bit_mask = BIT64(EXAMPLE_PIN_NUM_LCD_DC);//设置引脚
    // GpioConfigt.mode = GPIO_MODE_OUTPUT;//设置模式
    // GpioConfigt.pull_up_en = GPIO_PULLDOWN_DISABLE;//上拉使能
    // GpioConfigt.pull_down_en = GPIO_PULLDOWN_DISABLE;//下拉失能
    // GpioConfigt.intr_type = GPIO_INTR_DISABLE;//配置中断
    // gpio_config(&GpioConfigt);
    gpio_reset_pin(EXAMPLE_PIN_NUM_LCD_DC);//重置引脚
    gpio_set_direction(EXAMPLE_PIN_NUM_LCD_DC, GPIO_MODE_OUTPUT);//输出模式
    gpio_reset_pin(EXAMPLE_PIN_NUM_LCD_CS);//重置引脚
    gpio_set_direction(EXAMPLE_PIN_NUM_LCD_CS, GPIO_MODE_OUTPUT);//输出模式
    
    // gpio_reset_pin(EXAMPLE_PIN_NUM_SCLK);//重置引脚
    // gpio_set_direction(EXAMPLE_PIN_NUM_SCLK, GPIO_MODE_OUTPUT);//输出模式
    // gpio_reset_pin(EXAMPLE_PIN_NUM_MOSI);//重置引脚
    // gpio_set_direction(EXAMPLE_PIN_NUM_MOSI, GPIO_MODE_OUTPUT);//输出模式
    // gpio_reset_pin(EXAMPLE_PIN_NUM_MISO);//重置引脚
    // gpio_set_direction(EXAMPLE_PIN_NUM_MISO, GPIO_MODE_OUTPUT);//输出模式

    gpio_reset_pin(EXAMPLE_PIN_NUM_BK_LIGHT);//重置引脚
    gpio_set_direction(EXAMPLE_PIN_NUM_BK_LIGHT, GPIO_MODE_OUTPUT);//输出模式
}

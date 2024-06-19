
idf_component_register(SRCS "./bsp/bsp_spi.c" "./bsp/bsp_gpio.c" "./bsp/bsp_lcd_st7789.c"
                       INCLUDE_DIRS "./include" 
                       REQUIRES "driver" "esp_timer")

#include "bsp_spi.h"
spi_device_handle_t spi2_handle;

void spi_init(){
    
    spi_bus_config_t buscfg = {
        .sclk_io_num = EXAMPLE_PIN_NUM_SCLK,
        .mosi_io_num = EXAMPLE_PIN_NUM_MOSI,
        .miso_io_num = EXAMPLE_PIN_NUM_MISO,
        .quadwp_io_num = -1,
        .quadhd_io_num = -1,
        .max_transfer_sz = EXAMPLE_LCD_H_RES * 80 * sizeof(uint16_t),
    };
    ESP_ERROR_CHECK(spi_bus_initialize(LCD_HOST, &buscfg, 0));




    spi_device_interface_config_t interface_config={
        .clock_speed_hz = 20*1000 * 1000,
        .mode = 0,
        .queue_size = 6,
    };
    ESP_ERROR_CHECK(spi_bus_add_device(LCD_HOST, &interface_config, &spi2_handle));

}

void Spi_send_data(uint8_t dat){
    // uint8_t buff[1];
	// buff[0]=dat;
	// spi_transaction_t transcnf={
	// 	.length=1*8,
	// 	.tx_buffer=buff,
	// };
    // spi_device_polling_transmit(spi2_handle,&transcnf);


    uint8_t i=0;
    for(i=0;i<8;i++){
        SCLK_low;
        if(dat&0x80){
            MOSI_high;
        }
        else{
            MOSI_low;
        }
        SCLK_high;
        
        dat<<=1;
    }

}



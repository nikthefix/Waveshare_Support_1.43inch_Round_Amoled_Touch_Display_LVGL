//pin assignments for Waveshare 1.43" amoled esp32-s3 module

#pragma once

/***********************config*************************/

// Display
#define SPI_FREQUENCY         20000000 
#define TFT_SPI_MODE          SPI_MODE0
#define TFT_SPI_HOST          SPI2_HOST

#define EXAMPLE_LCD_H_RES     466 
#define EXAMPLE_LCD_V_RES     466 

#define LVGL_LCD_BUF_SIZE     (EXAMPLE_LCD_H_RES * EXAMPLE_LCD_V_RES)
#define SEND_BUF_SIZE         (EXAMPLE_LCD_H_RES * 10 )

#define TFT_QSPI_CS           9
#define TFT_QSPI_SCK          10
#define TFT_QSPI_D0           11
#define TFT_QSPI_D1           12
#define TFT_QSPI_D2           13
#define TFT_QSPI_D3           14
#define TFT_QSPI_RST          21
#define LCD_VCI_EN            42
#define TFT_TE                -1



// TOUCH
#define I2C_ADDR_FT3168 0x38
#define TOUCH_INT -1
#define TOUCH_RST -1
#define EXAMPLE_PIN_NUM_TOUCH_SDA 47
#define EXAMPLE_PIN_NUM_TOUCH_SCL 48

// Battery Voltage ADC
#define BATTERY_VOLTAGE_ADC_DATA 4

// SD
#define SD_CS 38
#define SD_MOSI 39
#define SD_MISO 40
#define SD_SCLK 41

// RTC
#define PCF8563_INT 15

//IMU
#define IMU_INT 8






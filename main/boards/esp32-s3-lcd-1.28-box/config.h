#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

// Movecall Moji configuration

#include <driver/gpio.h>

#define AUDIO_INPUT_SAMPLE_RATE  24000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000

#define AUDIO_I2S_GPIO_MCLK GPIO_NUM_16 //MCLK
#define AUDIO_I2S_GPIO_WS GPIO_NUM_45  //LRCK
#define AUDIO_I2S_GPIO_BCLK GPIO_NUM_9 //SCLK
#define AUDIO_I2S_GPIO_DIN  GPIO_NUM_10 //DOUT
#define AUDIO_I2S_GPIO_DOUT GPIO_NUM_8  //DIN

#define AUDIO_CODEC_PA_PIN       GPIO_NUM_46
#define AUDIO_CODEC_I2C_SDA_PIN  GPIO_NUM_15
#define AUDIO_CODEC_I2C_SCL_PIN  GPIO_NUM_14
#define AUDIO_CODEC_ES8311_ADDR  ES8311_CODEC_DEFAULT_ADDR

#define BUILTIN_LED_GPIO        GPIO_NUM_48
#define BOOT_BUTTON_GPIO        GPIO_NUM_0


#define DISPLAY_WIDTH   240
#define DISPLAY_HEIGHT  240
#define DISPLAY_MIRROR_X true
#define DISPLAY_MIRROR_Y false
#define DISPLAY_SWAP_XY false

#define DISPLAY_OFFSET_X  0
#define DISPLAY_OFFSET_Y  0


#define DISPLAY_BACKLIGHT_PIN GPIO_NUM_42
#define DISPLAY_BACKLIGHT_OUTPUT_INVERT true

#define DISPLAY_SPI_SCLK_PIN    GPIO_NUM_4
#define DISPLAY_SPI_MOSI_PIN    GPIO_NUM_2
#define DISPLAY_SPI_CS_PIN      GPIO_NUM_5
#define DISPLAY_SPI_DC_PIN      GPIO_NUM_47
#define DISPLAY_SPI_RESET_PIN   GPIO_NUM_38

#define TP_PIN_NUM_TP_SDA   (GPIO_NUM_11)
#define TP_PIN_NUM_TP_SCL   (GPIO_NUM_7)
#define TP_PIN_NUM_TP_RST   (GPIO_NUM_6)
#define TP_PIN_NUM_TP_INT   (GPIO_NUM_12)

#define DISPLAY_SPI_SCLK_HZ     (40 * 1000 * 1000)

#endif // _BOARD_CONFIG_H_

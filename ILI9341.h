#ifndef ILI9341_H
#define ILI9341_H
#include "stm32f10x.h"                  // Device header
#include "stm32f10x_rcc.h"              // Keil::Device:StdPeriph Drivers:RCC
#include "stm32f10x_gpio.h"             // Keil::Device:StdPeriph Drivers:GPIO
#include "stm32f10x_spi.h"              // Keil::Device:StdPeriph Drivers:SPI

#ifndef ILI9341_SPI
#define ILI9341_SPI           SPI1
#endif

/**
 * @brief  CS PIN for SPI
 */
#ifndef ILI9341_CS_PIN
#define ILI9341_CS_PORT       GPIOA
#define ILI9341_CS_PIN        GPIO_Pin_4
#endif

/**
 * @brief  WRX PIN for data/command
 */
#ifndef ILI9341_WRX_PIN
#define ILI9341_WRX_PORT      GPIOA
#define ILI9341_WRX_PIN       GPIO_Pin_2
#endif

/**
 * @brief  RESET for LCD
 */
#ifndef ILI9341_RST_PIN
#define ILI9341_RST_PORT      GPIOA
#define ILI9341_RST_PIN       GPIO_Pin_3
#endif

/* LCD settings */
#define ILI9341_WIDTH        240
#define ILI9341_HEIGHT       320
#define ILI9341_PIXEL        76800

/* Colors */
#define ILI9341_COLOR_WHITE			0xFFFF
#define ILI9341_COLOR_BLACK			0x0000
#define ILI9341_COLOR_RED       0xF800
#define ILI9341_COLOR_GREEN			0x07E0
#define ILI9341_COLOR_GREEN2		0xB723
#define ILI9341_COLOR_BLUE			0x001F
#define ILI9341_COLOR_BLUE2			0x051D
#define ILI9341_COLOR_YELLOW		0xFFE0
#define ILI9341_COLOR_ORANGE		0xFBE4
#define ILI9341_COLOR_CYAN			0x07FF
#define ILI9341_COLOR_MAGENTA		0xA254
#define ILI9341_COLOR_GRAY			0x7BEF
#define ILI9341_COLOR_BROWN			0xBBCA

/* Transparent background, only for strings and chars */
#define ILI9341_TRANSPARENT			0x80000000


void ILI9341_Init();
void ILI9341_SendCommand(uint8_t data);
void ILI9341_SendData(uint8_t data);
void ILI9341_SetPosition(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);
void ILI9341_DrawPixel(uint16_t X, uint16_t Y, uint32_t Color);
void ILI9341_FullFill(uint32_t Color);
#endif /* ILI9341_H */
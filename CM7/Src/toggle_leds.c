#include "toggle_leds.h"
#include "gpio.h"
#include "stm32h7xx_hal_gpio.h"

void ToggleLeds(void) {
  HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
  HAL_Delay(100);

  HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
  HAL_Delay(100);

  HAL_GPIO_TogglePin(LED3_GPIO_Port, LED3_Pin);
  HAL_Delay(100);

  HAL_GPIO_TogglePin(LED4_GPIO_Port, LED4_Pin);
  HAL_Delay(100);
}
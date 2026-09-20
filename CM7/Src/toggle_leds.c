#include "toggle_leds.h"
#include "gpio.h"
#include "stm32h7xx_hal_gpio.h"
#include <stdint.h>

void ToggleLeds(void) {
  const uint16_t delay = 250;

  HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_SET);
  HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
  HAL_Delay(delay);

  HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
  HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
  HAL_Delay(delay);

  HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
  HAL_GPIO_TogglePin(LED3_GPIO_Port, LED3_Pin);
  HAL_Delay(delay);
}

#include "sl_emlib_gpio_simple_init.h"
#include "sl_emlib_gpio_init_DRDY_config.h"
#include "sl_emlib_gpio_init_VBATT_config.h"
#include "em_gpio.h"
#include "em_cmu.h"

void sl_emlib_gpio_simple_init(void)
{
  CMU_ClockEnable(cmuClock_GPIO, true);
  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_DRDY_PORT,
                  SL_EMLIB_GPIO_INIT_DRDY_PIN,
                  SL_EMLIB_GPIO_INIT_DRDY_MODE,
                  SL_EMLIB_GPIO_INIT_DRDY_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_VBATT_PORT,
                  SL_EMLIB_GPIO_INIT_VBATT_PIN,
                  SL_EMLIB_GPIO_INIT_VBATT_MODE,
                  SL_EMLIB_GPIO_INIT_VBATT_DOUT);
}

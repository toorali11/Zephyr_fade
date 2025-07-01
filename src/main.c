#include <stdio.h>
#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/sys/printk.h>
#include <hal/nrf_gpio.h>

/* 1000 msec = 1 sec */
#define SLEEP_TIME_MS   1000

#define Gpio_pin  NRF_GPIO_PIN_MAP(0,31)
#define Gpio_pin1  NRF_GPIO_PIN_MAP(0,28)


int main(void)
{
	nrf_gpio_cfg_output(Gpio_pin);
	nrf_gpio_cfg_output(Gpio_pin1);
	while (1) {
		nrf_gpio_pin_set(Gpio_pin);  //LED4 on
		k_msleep(SLEEP_TIME_MS);
		nrf_gpio_pin_clear(Gpio_pin); //LED4 off
		k_msleep(SLEEP_TIME_MS);
		nrf_gpio_pin_set(Gpio_pin1); //LED 1 on
		k_msleep(SLEEP_TIME_MS);
		nrf_gpio_pin_clear(Gpio_pin1); //LED1 off
		k_msleep(SLEEP_TIME_MS);
	}
	return 0;
}

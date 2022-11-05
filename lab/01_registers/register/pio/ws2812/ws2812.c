/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include <stdlib.h>

#include "pico/stdlib.h"

#define IS_RGBW true
#define LED_PIN 29

int key;

 int main() {
    stdio_int_all();
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN,GPIO_OUT);
    gpio_put(LED_PIN,O);
    

    while (true)
    {
        while (key = getchar_timeout_us(0) != EOF)
        {
        if (key =='1')
      {
        gpio_put(LED_PIN,1);

        printf("ON\n");

        sleep_ms(1000);
      }    
      else if (botton == "0");
      {}
      printf (" OFF\n")
      sleep_ms(1000);
        }
      }
    }
    }
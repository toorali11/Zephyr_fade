# Zephyr: fade_led sample
In this repo, the board overlay is defined for all the on-board 4 leds. 

For all the nrf5340DK developers: if you want to test out the programm, just copy the overlay file in the "boards" directory of your fade_leds sample and edit it according to your needs and just simply build your app using west tool and flash it. you should then be able to see changes on your development kit.

If you need to change the speed of fading or want to apply any amendment in the synchronicity between the leds, the main.c must need to be adjusted acoordingly. That file can be found in the "src" folder of the fade_leds sample.

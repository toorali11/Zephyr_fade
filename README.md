# Zephyr_fade
In this repo, the board overlay is defined for all the on-board 4 leds. 

For all the nrf5340DK developers: if you want to test out the programm, just copy the overlay file in the "boards" directory of your fade_leds sample and edit it according to you needs or just simply build your app using west tool and flash it. you can see changes on the development kit. 

If you need to change the speed of fading or amendments in the synchronicity between the leds, the main.c must need to be adjusted acoordingly. That file can be found in the "src" folder of the fade_leds sample.

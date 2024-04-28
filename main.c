#include <gb/gb.h>
#include <stdint.h>
#include <stdbool.h>

uint8_t playerLocation[2];

bool loopRunning = 1;

void performantDelay(uint8_t delay){
    uint8_t i;
    for(i = 0; i < delay; i++){
        wait_vbl_done();
    }
}

void main(void){
    //load tiles

    //set player position
    playerLocation[0] = 80;
    playerLocation[1] = 80;

    //move player sprite

    //show the screen
    SHOW_BKG;
    SHOW_SPRITES;
    DISPLAY_ON;

    while(loopRunning){
        continue;
    }
}
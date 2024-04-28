#include <gb/gb.h>
#include <stdint.h>
#include <stdbool.h>

uint8_t playerLocation[2];
uint8_t input;

bool loopRunning = 1;

void performantDelay(uint8_t delay){
    uint8_t i;
    for(i = 0; i < delay; i++){
        wait_vbl_done();
    }
}

void getPlayerInput(void){
    input = joypad();

    if(input & J_LEFT){
        playerLocation[0] -= 8;
    }
    else if(input & J_UP){
        playerLocation[1] -= 8;
    }
    else if(input & J_RIGHT){
        playerLocation[0] += 8;
    }
    else if(input & J_DOWN){
        playerLocation[1] += 8;
    }

    performantDelay(3);
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
        getPlayerInput();
    }
}
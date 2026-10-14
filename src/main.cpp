#include <Arduino.h>
//this is just the begining
//14.11.26 couldnt do much the display shows random signs on random pins
// i think it has to do sometihng with the freqeuenzy
// also there should be a dedicated IC for the display but i still dont know the name of the display
void Setup(){
    int x = 1;
    int y = 2;
    int z = 0;

}

void Loop(){
    for (int i = 0; i < 10; i++) {
        // Your loop code here
        z += x;
        z += y;
    }

}
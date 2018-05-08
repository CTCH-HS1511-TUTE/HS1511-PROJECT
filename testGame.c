// By Alistair Parkinson, username alistairpakinson, zPass z5218710
// Lucca Harvey, username luccaharveyy, zPass z#######
// Zac Ching, username zacharyching, zPass z#######
// CTCH, Cuen Heyning
// 26/04/2018
// This code tests mandelbrot.h 

#include <stdio.h>
#include <stdlib.h>
#include "Game.h"
    
int main (int argc, char * argv[]) { 
    printf("Testing the next turn thingo");
    Game newBoard;
    int playerID = getWhoseTurn(newBoard);
    makeAction(newBoard, PASS);
    assert(playerID != getWhoseTurn(newBoard));

    printf("All tests passed! You are awesome!");
    return EXIT_SUCCESS;
}

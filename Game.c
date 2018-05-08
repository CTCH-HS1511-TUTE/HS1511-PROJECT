// By Alistair Parkinson, username alistairpakinson, zPass z5218710
// Lucca Harvey, username luccaharveyy, zPass z#######
// Zac Ching, username zacharyching, zPass z#######
// CTCH, Cuen Heyning
// 26/04/2018
// This code tests mandelbrot.h 

#include <stdio.h>
#include <stdlib.h>
#include "Game.h"

<<<<<<< HEAD
#define MAX_UNIVERSITIES 123456789

typedef struct _region {
    int regionID;
    int discipline;
} region;

typedef struct _player {
    int playerID;
    int university[MAX_UNIVERSITIES];
} player;

=======
>>>>>>> 1df0e847f22bc773f01e5e475e731ebae75c39b8
typedef struct _game {

} game;

Game newGame (int discipline[], int dice[]);

void disposeGame (Game g);

void makeAction (Game g, action a);

void throwDice (Game g, int diceScore);

int getDiscipline (Game g, int regionID);

int getDiceValue (Game g, int regionID);

int getMostARCs (Game g);

int getMostPublications (Game g);

int getTurnNumber (Game g);

int getWhoseTurn (Game g);

int getCampus(Game g, path pathToVertex);

int getARC(Game g, path pathToEdge);

int isLegalAction (Game g, action a);

int getKPIpoints (Game g, int player);

int getARCs (Game g, int player);

int getGO8s (Game g, int player);

int getCampuses (Game g, int player);

int getIPs (Game g, int player);

int getPublications (Game g, int player);

int getStudents (Game g, int player, int discipline);

int getExchangeRate (Game g, int player, 
    int disciplineFrom, int disciplineTo);

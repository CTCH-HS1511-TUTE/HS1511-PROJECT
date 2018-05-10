// By Alistair Parkinson, username alistairpakinson, zPass z5218710
// Lucca Harvey, username luccaharveyy, zPass z#######
// Zac Ching, username zacharyching, zPass z#######
// CTCH, Coen Heyning
// 26/04/2018
// This is the magic behind Game.h 

#include <stdio.h>
#include <stdlib.h>
#include "Game.h"

#define NUM_PLAYERS 3

typedef struct _players{
    int CampusOwned;
    int NumArcs;
    int NumGO8;
    
    path ArcID[PATH_LIMIT];
    path GO8ID[PATH_LIMIT];
    path CampusID[PATH_LIMIT];

    int Thd;
    int Bps;
    int Bqn;
    int Mj;
    int Mtv;
    int MMoney;

    int ip;
    int pub;
    int KPI;
}player;
typedef struct _game {
    player players[3]
    int MaxPoints;
    int currentTurn;
    int disciplines[NUM_REGIONS]; // Used to set up every discipline for each region
    int dice[NUM_REGIONS]; // Number on each region
} game;
//Lucca
Game newGame(int disciplinesValues[],int diceValues[]) {
    Game g = malloc(sizeof(game));
    int count = 0;
    while (count < NUM_REGIONS) {
      g.disciplines[c] = disciplinesValues[c];
      g.dice[count] = diceValues[c];
      count ++;
    }
    g.turnNum = -1;
    g.disciplines[NUM_REGIONS] = disciplinesValues[];
    g.dice[NUM_REGIONS] = diceValues[];
    count = 0;
  while (count < 3) {
    g.players[count].Thd = 0;
    g.players[count].Bps = 3;
    g.players[count].Bqn = 3;
    g.players[count].Mj = 1;
    g.players[count].Mtv = 1;
    g.players[count].Mmoney = 1;
    
    g.players[count].CampusID[PATH_LIMIT] = {0+count};
    g.players[count].ArcID[PATH_LIMIT] = {0+count};
    g.players[count].GO8ID[PATH_LIMIT] = {0+count};
    g.players[count].CampusOwned = 2;
    g.players[count].NumArcs = 0;
    g.players[count].NumGo8s = 0;
    
    g.players[count].pub = 0;
    g.players[count].ip = 0;
    g.players[count].KPI = 0;
  }
  return g;
}

void disposeGame (Game g){
    free(g);
}

void makeAction (Game g, action a) {
    if(a.actionCode == PASS) {
        turnNum++;
        if(turnNum > 3) {
            turnNum = 1
        }
    }
    if(a.actionCode == BUILD_CAMPUS){
        bool Resource1 = g.players[turnNum].Bps > 1;
        bool Resource2 = g.players[turnNum].Bqn > 1;
        bool Resource3 = g.players[turnNum].Mj > 1;
        bool Resource4 = g.players[turnNum].Mtv > 1;
        
        if(Resource1 && Resource2 && Resource3 && Resource4){
            g.players[turnNum].CampusOwned++;
            g.players[turnNum].KPI += 10;
        }
    }
    if(a.actionCode == BUILD_GO8){
        bool Resource1 = g.players[turnNum].MMoney > 3;
        bool Resource2 = g.players[turnNum].Mj > 1;
        
        if(Resource1 && Resource2){
            g.players[turnNum].NumGO8++;
            g.players[turnNum].KPI += 20;
        }
    }
    if(a.actionCode == OBTAIN_ARC){
        bool Re

    }

}

void throwDice (Game g, int diceScore);

int getDiscipline (Game g, int regionID);

int getDiceValue (Game g, int regionID);

int getMostARCs (Game g);
// Alistair

typedef struct _players{
    int CampusOwned;
    int NumArcs;
    int NumGO8;
    
    path ArcID[PATH_LIMIT];
    path GO8ID[PATH_LIMIT];
    path CampusID[PATH_LIMIT];

    int Thd;
    int Bps;
    int Bqn;
    int Mj;
    int Mtv;
    int MMoney;

    int ip;
    int pub;
    int KPI;
} player;
typedef struct _game {
    player players[3]
    int MaxPoints;
    int currentTurn;
    int disciplines[NUM_REGIONS]; // Used to set up every discipline for each region
    int dice[NUM_REGIONS]; // Number on each region
} game;
//Lucca
Game newGame(int disciplinesValues[],int diceValues[]) {
    Game g = malloc(sizeof(game));
    int count = 0;
    while (count < NUM_REGIONS) {
      g.disciplines[c] = disciplinesValues[c];
      g.dice[count] = diceValues[c];
      count ++;
    }
    g.turnNum = -1;
    g.disciplines[NUM_REGIONS] = disciplinesValues[];
    g.dice[NUM_REGIONS] = diceValues[];
    count = 0;
  while (count < 3) {
    g.players[count].Thd = 0;
    g.players[count].Bps = 3;
    g.players[count].Bqn = 3;
    g.players[count].Mj = 1;
    g.players[count].Mtv = 1;
    g.players[count].Mmoney = 1;
    
    g.players[count].CampusID[PATH_LIMIT] = {0+count};
    g.players[count].ArcID[PATH_LIMIT] = {0+count};
    g.players[count].GO8ID[PATH_LIMIT] = {0+count};
    g.players[count].CampusOwned = 2;
    g.players[count].NumArcs = 0;
    g.players[count].NumGo8s = 0;
    
    g.players[count].pub = 0;
    g.players[count].ip = 0;
    g.players[count].KPI = 0;
  }
  return g;
}

void disposeGame (Game g){
    free(g);
}

void makeAction (Game g, action a){
    if(a.actionCode == PASS){
        turnNum++;
        if(turnNum > 3){
            turnNum = 1
        }
    }
    if(a.actionCode == BUILD_CAMPUS){
        bool Resource1 = g.players[turnNum].Bps > 1;
        bool Resource2 = g.players[turnNum].Bqn > 1;
        bool Resource3 = g.players[turnNum].Mj > 1;
        bool Resource4 = g.players[turnNum].Mtv > 1;
        
        if(Resource1 && Resource2 && Resource3 && Resource4){
            g.players[turnNum].CampusOwned++;
            g.players[turnNum].KPI += 10;
        }
    }
    if(a.actionCode == BUILD_GO8){
        bool Resource1 = g.players[turnNum].MMoney > 3;
        bool Resource2 = g.players[turnNum].Mj > 1;
        
        if(Resource1 && Resource2){
            g.players[turnNum].NumGO8++;
            g.players[turnNum].KPI += 20;
        }
    }
    if(a.actionCode == OBTAIN_ARC){
        bool Re

    }

}

void throwDice (Game g, int diceScore);

int getDiscipline (Game g, int regionID);

int getDiceValue (Game g, int regionID);

int getMostARCs (Game g);
// Alistair


int getMostPublications (Game g) {
    int player;
    int max = 0;
    int i;
    while (i < NUM_PLAYERS) {
        if (g.players[i].pub > max) {
            player = i;
            max = g.players[i].pub;
        }
        i++;
    }
    if (max == 0) {
        return NO_ONE;
    } else {
        return player;
    }
}

int getTurnNumber(Game g) {
  return g.currentTurn;
}

int getWhoseTurn(Game g) {
    int id;
    if (g.currentTurn == -1) {
        id = NO_ONE;
    } else if (g.currentTurn % 3 == 0) {
        id = UNI_A;
    } else if (g.currentTurn + 1 % 3 == 0) {
        id = UNI_B;
    } else {
        id = UNI_C;
    }
    return id;
}

int getCampus(Game g, path pathToVertex);

int getARC(Game g, path pathToEdge);

int isLegalAction (Game g, action a);

int getKPIpoints (Game g, int player) {
    return g.players[player].KPI;
}

//Ching

int getARCs(Game g, int player) {
  return g.players[player-1].numArcs;
}

int getGO8s(Game g, int player) {
  return g.players[player-1].numGo8s;
}

int getCampuses(Game g, int player) { 
  return g.players[player-1].numGo8s;
}

int getIPs(Game g, int player) {
  return g.players[player-1].ip;
}

int getPublications (Game g, int player) {
    return g.players[player-1].pub;
}

int getStudents(Game g, int player, int discipline) {
  int numStudents;
  if (discipline == STUDENT_THD) {
    numStudents = g.players[player-1].thd;
  } else if (discipline == STUDENT_BPS) {
    numStudents = g.players[player-1].bps;
  } else if (discipline == STUDENT_BQN) {
    numStudents = g.players[player-1].bqn;
  } else if (discipline == STUDENT_MJ) {
    numStudents = g.players[player-1].mj;
  } else if (discipline == STUDENT_MTV) {
    numStudents = g.players[player-1].mtv;
  } else { // else if (discipline == STUDENT_MMONEY) 
    numStudents = g.players[player-1].mmoney;
  }
  return numStudents;
}

int getExchangeRate (Game g, int player, 
    int disciplineFrom, int disciplineTo) {
    if 

}


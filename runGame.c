//pseudo code 
Game g = newGame (disciplines, dice); 
while (gameNotOver) {      
    diceValue = rollDice();    //simulate throw of two dice - we will discuss how to do this in tutorial
                               // or you may wish to google it and find out how you could do it! 
    dicevalue += rollDice();    //roll second dice 
    
    throwDice(g,diceValue);      
    
    action move; //human or mechanicalTurk(AI) decide what they want to do     

    //loop until player action is PASS or player wins     
    while (turn is not over and game not over) { 
        move = decideAction(g); 
        assert that action is legal 
        if (move.actionCode == START_SPINOFF) { 
             //decide if outcome is patent or publication                     
        }         
        makeAction(g, move);             
     } 
} 
//print statistics 
// free memory
 
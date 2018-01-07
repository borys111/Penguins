int change_turn(int turn)  // initial value turn=0    
	{			//turn will store current number of turns and will return incremented value after each turn.
 turn=(turn+1);
 return turn;
	}

int player_turn(int number, int i) //initial value i=0 , naumber is a number of palyers
{				// function will return which player's turn
	if(i<number)		// variable i will store the info about which player s turn
	{				
  	i=(i+1);
	}
   else i=1;
   return i;

}

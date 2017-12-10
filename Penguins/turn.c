#include <stdio.h>
#include <stdlib.h>

int change_turn(int turn)  //turn in the main function should have initial value = 0
    {
 turn=(turn+1);
 return turn;
    }
    
int player_turn(int number, int i)  //in main i=0
{

    if(i<number)
    {
      i=(i+1);
    }
   else i=1;

   return i;
}

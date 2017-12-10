#include <stdio.h>
#include <stdlib.h>



int game_end(int game_type, int fishes_on_board,int turn_number, int possible_move_one, int possible_move_two, int numb_of_penguins_team, int teams)  //function returns 1 = end of the game, 0=can continue
{

    if(turn_number > (numb_of_penguins_team)*teams)
    {


    if(game_type == 1)  // 20 turns mode
    {
        if(fishes_on_board>0 && turn_number<=20 && possible_move_one!=0 && possible_move_two !=0)

            return 0;
    }
    else if(game_type == 2)  //40 turns mode
    {
        if(fishes_on_board>0 && turn_number<=40 && possible_move_one!=0 && possible_move_two !=0)

            return 0;
    }
    else if(game_type == 3)   // if fishes mode
    {
        if(fishes_on_board>0 && turn_number>=0 && possible_move_one!=0 && possible_move_two !=0)
            return 0;
    }

    else return 1;
    }



//   else return 1;




// while placement do not check possible move

    if(turn_number <= (numb_of_penguins_team)*teams)
    {
     if(game_type == 1)  // 20 turns mode
    {
        if(fishes_on_board>0 && turn_number<=20)

            return 0;
    }
    else if(game_type == 2)  //40 turns mode
    {
        if(fishes_on_board>0 && turn_number<=40)
            return 0;
    }
    else if(game_type == 3)   // if fishes mode
    {
        if(fishes_on_board>0 && turn_number>=0)
            return 0;

    }
    else return 1;
    }


     else return 1;


}

#include "tic_tac_toe.h"

int main() 
{
  TicTacToe tic_tac_toe;
  std::string player;
  char option;
  do
  {
    do
    {
       std::cout << "Enter X or O: ";
       std::cin >> player;

       if(player != "X" && player != "O")
          std::cout << "Invalid input. Try again.";
      
    }while(player != "X" && player != "O");

  tic_tac_toe.start_game(player);

    do
    { 
     int position;
     std::cout<< "Enter position from 1 to 9:\n";
     std::cin>>position;
     tic_tac_toe.mark_board(position);
     tic_tac_toe.display_board();

   }while(tic_tac_toe.game_over() == false);

  std::cout << "Game over\n";
  std::cout << "The winner is: " << tic_tac_toe.get_winner() << "\n";

  std::cout << "Would you like to play another game? Press y to play, or 'n' to exit.";
  std::cin >> option;

  }while(option == 'y');
	return 0;
}
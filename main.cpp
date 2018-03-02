#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int NumGames;
int GamesWon;

int main()
{
  SecretDoor game;

  cout<<"How many times do you want to play?"<<endl;
  cin>>NumGames;

  for(int n=0; n <= NumGames; n++ )
  {
  game.newGame();
  game.guessDoorC();
  game.guessDoorC();
    if(game.isWinner() == true)
    {
    GamesWon++;
    }
  }
  cout<<"you won "<< GamesWon <<" games"<<endl;
  return 0;
}

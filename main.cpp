#include <iostream>
#include <string>

using namespace std;

void getCommand();

int main(){
    std::cout << "Welcome to Bugsweeper. Please enter desired number of bugs. (10-20)" << std::endl;
    
    int totalMines;
    //std::cin >> totalMines;

    Game game = new Game(totalMines); //Create game.



    while (game.openCells == 0){
        getCommand(game);
        if (command = open){
            game.PlaceMines();
            break;
        }
    }

    while (!Game.IsOver){
        getCommand(game);
    }

    

    // while get commands

    // end
}

void getCommand(Game* game){
    int x, y, command;
    cout >> "Input cell's row and column and 0 or 1(0 is leftclick, 1 is rightclick)."
    cin << x << y << command;
    game.command(x, y, command);
}
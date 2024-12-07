#include <iostream>

int main(){
    std::cout << "Welcome to Bugsweeper. Please enter desired number of bugs. (10-20)" << std::endl;
    
    int totalMines;
    //std::cin >> totalMines;

    Game game = new Game(totalMines);

    while (game.openCells == 0){
        getCommand()
        if (command = open){
            PlaceMines()
            break;
        }
    }

    while (!Game.IsOver){
        getCommand()
    }

    

    // while get commands

    // end
}

void getCommand(){
    
}
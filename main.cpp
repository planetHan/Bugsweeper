#include <iostream>
#include <stdio.h>


void getCommand(int* x, int* y, int* command){
    printf("type x y command");
    scanf("%d %d %d", &x, &y, &c);
}

int main(){
    std::cout << "Welcome to Bugsweeper. Please enter desired number of bugs. (10-20)" << std::endl;
    
    int totalMines;
    //std::cin >> totalMines;

    Game game = new Game(totalMines); //Create game.

    int x, y, c;
    while (!Game.IsOver){
        getCommand();
        game.Command(x, y, c);
    }
}
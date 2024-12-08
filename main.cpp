#include <iostream>
#include <stdio.h>
#include <game.hpp>
#include <display.hpp>

void getCommand(int* x, int* y, int* command){
    printf("type x y command");
    scanf("%d %d %d", &x, &y, &c);
}

int main(){
    cout << "Welcome to Bugsweeper. Please enter desired number of bugs. (10-20)" << endl;
    
    int totalMines;
    //cin >> totalMines;

    Game game = new Game(totalMines); //Create game.

    int x, y, command;
    while (!game.IsOver){
        getCommand();
        game.Command(x, y, command);
    }
}
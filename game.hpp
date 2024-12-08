//public class Game
#include <iostream>
#include <vector>

using namespace std;

public class Game{

    Display display = new Display();

    public bool isOver;

    const int WIDTH = 10;
    const int HEIGHT = 8;

    Cell Board[HEIGHT][WIDTH]; //Board of Cells
    int totalMines = 10;
    int openCells = 0;
    int totalFlags = 0;


    Game(int);

    void CreateBoard();

    void PlaceMines(Cell);

    void Command(int, int, int);

    void Gameover();

}

public class Cell{

    int x;
    int y;
    
    Cell(int, int);
    public bool isMine {get; private set;}
    public bool isFlagged {get; private set;}
    public bool isOpen {get; private set;}

    public bool Open(Cell, Game);
    public void Flag(Game);
    private int LookAround();
}
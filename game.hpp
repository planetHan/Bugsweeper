//public class Game
#include <iostream>
#include <vector>

using namespace std;

public class Game{

    Display display;

        Display display = new Display();

    display.DrawBoard(Game.board);

    public bool isOver;

    const int WIDTH = 10;
    const int HEIGHT = 8;

    Cell Board[HEIGHT][WIDTH]; //Board of Cells
    int totalMines = 10;
    int openCells = 0;


    init(int);

    void CreateBoard();

    void PlaceMines();

    void Command(int, int, int);

    void Gameover();

    private void Open(int x, int y);
}

public class Cell{

    int x;
    int y;

    public bool isMine {get; private set;}
    public bool isFlagged {get; private set;}
    public bool isOpen {get; private set;}

    public bool Open();
    public void Flag();
}
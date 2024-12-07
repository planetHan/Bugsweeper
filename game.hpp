//public class Game
#include <iostream>
#include <vector>

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





    void Command(int x, int y, int command){

        //if x,y is not valid
        //todo

        Cell targetCell = Board[y][x]
        switch command{
            case 0:
                if (targetCell.isOpen()){
                    return;
                }
                targetCell.Open();
                
                break;
            case 1:
                targetCell.Flag();
                break;
            default:
        }
        display.DrawCell(x, y);
    }


    private void Open(int x, int y)
}

public class Cell{

    int x;
    int y;

    public bool isMine {get; private set;}
    public bool isFlagged {get; private set;}
    public bool isOpen {get; private set;}

    public bool Open(){
        if (isMine){
            Game.Gameover();
            return;
        }
    }
    public void Flag(){
        isFlagged = !isFlagged
    }
}

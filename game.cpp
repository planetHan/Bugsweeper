#include <game.hpp>

public class Game{

    Display display = new Display();
    public bool isOver;
    const int WIDTH = 10;
    const int HEIGHT = 8;
    Cell Board[HEIGHT][WIDTH]; //Board of Cells
    int totalMines = 10;
    int openCells = 0;


    Game(int totalMines){
        this.totalMines = totalMines;
    }

    void CreateBoard(){
        display.DrawBoard(Game.board);
    }

    void PlaceMines(Cell firstCell){
        int placedMines = 0;
        int totalCells = WIDTH * HEIGHT;
        while placedMines < totalMines{
            if (rand() % totalCells){
                placedMines++;
            }
        }
    }
}

    void Command(int x, int y, int command){

        //if x,y is not valid
        //todo

        Cell targetCell = Board[y][x]
        switch command{
            case 0: // open
                if (game.openCells == 0){
                    PlaceMines(targetCell);
                }
                if (targetCell.isOpen()){
                    return;
                }
                targetCell.Open();
                break;
            case 1: // flag
                targetCell.Flag()
                break;
            default:
        }
        display.DrawCell(x, y);
    }
    display.DrawCell(x, y);
}

void Game::init(int _totalMines):totalMines(_totalMines);

void Game::PlaceMines(){

    int placedMines = 0;
    int totalCells = WIDTH * HEIGHT;

    while (placedMines < totalMines){ 
        int coordinate = rand() % totalCells; //랜덤 좌표 설정
        int x = coordinate % WIDTH;
        int y = coordinate % WIDTH;
        if (!Board[y][x].isMine){ //좌표에 지뢰가 없을 경우
            Board[y][x].isMine = true; //지뢰를 설치.
            placedMines++;
        }
    }
}


public class Cell{

    int x;
    int y;

    int number;

    public bool isMine {get; private set;}
    public bool isFlagged {get; private set;}
    public bool isOpen {get; private set;}

    public void Open(){
        if (isMine){
            Game.Gameover();
            return;
        }
        if (LookAround() == 0){
            //open others
        }
    }

    public void Flag(){
        isFlagged = !isFlagged
    }

    private int LookAround(){
        //return number of adjacent mines
        return 0;
    }

}

public void Cell::Flag(){
    isFlagged = !isFlagged
}
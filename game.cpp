#include <game.hpp>

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


    Game(int totalMines){
        this.totalMines = totalMines;
    }



    void CreateBoard(){
        for (int i = 0; i < HEIGHT; i++){
            for (int j = 0; j < WIDTH; j++){
                Board[i][j] = new Cell;
            }
        }
    }




    void Command(int x, int y, int command){

        //if x,y is not valid
        //todo

        Cell targetCell = Board[y][x]
        switch command{
            case 0:
                if (targetCell.isOpen()){
                    return;
                }
                targetCell.Open(Board);
                
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

    public bool isMine {get; private set;}
    public bool isFlagged {get; private set;}
    public bool isOpen {get; private set;}

    public bool Open(Cell *Board){
        if (isMine){
            Game.Gameover();
            return;
        }
        int nearMine = 0; //주변 지뢰 갯수 검사
        for (int i = y - 1; i <= y + 1; i++){
            for (int j = x - 1; j <= x + 1; j++){
                if (Board[i][j].isMine){
                    nearMine++;
                }
            }
        }
        Board[y][x].isOpen = !Board[y][x].isOpen;
        if (nearMine == 0){ //주변 지뢰 갯수 0일 시 주변 칸 열기
            for (int i = y - 1; i <= y + 1; i++){
                for (int j = x - 1; j <= x + 1; j++){
                    if (!Board[i][j].isOpen){
                        Board[i][j].open();
                    }
                }
            }
        }
    }

    public void Flag(){
        isFlagged = !isFlagged
    }
}

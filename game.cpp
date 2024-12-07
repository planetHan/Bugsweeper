#include <game.hpp>

void Game::CreateBoard(){
    for (int i = 0; i < HEIGHT; i++){
        for (int j = 0; j < WIDTH; j++){
            Board[i][j] = new Cell;
        }
    }
}

void Game::Command(int x, int y, int command){

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

public bool Cell::Open(Cell *Board){
    if (isMine){
        Game.Gameover();
        return;
    }
    if (isFlagged){
        isFlagged = !isFlagged
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

public void Cell::Flag(){
    isFlagged = !isFlagged
}
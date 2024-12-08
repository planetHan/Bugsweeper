#include <game.hpp>

Game::Game(int totalMines){
    this.totalMines = totalMines;
}

void Game::CreateBoard(){
    for (int i = 0; i < HEIGHT; i++){
        for (int j = 0; j < WIDTH; j++){
            Board[i][j] = new Cell(j, i);
        }
    }
    display.DrawBoard(Game.board);
}


void Game::Command(int x, int y, int command){

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
            targetCell.Open(Board, this);
            break;
        case 1: // flag
            targetCell.Flag()
            break;
        default:
    }
    display.DrawCell(x, y);
}

void Game::init(int _totalMines):totalMines(_totalMines);

void Game::PlaceMines(Cell targetCell){

    int placedMines = 0;
    int totalCells = WIDTH * HEIGHT;

    while (placedMines < totalMines){ 
        int coordinate = rand() % totalCells; //랜덤 좌표 설정
        int x = coordinate % WIDTH;
        int y = coordinate % WIDTH;
        if (!Board[y][x].isMine && Board[y][x] != targetCell){ //좌표에 지뢰가 없을 경우
            Board[y][x].isMine = true; //지뢰를 설치.
            placedMines++;
        }
    }
}

void Game::Gameover(){
    display.DrawBoard(Board);
    isOver = true;
    cout << "You lose" << endl;
}

Cell::Cell(int _x, int _y):x(_x), y(_y){};

public bool Cell::Open(Cell *Board, Game *game){
    if (isMine){
        game.Gameover();
        return;
    }
    isOpen = true;
    game.openCells++;
    if (LookAround() == 0){ //주변 지뢰 갯수 0일 시 주변 칸 열기
        for (int i = y - 1; i <= y + 1; i++){
            for (int j = x - 1; j <= x + 1; j++){
                if (!Board[i][j].isOpen){
                    Board[i][j].open();
                }
            }
        }
    }
}

private int Cell::LookAround(){
    int nearMine = 0;
    for (int i = y - 1; i <= y + 1; i++){
        for (int j = x - 1; j <= x + 1; j++){
            if (Board[i][j].isMine){
                nearMine++;
            }
        }
    }
    return nearMine;
}

public void Cell::Flag(Game *game){
    if (isFlagged){
        game.totalFlags--;
    }
    else{
        game.totalFlags++;
    }
    isFlagged = !isFlagged
}
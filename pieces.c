#include "pieces.h"

void init_piece(Piece *p){
	// ToDo in LAB 1
    p->name = '-';
    for (int i = 0; i< PIECE_SIZE; i ++){
        for (int j = 0; j<PIECE_SIZE; ++j){
            p->board[i][j] = '.';
        }
    }
    p->cols = 0;
    p->rows = 0;
}

void print_piece(Piece p){
    printf("Name: %c; Size: %dx%d\n", p.name, p.rows, p.cols);
    for(int i=0; i<PIECE_SIZE; ++i){
        for(int j=0; j<PIECE_SIZE; ++j){
            printf("%c", p.board[i][j]);
        }
        printf("\n");
    }
}

void rotate_clockwise(Piece *p){
    // ToDo in LAB 1
    Piece temp;
    //pista: piece eamb esterisc, faig peça temporal, faig tot...
    // p->name
    *p = temp; //peça temporal
}

void rotate_counter_clockwise(Piece *p){
    // ToDo in LAB 1
    //cridar 3 cops a rotate_clockwise
}

Piece make_O(){
    //inicialitzem la peça
    Piece piece;
    init_piece(&piece);
    piece.name = 'O';
    piece.rows = 2;
    piece.cols = 2;
    piece.board[0][0] = '#';
    piece.board[0][1] = '#';
    piece.board[1][0] = '#';
    piece.board[1][1] = '#';
    
    return piece;
    // ToDo in LAB 1

}

Piece make_I(){ // REVISSSAAARR
    //inicialitzem la peça
    Piece piece;
    init_piece(&piece);
    piece.name = 'I';
    piece.rows = 4;
    piece.cols = 1;
    piece.board[0][0] = '#';
    piece.board[1][0] = '#';
    piece.board[2][0] = '#';
    piece.board[3][0] = '#';
    
    // ToDo in LAB 1
}


Piece make_S(){
	// ToDo in LAB 1
}


Piece make_Z(){
    //inicialitzem la peça
    Piece piece;
    init_piece(&piece);
    piece.name = 'Z';
    piece.rows = 2;
    piece.cols = 3;
    piece.board[0][0] = '#';
    piece.board[0][1] = '#';
    piece.board[1][1] = '#';
    piece.board[1][2] = '#';
    
    // ToDo in LAB 1
}

Piece make_L(){
    // ToDo in LAB 1
}

Piece make_J(){
    // ToDo in LAB 1
}

Piece make_T(){
    // ToDo in LAB 1
}


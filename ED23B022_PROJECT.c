#include <stdio.h>
//its a basic chess program 
// yyou should be precise with your choices and moves(invalid moves cannot be checked)
// Constants representing each piece
#define EMPTY '-'
#define WPAWN  'P'
#define WKNIGHT 'N'
#define WBISHOP 'B'
#define WROOK 'R'
#define WQUEEN 'Q'
#define WKING 'K'
#define BPAWN  'p'
#define BKNIGHT 'n'
#define BBISHOP 'b'
#define BROOK 'r'
#define BQUEEN 'q'
#define BKING 'k'
// Constants representing each player
#define PLAYER_1 0
#define PLAYER_2 1
#define BOARD_SIZE 8 // Size of the chess board
// Function to initialize the chess board
void initialize_board(int board[BOARD_SIZE][BOARD_SIZE]) {
    // Initialize all squares to empty
    for (int row = 0; row < BOARD_SIZE; row++) {
        for (int col = 0; col < BOARD_SIZE; col++) {
            board[row][col] = EMPTY;
        }
    }
    // Initialize player 1's pieces
    board[0][0] = WROOK;
    board[0][1] = WKNIGHT;
    board[0][2] = WBISHOP;
    board[0][3] = WQUEEN;
    board[0][4] = WKING;
    board[0][5] = WBISHOP;
    board[0][6] = WKNIGHT;
    board[0][7] = WROOK;
    for (int col = 0; col < BOARD_SIZE; col++) {
        board[1][col] = WPAWN;
    }
    // Initialize player 2's pieces
    board[7][0] = BROOK;
    board[7][1] = BKNIGHT;
    board[7][2] = BBISHOP;
    board[7][3] = BQUEEN;
    board[7][4] = BKING;
    board[7][5] = BBISHOP;
    board[7][6] = BKNIGHT;
    board[7][7] = BROOK;
    for (int col = 0; col < BOARD_SIZE; col++) {
        board[6][col] = BPAWN;
    }
}
void print_board(int board[BOARD_SIZE][BOARD_SIZE]);
void askmove(int board[BOARD_SIZE][BOARD_SIZE]);
void main() {
    printf("          GAME OF CHESS        \n");
    printf("\n");
    printf("1.White pieces are in UPPERCASSE letters: \n");
    printf("PAWN   'P'\nKNIGHT 'N' \nBISHOP 'B' \nROOK   'R'\nQUEEN  'Q'\nKING   'K'\n");
    printf("\n");
    printf("2.Black pieces are in LOWERCASE letters: \n");
    printf("pawn   'p'\nknight 'n'\nbishop 'b'\nrook   'r'\nqueen  'q'\nking   'k'\n");
    printf("\n");
    printf("3.Follow basic rules of chess while playing the game: \n");
    printf("� King moves from its square to a neighbouring square.\n� Rook can move in its line or row.\n� Bishop moves diagonally.\n� Queen may move like a Rook or a Bishop.\n� Knight jumps in making the shortest move that is not a straight one.\n� Pawn moves one square straight ahead.\n");
    printf("\n");
    printf("4.Player needs to capture opponent's King to win the game (not just checkmate).\n");
    printf("\n");
    printf("5.To move any piece, you must first indicate which one it is by indicating its present row and column on the board and then the row and column of the position to which you wish it to be moved.");
    printf("\n");
    int board[BOARD_SIZE][BOARD_SIZE];
    int c;
    printf("\n");
    printf("TO START THE GAME ENTER O :\n");
    scanf_s("%d", &c);
    if (c == 0) {
        initialize_board(board);
        print_board(board);
        askmove(board);
    }


}
// Function to print the chess board
void print_board(int board[BOARD_SIZE][BOARD_SIZE]) {
    printf("\n");
    printf("   0  1  2  3  4  5  6  7");
    printf("\n");
    for (int row = 0; row < BOARD_SIZE; row++) {
        printf("%d", row);
        for (int col = 0; col < BOARD_SIZE; col++) {
            printf("  %c", board[row][col]);
        }
        printf("\n");
    }
    printf("   0  1  2  3  4  5  6  7");
    printf("\n");
}
void askmove(int board[BOARD_SIZE][BOARD_SIZE]) {
    int from1, from2, to1, to2;
    while (1) {
        printf("\n");
        printf(" Player 1 (WHITE's) move (ex: pawn from 1,4 to 3,4 -> 1 4 3 4): ");
        scanf_s("%d", &from1);
        scanf_s("%d", &from2);
        scanf_s("%d", &to1);
        scanf_s("%d", &to2);
        if (board[from1][from2] == WPAWN) {
            board[from1][from2] = EMPTY;
            board[to1][to2] = WPAWN;
        }
        else if (board[from1][from2] == WKNIGHT) {
            board[from1][from2] = EMPTY;
            board[to1][to2] = WKNIGHT;
        }
        else if (board[from1][from2] == WBISHOP) {
            board[from1][from2] = EMPTY;
            board[to1][to2] = WBISHOP;
        }
        else if (board[from1][from2] == WROOK) {
            board[from1][from2] = EMPTY;
            board[to1][to2] = WROOK;
        }
        else if (board[from1][from2] == WQUEEN) {
            board[from1][from2] = EMPTY;
            board[to1][to2] = WQUEEN;
        }
        else if (board[from1][from2] == WKING) {
            board[from1][from2] = EMPTY;
            board[to1][to2] = WKING;
        }
        print_board(board);
        printf("\n");
        int a = 0, b = 0;
        for (int row = 0; row < BOARD_SIZE; row++) {
            for (int col = 0; col < BOARD_SIZE; col++) {
                if (board[row][col] == BKING) {
                    a = 1;
                }
                if (board[row][col] == WKING) {
                    b = 1;
                }
            }
        }
        if (a == 0) {
            printf("Game is Over.WHITE wins");
            break;
        }
        if (b == 0) {
            printf("Game is Over.BLACK wins");
            break;
        }
        b = 0, a = 0;
        printf("Player 2 (BLACK's) move (ex: pawn from 6,4 to 4,4 -> 6 4 4 4): ");
        scanf_s("%d", &from1);
        scanf_s("%d", &from2);
        scanf_s("%d", &to1);
        scanf_s("%d", &to2);
        if (board[from1][from2] == BPAWN) {
            board[from1][from2] = EMPTY;
            board[to1][to2] = BPAWN;
        }
        else if (board[from1][from2] == BKNIGHT) {
            board[from1][from2] = EMPTY;
            board[to1][to2] = BKNIGHT;
        }
        else if (board[from1][from2] == BBISHOP) {
            board[from1][from2] = EMPTY;
            board[to1][to2] = BBISHOP;
        }
        else if (board[from1][from2] == BROOK) {
            board[from1][from2] = EMPTY;
            board[to1][to2] = BROOK;
        }
        else if (board[from1][from2] == BQUEEN) {
            board[from1][from2] = EMPTY;
            board[to1][to2] = BQUEEN;
        }
        else if (board[from1][from2] == BKING) {
            board[from1][from2] = EMPTY;
            board[to1][to2] = BKING;
        }
        print_board(board);
        printf("\n");
        for (int row = 0; row < BOARD_SIZE; row++) {
            for (int col = 0; col < BOARD_SIZE; col++) {
                if (board[row][col] == BKING) {
                    a = 1;
                }
                if (board[row][col] == WKING) {
                    b = 1;
                }
            }
        }
        if (a == 0) {
            printf("Game is Over.WHITE wins\n");
            break;
        }
        if (b == 0) {
            printf("Game is Over.BLACK wins\n");
            break;
        }
        b = 0, a = 0;
    }
}

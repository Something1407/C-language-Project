#include <stdio.h>

// Structure to represent a player
struct Player {
    char symbol;
};

// Structure to represent the Tic Tac Toe board
struct TicTacToeBoard {
    char cells[3][3];
};

// Function to initialize the Tic Tac Toe board with empty spaces
void initializeBoard(struct TicTacToeBoard* board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board->cells[i][j] = ' ';
        }
    }
}

// Function to display the Tic Tac Toe board
void displayBoard(const struct TicTacToeBoard* board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board->cells[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("___|___|___\n");
    }
}

// Function to check if the game is over (win or draw)
int checkGameOver(const struct TicTacToeBoard* board, char playerSymbol) {
    // Check rows and columns for a win
    for (int i = 0; i < 3; i++) {
        if (board->cells[i][0] == playerSymbol && board->cells[i][1] == playerSymbol && board->cells[i][2] == playerSymbol)
            return 1;
        if (board->cells[0][i] == playerSymbol && board->cells[1][i] == playerSymbol && board->cells[2][i] == playerSymbol)
            return 1;
    }

    // Check diagonals for a win
    if (board->cells[0][0] == playerSymbol && board->cells[1][1] == playerSymbol && board->cells[2][2] == playerSymbol)
        return 1;
    if (board->cells[0][2] == playerSymbol && board->cells[1][1] == playerSymbol && board->cells[2][0] == playerSymbol)
        return 1;

    // Check for a draw
    int draw = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board->cells[i][j] == ' ')
                draw = 0;
        }
    }
    if (draw)
        return 2;

    return 0;
}

int main() {
    struct TicTacToeBoard board;
    struct Player player1, player2;
    int row, col;
    int currentPlayer = 1;
    int gameOver = 0;

    // Initialize the board with empty spaces
    initializeBoard(&board);

    // Initialize players
    player1.symbol = 'X';
    player2.symbol = 'O';

    printf("Tic Tac Toe Game\n");

    while (!gameOver) {
        // Display the current board
        displayBoard(&board);

        // Get the current player's move
        printf("Player %c, enter your move (row [0-2] and column [0-2]): ", (currentPlayer == 1) ? player1.symbol : player2.symbol);
        scanf("%d %d", &row, &col);

        // Check if the chosen cell is empty
        if (board.cells[row][col] == ' ') {
            // Make the move
            board.cells[row][col] = (currentPlayer == 1) ? player1.symbol : player2.symbol;

            // Check if the game is over
            gameOver = checkGameOver(&board, (currentPlayer == 1) ? player1.symbol : player2.symbol);

            // Switch to the other player
            currentPlayer = (currentPlayer == 1) ? 2 : 1;
        } else {
            printf("That cell is already taken. Try again.\n");
        }
    }

    // Display the final board and game result
    displayBoard(&board);
    if (gameOver == 1) {
        printf("Player %c wins!\n", (currentPlayer == 1) ? player1.symbol : player2.symbol);
    } else {
        printf("It's a draw!\n");
    }

    return 0;
}

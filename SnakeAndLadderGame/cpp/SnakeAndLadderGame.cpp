#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <cstdlib>
#include <ctime>
#include <queue>

using namespace std;

// ============================================================
// ENUMS
// ============================================================

enum class GameStatus {
    // TODO: Define statuses (IN_PROGRESS, FINISHED)
};

// ============================================================
// PLAYER
// ============================================================

class Player {
    string name;
    int position;

public:
    // TODO: Constructor
    // TODO: Getters and setters (getName, getPosition, setPosition)
};

// ============================================================
// DICE
// ============================================================

class Dice {
    int numFaces;

public:
    // TODO: Constructor (default 6 faces)
    // TODO: int roll(); // return random value between 1 and numFaces
};

// ============================================================
// BOARD ENTITIES
// ============================================================

class BoardEntity {
protected:
    int start;
    int end;

public:
    // TODO: Constructor, getters
    // TODO: virtual int getDestination() = 0;
    virtual ~BoardEntity() = default;
};

class Snake : public BoardEntity {
public:
    // TODO: Constructor (head, tail) where head > tail
    // TODO: int getDestination() — returns tail position
};

class Ladder : public BoardEntity {
public:
    // TODO: Constructor (bottom, top) where top > bottom
    // TODO: int getDestination() — returns top position
};

// ============================================================
// CELL
// ============================================================

class Cell {
    int position;
    BoardEntity* entity; // nullptr if no snake or ladder

public:
    // TODO: Constructor
    // TODO: void setEntity(BoardEntity* entity);
    // TODO: BoardEntity* getEntity();
    // TODO: bool hasEntity();
};

// ============================================================
// BOARD
// ============================================================

class Board {
    int size;
    vector<unique_ptr<Cell>> cells;
    vector<unique_ptr<Snake>> snakes;
    vector<unique_ptr<Ladder>> ladders;

public:
    // TODO: Constructor — create cells
    // TODO: void addSnake(int head, int tail);
    // TODO: void addLadder(int bottom, int top);
    // TODO: int getSize();
    // TODO: Cell* getCell(int position);
    // TODO: int getFinalPosition(int position); // check for snake/ladder at position
};

// ============================================================
// GAME
// ============================================================

class Game {
    unique_ptr<Board> board;
    unique_ptr<Dice> dice;
    queue<Player*> playerQueue;
    vector<unique_ptr<Player>> players;
    GameStatus status;
    Player* winner;

public:
    // TODO: Constructor — initialize board, dice
    // TODO: void addPlayer(const string& name);
    // TODO: void play(); // main game loop
    // TODO: void playTurn(Player* player); // single turn logic
    // TODO: bool isGameOver();
    // TODO: Player* getWinner();
    // TODO: void displayBoard();
};

// ============================================================
// MAIN — Test your implementation
// ============================================================

int main() {
    srand(time(0));

    // TODO: Create a game
    // TODO: Add snakes and ladders to the board
    // TODO: Add players
    // TODO: Start the game
    // TODO: Announce the winner

    cout << "=== Snake and Ladder Game ===" << endl;
    cout << "TODO: Implement and test your design here." << endl;

    return 0;
}

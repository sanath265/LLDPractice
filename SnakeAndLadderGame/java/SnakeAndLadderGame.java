import java.util.*;

// ============================================================
// ENUMS
// ============================================================

enum GameStatus {
    // TODO: Define statuses (IN_PROGRESS, FINISHED)
}

// ============================================================
// PLAYER
// ============================================================

class Player {
    private String name;
    private int position;

    // TODO: Constructor
    // TODO: Getters and setters (getName, getPosition, setPosition)
}

// ============================================================
// DICE
// ============================================================

class Dice {
    private int numFaces;
    private Random random;

    // TODO: Constructor (default 6 faces)
    // TODO: int roll(); // return random value between 1 and numFaces
}

// ============================================================
// BOARD ENTITIES
// ============================================================

abstract class BoardEntity {
    protected int start;
    protected int end;

    // TODO: Constructor, getters
    // TODO: abstract int getDestination();
}

class Snake extends BoardEntity {
    // TODO: Constructor (head, tail) where head > tail
    // TODO: int getDestination() — returns tail position
}

class Ladder extends BoardEntity {
    // TODO: Constructor (bottom, top) where top > bottom
    // TODO: int getDestination() — returns top position
}

// ============================================================
// CELL
// ============================================================

class Cell {
    private int position;
    private BoardEntity entity; // null if no snake or ladder

    // TODO: Constructor
    // TODO: void setEntity(BoardEntity entity);
    // TODO: BoardEntity getEntity();
    // TODO: boolean hasEntity();
}

// ============================================================
// BOARD
// ============================================================

class Board {
    private int size;
    private List<Cell> cells;
    private List<Snake> snakes;
    private List<Ladder> ladders;

    // TODO: Constructor — create cells
    // TODO: void addSnake(int head, int tail);
    // TODO: void addLadder(int bottom, int top);
    // TODO: int getSize();
    // TODO: Cell getCell(int position);
    // TODO: int getFinalPosition(int position); // check for snake/ladder at position
}

// ============================================================
// GAME
// ============================================================

class Game {
    private Board board;
    private Dice dice;
    private Queue<Player> playerQueue;
    private List<Player> players;
    private GameStatus status;
    private Player winner;

    // TODO: Constructor — initialize board, dice
    // TODO: void addPlayer(String name);
    // TODO: void play(); // main game loop
    // TODO: void playTurn(Player player); // single turn logic
    // TODO: boolean isGameOver();
    // TODO: Player getWinner();
    // TODO: void displayBoard();
}

// ============================================================
// MAIN — Test your implementation
// ============================================================

public class SnakeAndLadderGame {
    public static void main(String[] args) {
        // TODO: Create a game
        // TODO: Add snakes and ladders to the board
        // TODO: Add players
        // TODO: Start the game
        // TODO: Announce the winner

        System.out.println("=== Snake and Ladder Game ===");
        System.out.println("TODO: Implement and test your design here.");
    }
}

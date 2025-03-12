#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <conio.h> // For Windows, use <ncurses.h> for Linux

using namespace std;

const int WIDTH = 30;
const int HEIGHT = 15;
const char BIRD = 'O';
const char PIPE = '|';
const char SPACE = ' ';
const int PIPE_GAP = 4;

struct Pipe
{
    int x;
    int gapY;
};

vector<Pipe> pipes;
int birdY = HEIGHT / 2;
bool gameOver = false;
int score = 0;

// Function to clear the screen
void clearScreen()
{
    system("cls"); // For Windows; use "clear" for Linux/Mac
}

// Function to draw the game
void draw()
{
    clearScreen();

    // Create the game grid
    vector<string> grid(HEIGHT, string(WIDTH, SPACE));

    // Draw the bird
    grid[birdY][1] = BIRD;

    // Draw the pipes
    for (const auto &pipe : pipes)
    {
        for (int y = 0; y < HEIGHT; y++)
        {
            if (y < pipe.gapY || y > pipe.gapY + PIPE_GAP)
            {
                if (pipe.x >= 0 && pipe.x < WIDTH)
                {
                    grid[y][pipe.x] = PIPE;
                }
            }
        }
    }

    // Print the grid
    for (const auto &row : grid)
    {
        cout << row << endl;
    }

    // Display score
    cout << "Score: " << score << endl;
}

// Function to update the game state
void update()
{
    // Move pipes
    for (auto &pipe : pipes)
    {
        pipe.x--;
    }

    // Remove off-screen pipes
    if (!pipes.empty() && pipes[0].x < 0)
    {
        pipes.erase(pipes.begin());
        score++;
    }

    // Add new pipe
    if (pipes.empty() || pipes.back().x < WIDTH - 10)
    {
        int gapY = rand() % (HEIGHT - PIPE_GAP - 1) + 1;
        pipes.push_back({WIDTH - 1, gapY});
    }

    // Gravity
    birdY++;

    // Check collisions
    if (birdY < 0 || birdY >= HEIGHT)
    {
        gameOver = true;
    }

    for (const auto &pipe : pipes)
    {
        if (pipe.x == 1 && (birdY < pipe.gapY || birdY > pipe.gapY + PIPE_GAP))
        {
            gameOver = true;
        }
    }
}

// Main game loop
int main()
{
    srand(static_cast<unsigned>(time(0)));

    pipes.push_back({WIDTH - 1, HEIGHT / 2});

    while (!gameOver)
    {
        // Input
        if (_kbhit())
        { // Non-blocking input
            char ch = _getch();
            if (ch == ' ' || ch == 'w')
            {               // Space or 'w' to jump
                birdY -= 2; // Jump
            }
        }

        // Update and draw
        update();
        draw();

        // Frame delay
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    cout << "Game Over! Final Score: " << score << endl;

    return 0;
}

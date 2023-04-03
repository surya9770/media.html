#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

// Define the screen size
#define SCREEN_WIDTH 80
#define SCREEN_HEIGHT 25

// Define colors
#define WHITE 15
#define BLACK 0
#define RED 12

// Define the Snake struct
typedef struct Snake {
    int x, y;
    struct Snake *next;
} Snake;

// Define the Food struct
typedef struct Food {
    int x, y;
} Food;

// Initialize the console screen
void initialize_screen() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD screen_size = {SCREEN_WIDTH, SCREEN_HEIGHT};
    SetConsoleScreenBufferSize(hConsole, screen_size);
    SMALL_RECT window_size = {0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1};
    SetConsoleWindowInfo(hConsole, TRUE, &window_size);
}

// Clear the console screen
void clear_screen() {
    system("cls");
}

// Draw a character on the console screen
void draw_character(int x, int y, char c, int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {x, y};
    SetConsoleCursorPosition(hConsole, position);
    SetConsoleTextAttribute(hConsole, color);
    putchar(c);
}

// Initialize the Snake
Snake *initialize_snake() {
    Snake *head = malloc(sizeof(Snake));
    head->x = SCREEN_WIDTH / 2;
    head->y = SCREEN_HEIGHT / 2;
    head->next = NULL;
    return head;
}

// Add a new segment to the Snake
void add_segment(Snake *head) {
    Snake *new_segment = malloc(sizeof(Snake));
    new_segment->x = head->x;
    new_segment->y = head->y;
    new_segment->next = head->next;
    head->next = new_segment;
}

// Move the Snake
void move_snake(Snake *head, int dx, int dy) {
    // Move the head
    head->x += dx;
    head->y += dy;
    
    // Move the body
    Snake *current_segment = head->next;
    int prev_x = head->x - dx;
    int prev_y = head->y - dy;
    while (current_segment != NULL) {
        int temp_x = current_segment->x;
        int temp_y = current_segment->y;
        current_segment->x = prev_x;
        current_segment->y = prev_y;
        prev_x = temp_x;
        prev_y = temp_y;
        current_segment = current_segment->next;
    }
}

// Check if the Snake has collided with a wall
int hit_wall(Snake *head) {
    if (head->x <= 0 || head->x >= SCREEN_WIDTH - 1 || head->y <= 0 || head->y >= SCREEN_HEIGHT - 1) {
        return 1;
    } else {
        return 0;
    }
}

// Check if the Snake has collided with itself
int hit_self(Snake *head) {
    Snake *current_segment = head->next;
    while (current_segment != NULL) {
        if (head->x == current_segment->x && head->y == current_segment->y) {
            return 1;
        }
        current_segment = current_segment->next;
    }
    return 0;
}

// Initialize the Food
Food initialize_food() {
    Food food;
    food.x = rand() % (SCREEN_WIDTH - 2);
}




#write a program for snake game in python
import pygame 
import random

# Initialize Pygame
pygame.init()

# Define the screen size
SCREEN_WIDTH = 640
SCREEN_HEIGHT = 480

# Set up the screen
screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))

# Define colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
RED = (255, 0, 0)

# Define the Snake class
class Snake:
    def __init__(self):
        self.body = [(SCREEN_WIDTH//2, SCREEN_HEIGHT//2)]
        self.direction = random.choice(['UP', 'DOWN', 'LEFT', 'RIGHT'])
        self.score = 0
        
    def move(self):
        # Get the current head position
        x, y = self.body[0]
        
        # Move the head in the current direction
        if self.direction == 'UP':
            y -= 10
        elif self.direction == 'DOWN':
            y += 10
        elif self.direction == 'LEFT':
            x -= 10
        elif self.direction == 'RIGHT':
            x += 10
            
        # Add the new head position to the body
        self.body = [(x, y)] + self.body[:-1]
        
    def turn(self, direction):
        # Change the direction of the snake
        if self.direction == 'UP' and direction != 'DOWN':
            self.direction = direction
        elif self.direction == 'DOWN' and direction != 'UP':
            self.direction = direction
        elif self.direction == 'LEFT' and direction != 'RIGHT':
            self.direction = direction
        elif self.direction == 'RIGHT' and direction != 'LEFT':
            self.direction = direction
            
    def eat_food(self, food):
        # Check if the snake has eaten the food
        if self.body[0] == food.position:
            self.body.append(self.body[-1])
            self.score += 10
            return True
        else:
            return False
        
    def hit_wall(self):
        # Check if the snake has hit a wall
        x, y = self.body[0]
        if x < 0 or x > SCREEN_WIDTH or y < 0 or y > SCREEN_HEIGHT:
            return True
        else:
            return False
        
    def hit_self(self):
        # Check if the snake has hit itself
        if self.body[0] in self.body[1:]:
            return True
        else:
            return False
        
    def draw(self):
        # Draw the snake on the screen
        for x, y in self.body:
            pygame.draw.rect(screen, BLACK, (x, y, 10, 10))
            
        # Draw the score on the screen
        font = pygame.font.Font(None, 36)
        text = font.render(f"Score: {self.score}", True, WHITE)
        screen.blit(text, (10, 10))
        
# Define the Food class
class Food:
    def __init__(self):
        self.position = self.random_position()
        
    def random_position(self):
        # Generate a random position for the food
        x = random.randrange(0, SCREEN_WIDTH, 10)
        y = random.randrange(0, SCREEN_HEIGHT, 10)
        return (x, y)
        
    def draw(self):
        # Draw the food on the screen
        pygame.draw.rect(screen, RED, (self.position[0], self.position[1], 10, 10))
        
# Create the Snake and Food objects
snake = Snake()
food = Food()

# Set up the game

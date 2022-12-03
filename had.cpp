// had.cpp : Defines the entry point for the application.
//

#include "had.h"

int i, j, height = 10;
int width = 10, gameover, score;

void draw()
{
    // system("cls");
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (i == 0 || i == width - 1 || j == 0
                || j == height - 1) {
                printf("#");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    draw();

    return 0;
}
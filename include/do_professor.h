#ifndef DO_PROFESSOR
#define DO_PROFESSOR

#include <stdio.h>
#include <stdlib.h>
#include "constante.h"


int isSafe(int maze[N][N], int x, int y);
int solveMazeUtil(int maze[N][N], int x, int y);
void printMaze(int maze[N][N]);
void loadMaze(int maze[N][N], char *fname);

#endif DO_PROFESSOR
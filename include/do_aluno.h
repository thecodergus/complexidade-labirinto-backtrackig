#ifndef DO_ALUNO
#define DO_ALUNO

#include "constante.h"
#include "do_professor.h"

int solveMaze(int maze[N][N]);

int solveMazeAux(int **labirinto, int x, int y, int movX[4], int movY[4]);

int **craeteMaze(int maze[N][N]);

    void freeMaze(int **labirinto);

#endif DO_ALUNOs
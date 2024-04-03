#include "do_aluno.h"

int solveMaze(int maze[N][N])
{

    int movX[] = {0, 1, 0, -1}; // Movimento horizontal (direita, baixo, esquerda, cima)
    int movY[] = {1, 0, -1, 0}; // Movimento vertical

    int **pmaze = craeteMaze(maze);
    int resultado = solveMazeAux(pmaze, 0, 0, movX, movY);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            maze[i][j] = pmaze[i][j];
            printf("%d", pmaze[i][j]);
        }
        printf("\n");
    }

    printMaze(maze);

    freeMaze(pmaze);

    return resultado;
}

int solveMazeAux(int** labirinto, int x, int y, int movX[4], int movY[4])
{
    if (x < 0 || x >= N || y < 0 || y >= N || labirinto[x][y] == 1 || labirinto[x][y] == 2)
    {
        return 0; // Fora dos limites ou parede
    }
    if (x == N - 1 && y == N - 1){
        return 1; // Chegou à posição final
    }


    labirinto[x][y] = 2; // Marca a posição como visitada

    for (int i = 0; i < 4; i++)
        {
        if (solveMazeAux(labirinto, x + movX[i], y + movY[i], movX, movY)){
            return 1; // Encontrou um caminho
        }
    }

    labirinto[x][y] = 0;
    return 0;
}

int **craeteMaze(int maze[N][N])
{
    int **labirinto = malloc(N * sizeof(int *));
    if (!labirinto)
    {
        return NULL;
    }

    for (int i = 0; i < N; i++)
    {
        labirinto[i] = calloc(N, sizeof(int));

        for(int j = 0; j < N; j ++){
            labirinto[i][j] = maze[i][j];
        }
    }
    return labirinto;
}

// Função auxiliar para desalocar um labirinto alocado com allocateMaze
void freeMaze(int **labirinto)
{
    for (int i = 0; i < N; i++)
    {
        free(labirinto[i]);
    }
    free(labirinto);
}
#include <stdio.h>

#include "constante.h"
#include "do_professor.h"
#include "do_aluno.h"


int main(){
    /*
   //1 = parede
   //0 = vazio
   //2 = caminho
   */
    // int maze[N][N] = {
    //     {0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
    //     {0, 1, 0, 1, 1, 0, 1, 1, 0, 1},
    //     {0, 0, 0, 1, 0, 0, 0, 0, 0, 0},
    //     {1, 1, 0, 1, 0, 1, 1, 1, 1, 0},
    //     {0, 0, 0, 1, 0, 0, 0, 0, 1, 0},
    //     {0, 1, 0, 0, 0, 1, 1, 0, 1, 1},
    //     {0, 1, 1, 1, 1, 1, 1, 0, 1, 0},
    //     {0, 1, 0, 0, 0, 1, 0, 0, 0, 0},
    //     {0, 1, 0, 1, 0, 1, 1, 1, 1, 0},
    //     {0, 0, 0, 1, 0, 0, 0, 0, 0, 0}};
   
    int maze[N][N];

    loadMaze(maze, "/home/udesc/Documentos/complexidade-labirinto-backtrackig-main/lab.txt");

    if (solveMaze(maze))
    {
        printf("Labirinto resolvido!\n");
    }
    else
    {
        printf("Não foi possível encontrar uma solução.\n");
    }

    return 0;
}
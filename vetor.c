#include <stdio.h>

/*

Implementar uma função que, dada uma matriz
Mm×n, gere um vetor V de tamanho n, onde
cada elemento do vetor consiste na soma dos
elementos de uma coluna de M. Ou seja, o
elemento V[0] consiste na soma dos elementos
da primeira coluna de M, o elemento V[1]
consiste na soma dos elementos da segunda
coluna de M, e assim por diante.

*/

void visualizarMatriz(int l, int c, int m[l][c])
{
  int i, j;
    for(i = 0; i < l; i++)
    {
    for(j = 0; j < c; j++)
    {
    printf("%d\t", m[i][j]);
    }
    printf("\n");
    }
}

void somarMatriz(int l, int c, int m[l][c], int v[])
{
    int i, j;
    for(i = 0; i < c; i++)
    {
    int guardarValor = 0;
    for(j = 0; j < l; j++)
    {
     guardarValor += m[j][i];
    }
    v[i] = guardarValor;
    }
}

int main() {
    int v[3];
    int l = 3;
    int c = 3;
    int matriz[3][3] = 
    {
        {8,9,7},
        {1,1,1},
        {6,4,2},
    };
    
    printf("Matriz: \n");
    somarMatriz(l,c,matriz, v);
    visualizarMatriz(l,c,matriz);
    printf("Soma Das Matrizes: \n");

    for(int i = 0; i < l; i++)
    {
    printf("%d\t", v[i]);
    }
    return 0;
}
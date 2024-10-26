#include "matrice33.h"

void sommeMatrice33(int matriceA[3][3], int matriceB[3][3], int somme[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            somme[i][j] = matriceA[i][j] + matriceB[i][j];
        }
    }

}

void differenceMatrice33(int matriceA[3][3], int matriceB[3][3], int difference[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            difference[i][j] = matriceA[i][j] - matriceB[i][j];
        }
    }

}

int determinantMatrice33(int matrice[3][3]) {
    int determinant = matrice[0][0] * (matrice[1][1] * matrice[2][2] - matrice[0][0] * matrice[1][2] * matrice[2][1])
                     - matrice[0][1] * (matrice[1][0] * matrice[2][2] + matrice[0][1] * matrice[1][2] * matrice[2][0])
                     + matrice[0][2] * (matrice[1][0] * matrice[2][1] - matrice[0][2] * matrice[1][1] * matrice[2][0]);

    return determinant;
}


void produitMatrice33(int matriceA[3][3], int matriceB[3][3], int produit[3][3]) {

    produit[0][0] = matriceA[0][0] * matriceB[0][0] + matriceA[0][1] * matriceB[1][0] + matriceA[0][2] * matriceB[2][0];
    produit[0][1] = matriceA[0][0] * matriceB[0][1] + matriceA[0][1] * matriceB[1][1] + matriceA[0][2] * matriceB[2][1];
    produit[0][2] = matriceA[0][0] * matriceB[0][2] + matriceA[0][1] * matriceB[1][2] + matriceA[0][2] * matriceB[2][2];

    produit[1][0] = matriceA[1][0] * matriceB[0][0] + matriceA[1][1] * matriceB[1][0] + matriceA[1][2] * matriceB[2][0];
    produit[1][1] = matriceA[1][0] * matriceB[0][1] + matriceA[1][1] * matriceB[1][1] + matriceA[1][2] * matriceB[2][1];
    produit[1][2] = matriceA[1][0] * matriceB[0][2] + matriceA[1][1] * matriceB[1][2] + matriceA[1][2] * matriceB[2][2];

    produit[2][0] = matriceA[2][0] * matriceB[0][0] + matriceA[2][1] * matriceB[1][0] + matriceA[2][2] * matriceB[2][0];
    produit[2][1] = matriceA[2][0] * matriceB[0][1] + matriceA[2][1] * matriceB[1][1] + matriceA[2][2] * matriceB[2][1];
    produit[2][2] = matriceA[2][0] * matriceB[0][2] + matriceA[2][1] * matriceB[1][2] + matriceA[2][2] * matriceB[2][2];

}

void transposeMatrice33(int matriceA[3][3], int transpose[3][3]) {
    int x = matriceA[0][1];
    int y = matriceA[0][2];
    int z = matriceA[1][2];
    
    transpose[0][1] = matriceA[1][0];
    transpose[0][2] = matriceA[2][0];
    transpose[1][0] = x;
    transpose[1][2] = matriceA[2][1];
    transpose[2][0] = y;
    transpose[2][1] = z;

}

int traceMatrice33(int matriceA[3][3]) {
    int trace;
    trace = matriceA[0][0] + matriceA[1][1] + matriceA[2][2];
    return trace;
}
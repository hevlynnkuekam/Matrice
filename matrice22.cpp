#include <iostream>

#include "matrice22.h"

void SommeMatrice22(int matriceA[2][2], int matriceB[2][2], int Somme22[2][2]) {

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            Somme22[i][j] = matriceA[i][j] + matriceB[i][j];
        }
    }

}

void DifferenceMatrice22(int matriceA[2][2], int matriceB[2][2], int Difference22[2][2]) {

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            Difference22[i][j] = matriceA[i][j] - matriceB[i][j];
        }
    }

}

void ProduitMatrice22(int matriceA[2][2], int matriceB[2][2], int Produit22[2][2]) {

    Produit22[0][0] = matriceA[0][0] * matriceB[0][0] + matriceA[0][1] * matriceB[1][0];
    Produit22[0][1] = matriceA[0][0] * matriceB[0][1] + matriceA[0][1] * matriceB[1][1];
    Produit22[1][0] = matriceA[1][0] * matriceB[0][0] + matriceA[1][1] * matriceB[1][0];
    Produit22[1][1] = matriceA[1][0] * matriceB[0][1] + matriceA[1][1] * matriceB[1][1];

}

int DeterminantMatrice22(int matrice[2][2]) {
    int determinant = matrice[0][0] * matrice[1][1] - matrice[0][1] * matrice[1][0];
    return determinant;
}

void TransposeMatrice22(int matrice[2][2], int transpose[2][2]) {
    int x = matrice[0][1];

    transpose[0][0] = matrice[0][0];
    transpose[0][1] = matrice[1][0];
    transpose[1][0] = x;
    transpose[1][1] = matrice[1][1];

}

void InverseMatrice22(int matrice[2][2], int inverse[2][2]) {
    float det = DeterminantMatrice22(matrice);

    if (det == 0) {
        std::cout << "On ne peut inverser cette matrice\n";
    } else {
        inverse[0][0] = matrice[1][1] / det;
        inverse[0][1] = -matrice[0][1] / det;
        inverse[1][0] = -matrice[1][0] / det;
        inverse[1][1] = matrice[0][0] / det;
    }

}

int TraceMatrice22(int matrice[2][2]) {
    int trace = matrice[0][0] + matrice[1][1];
    return trace;
}
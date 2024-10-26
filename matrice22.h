#ifndef __MATRICE22_H__
#define __MATRICE22_H__

void SommeMatrice22(int matriceA[2][2], int matriceB[2][2], int Somme22[2][2]);

void DifferenceMatrice22(int matriceA[2][2], int matriceB[2][2], int Difference22[2][2]);

void ProduitMatrice22(int matriceA[2][2], int matriceB[2][2], int Produit22[2][2]);

int DeterminantMatrice22(int matrice[2][2]);

void TransposeMatrice22(int matrice[2][2], int transpose[2][2]);

void InverseMatrice22(int matrice[2][2], int inverse[2][2]);

int TraceMatrice22(int matrice[2][2]);

#endif
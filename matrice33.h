#ifndef __MATRICE33_H__
#define __MATRICE33_H__

void sommeMatrice33(int matriceA[3][3], int matriceB[3][3], int somme[3][3]);

void differenceMatrice33(int matriceA[3][3], int matriceB[3][3], int difference[3][3]);

int determinantMatrice33(int matrice[3][3]);

void produitMatrice33(int matriceA[3][3], int matriceB[3][3], int produit[3][3]);

void transposeMatrice33(int matriceA[3][3], int transpose[3][3]);

int traceMatrice33(int matriceA[3][3]);

#endif
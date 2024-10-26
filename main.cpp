#include <iostream>

#include "matrice22.h"
#include "matrice33.h"

int main(int argc, char** argv) {
    std::cout << "1: matrice 2x2 \n";
    std::cout << "2: matrice 3x3 \n";
    int a;
    std::cin >> a;

    switch (a) {
        case 1: {
            std::cout << "Entrez les valeurs de la première matrice 2x2 \n";
            int tableau1[2][2];
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    std::cin >> tableau1[i][j];
                }
            }

            std::cout << "Entrez les valeurs de la deuxième matrice 2x2 \n";
            int tableau2[2][2];
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    std::cin >> tableau2[i][j];
                }
            }
            std::cout << "Quelle opération souhaitez-vous effectuer ?\n";
            std::cout << " 1: somme,\n 2: différence,\n 3: produit,\n 4: déterminant,\n 5: transposée,\n 6: inverse,\n 7: trace\n";
            int b;
            std::cin >> b;

            switch (b) {
                case 1: {
                    int som[2][2];
                    SommeMatrice22(tableau1, tableau2, som);
                    std::cout << "La somme de ces deux matrices est : \n";
                    std::cout << " { " << som[0][0] << " , " << som[0][1] << " }\n";
                    std::cout << "{ " << som[1][0] << " , " << som[1][1] << " }\n";
                    break;
                }

                case 2: {
                    int dif[2][2];
                    DifferenceMatrice22(tableau1, tableau2, dif);
                    std::cout << "La différence de ces deux matrices est : \n";
                    std::cout << " { " << dif[0][0] << " , " << dif[0][1] << " }\n";
                    std::cout << " { " << dif[1][0] << " ,  " << dif[1][1] << " }\n";
                    break;
                }

                case 3: {
                    int pro[2][2];
                    ProduitMatrice22(tableau1, tableau2, pro);
                    std::cout << "Le produit de ces deux matrices est : \n";
                    std::cout << " { " << pro[0][0] << " , " << pro[0][1] << " }\n";
                    std::cout << " { " << pro[1][0] << " , " << pro[1][1] << " }\n";
                    break;
                }

                case 4: {
                    int det1, det2;
                    det1 = DeterminantMatrice22(tableau1);
                    det2 = DeterminantMatrice22(tableau2);
                    std::cout << "Le déterminant de la première matrice est : " << det1 << "\n";
                    std::cout << "Le déterminant de la deuxième matrice est : " << det2 << "\n";
                    break;
                }

                case 5: {
                    int trans1[2][2], trans2[2][2];
                    TransposeMatrice22(tableau1, trans1);
                    TransposeMatrice22(tableau2, trans2);
                    std::cout << "La transposée de la première matrice est : \n";
                    std::cout << " { " << trans1[0][0] << " , " << trans1[0][1] << " }\n";
                    std::cout << " { " << trans1[1][0] << " , " << trans1[1][1] << " }\n";
                    std::cout << "La transposée de la deuxième matrice est : \n";
                    std::cout << " { " << trans2[0][0] << " , " << trans2[0][1] << " }\n";
                    std::cout << " { " << trans2[1][0] << " , " << trans2[1][1] << " }\n";
                    break;
                }

                case 6: {
                    int inv1[2][2];
                    int inv2[2][2];

                    InverseMatrice22(tableau1, inv1);
                    InverseMatrice22(tableau2, inv2);

                    std::cout << "L'inverse de la première matrice est : \n";
                    std::cout << "{" << inv1[0][0] << "," << inv1[0][1] << "} \n";
                    std::cout << "{" << inv1[1][0] << "," << inv1[1][1] << "} \n";
                    std::cout << "L'inverse de la deuxième matrice est : \n";
                    std::cout << "{" << inv2[0][0] << "," << inv2[0][1] << "} \n";
                    std::cout << "{" << inv2[1][0] << "," << inv2[1][1] << "} \n";
                    break;
                }

                case 7: {
                    int tra1, tra2;
                    tra1 = TraceMatrice22(tableau1);
                    tra2 = TraceMatrice22(tableau2);

                    std::cout << "La trace de la première matrice est egale à : " << tra1 << "\n";
                    std::cout << "La trace de la deuxième matrice est egale à : " << tra2 << "\n";

                    break;
                }
            }

            break;
        }

        case 2: {
            std::cout << "Entrez les valeurs de la première matrice 3x3 \n";
            int tableau3[3][3];
            for (int i=0; i < 3; i++) {
                for (int j=0; j < 3; j++) {
                    std::cin >> tableau3[i][j];
                }
            }
            std::cout << "Entrez les valeurs de la deuxième matrice 3x3 \n";
            int tableau4[3][3];
            for (int i=0; i < 3; i++) {
                for (int j=0; j < 3; j++) {
                    std::cin >> tableau4[i][j];
                }
            }

            std::cout << "Quelle opération souhaitez vous effectuer ?\n 1 - Somme \n 2 - Différence \n 3 - Produit \n 4 - Déterminant \n 5 - Transposés \n 6 - Tracée \n";
            int c;
            std::cin >> c;

            switch (c) {
                case 1 : {
                    int somme[3][3];
                    sommeMatrice33(tableau3, tableau4, somme);
                    std::cout << "La somme des deux matrices est : \n";
                    std::cout << "{" << somme[0][0] << "," << somme[0][1] << "," << somme[0][2] << "} \n";
                    std::cout << "{" << somme[1][0] << "," << somme[1][1] << "," << somme[1][2] << "} \n";
                    std::cout << "{" << somme[2][0] << "," << somme[2][1] << "," << somme[2][2] << "} \n";

                    break;
                }

                case 2 : {
                    int diff[3][3];
                    differenceMatrice33(tableau3, tableau4, diff);
                    std::cout << "La difference des deux matrices est : \n";
                    std::cout << "{" << diff[0][0] << "," << diff[0][1] << "," << diff[0][2] << "} \n";
                    std::cout << "{" << diff[1][0] << "," << diff[1][1] << "," << diff[1][2] << "} \n";
                    std::cout << "{" << diff[2][0] << "," << diff[2][1] << "," << diff[2][2] << "} \n";

                    break;
                }

                case 3 : {
                    int prod[3][3];
                    produitMatrice33(tableau3, tableau4, prod);
                    std::cout << "Le produit des deux matrices est : \n";
                    std::cout << "{" << prod[0][0] << "," << prod[0][1] << "," << prod[0][2] << "} \n";
                    std::cout << "{" << prod[1][0] << "," << prod[1][1] << "," << prod[1][2] << "} \n";
                    std::cout << "{" << prod[2][0] << "," << prod[2][1] << "," << prod[2][2] << "} \n";

                    break;
                }
                
                case 4 : {
                    int det1, det2;
                    det1 = determinantMatrice33(tableau3);
                    det2 = determinantMatrice33(tableau4);

                    std::cout << "Le determinant de la première matrice est egale à : " << det1 << "\n";
                    std::cout << "Le determinant de la deuxième matrice est egale à : " << det2 << "\n";

                    break;
                }

                case 5 : {
                    int trans1[3][3];
                    int trans2[3][3];

                    transposeMatrice33(tableau3, trans1);
                    transposeMatrice33(tableau4, trans2);

                    std::cout << "La transposée de la première matrice est : \n";
                    std::cout << "{" << trans1[0][0] << "," << trans1[0][1] << "," << trans1[0][2] << "} \n";
                    std::cout << "{" << trans1[1][0] << "," << trans1[1][1] << "," << trans1[1][2] << "} \n";
                    std::cout << "{" << trans1[2][0] << "," << trans1[2][1] << "," << trans1[2][2] << "} \n";
                    std::cout << "La transposée de la deuxième matrice est : \n";
                    std::cout << "{" << trans2[0][0] << "," << trans2[0][1] << "," << trans2[0][2] << "} \n";
                    std::cout << "{" << trans2[1][0] << "," << trans2[1][1] << "," << trans2[1][2] << "} \n";
                    std::cout << "{" << trans2[2][0] << "," << trans2[2][1] << "," << trans2[2][2] << "} \n";

                    break;
                }

                case 6: {
                    int tra1, tra2;
                    tra1 = traceMatrice33(tableau3);
                    tra2 = traceMatrice33(tableau4);

                    std::cout << "La trace de la première matrice est egale à : " << tra1 << "\n";
                    std::cout << "La trace de la deuxième matrice est egale à : " << tra2 << "\n";

                    break;
                }
            }
        }
    }

    return 0;
}

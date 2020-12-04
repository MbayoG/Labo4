/*
-----------------------------------------------------------------------------------
Laboratoire : 04
Nom du fichier : triParInsertion.cpp
Auteur(s) : Baltensperger Daniel, Pontarolo Stefano, Mbayo Guilain
Date creation : 02.12.2020
But : Permet d'effectuer un tri par insertion sur un vector ou sur les vector d'un vecteur de vector donnés. Compte également le
 		nombre d'opérations effectuées et les stock dans un vecteur de nombre d'opération donné.
Remarque(s) : /
Compilateur : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#include "triParInsertion.h"
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void triParInsertionMultiVecteur(vector<vector<unsigned int>> &v, vector<unsigned int> &vOperations){
    for(vector<unsigned int> &i : v){
        triParInsertion(i, vOperations);
    }
}

void triParInsertion(vector<unsigned int>& v, vector<unsigned int> &vOperations) {
    int tmp, compteur = 0;
    size_t j;
    for (size_t i = 1; i < v.size(); ++i) {
        tmp = v[i];
        j = i;

        while (j >= 1 && v[j - 1] > tmp) {
            if(j >= 1)
                compteur++; // v[j - 1] > tmp
            v[j] = v[j - 1];
            --j;
            compteur +=3; //v[j] = v[j - 1] && --j && j >= 1
        }

        v[j] = tmp;
        compteur += 6; // tmp = v[i] && j = i && i++ && i < v.size() && j >= 1 && v[j - 1] > tmp ==> false &&v[j] = tmp
    }
    compteur+=2; //size_t = 1 && i < v.size() ==> false
    vOperations.resize(vOperations.size() + 1, compteur);
}
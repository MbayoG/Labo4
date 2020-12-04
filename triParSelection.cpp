/*
-----------------------------------------------------------------------------------
Laboratoire : 04
Nom du fichier : triParSelection.cpp
Auteur(s) : Baltensperger Daniel, Pontarolo Stefano, Mbayo Guilain
Date creation : 24.11.2020
But : Permet d'effectuer un tri par séléction sur un vector ou sur les vector d'un vecteur de vector donnés. Compte également le
 		nombre d'opérations effectuées et les stock dans un vecteur de nombre d'opération donné.
Remarque(s) : /
Compilateur : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#include "triParSelection.h"
using namespace std;

void triParSelectionMultiVecteur(vector<vector<unsigned int>> &v, vector<unsigned int> &vOperations){
	for(vector<unsigned int> &i : v){
		triParSelection(i, vOperations);
	}
}

void triParSelection(vector<unsigned> &v, vector<unsigned int> &vOperations) {

	unsigned cmp = 0;

	if (v.size() > 0) {
		size_t iMin;

		for (size_t i = 0; i < v.size() - 1; ++i) {
			cmp++; // iMin
			iMin = i;

			for (size_t j = i + 1; j < v.size(); ++j) {
				cmp++; // v[j] < v[iMin]
				if (v[j] < v[iMin]) {
					cmp++; // iMin = j
					iMin = j;
				}
				cmp += 3; // j < v.size() et ++j
			}
			cmp += 3; // initialisation de j, i + 1 et premier j < v.size()

			swap(v[i], v[iMin]); // permutation
			cmp += 3; // ++i, swap et i < v.size()
		}
		cmp += 3; // initialisation de i, v.size() - 1 et premier i < v.size()
	}
	cmp++; // v.size()

	vOperations.resize(vOperations.size() + 1, cmp);
}

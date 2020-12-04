/*
-----------------------------------------------------------------------------------
Laboratoire : 04
Nom du fichier : triABulle.cpp
Auteur(s) : Baltensperger Daniel, Pontarolo Stefano, Mbayo Guilain
Date creation : 03.12.2020
But : Permet d'effectuer un tri a bulle sur un vector ou sur les vector d'un vecteur de vector donnés. Compte également le
 		nombre d'opérations effectuées et les stock dans un vecteur de nombre d'opération donné.
Remarque(s) : /
Compilateur : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#include "triABulle.h"

using namespace std;

void
triABulleMultiVecteur(vector<vector<unsigned int>> &v, vector<unsigned int> &vOperations, std::vector<double> &time) {
	for (vector<unsigned int> &i : v) {
		triABulle(i, vOperations, time);
	}
}

void triABulle(vector<unsigned int> &v, vector<unsigned int> &vOperations, std::vector<double> &time) {
	chrono::duration<double> diff;
	auto start = chrono::high_resolution_clock::now();
	int nbOp = 0;
	if (v.size() > 0) {
		bool fini = false;
		size_t taille = v.size();
		nbOp += 2;
		while (!fini) {
			fini = true;
			nbOp += 1;
			for (size_t i = 0; i < taille - 1; ++i) {
				if (v[i] > v[i + 1]) {
					swap(v[i], v[i + 1]);
					fini = false;
					nbOp += 4; //nbOperation dans le if
				}
				nbOp += 3; //nbOperation dans le for (sans l'initialisation de i)
			}
			--taille;
			nbOp += 2; // nbOperation taille -- et initialisation de i dans le for
		}
		nbOp += 1; //nbOperation pour le !fini
	}
	nbOp += 1; //nbOperation pour le v.size > 0

	auto end = chrono::high_resolution_clock::now();
	time.push_back(chrono::duration<double, std::milli>(end - start).count());
	vOperations.resize(vOperations.size() + 1, nbOp);
}

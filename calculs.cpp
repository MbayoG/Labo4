/*
-----------------------------------------------------------------------------------
Laboratoire : 04
Nom du fichier : calculs.cpp
Auteur(s) : Baltensperger Daniel, Pontarolo Stefano, Mbayo Guilain
Date creation : 04.12.2020
But : Contient les fonction permettant d'effectuer une moyenne ou un écart type sur les valeurs d'un vecteur.
 		La moyenne du nombre d'opération n'inclu pas les valeurs des vecteurs trié dans l'ordre croissant et décroissant.
Remarque(s) : /
Compilateur : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#include "calculs.h"

using namespace std;

double moyenneNbOperation(vector<unsigned int> v) {
	unsigned int total, cmp = 0;
	for (unsigned int i : v) {
		if (cmp >= 2) {
			total += i;
		}
		cmp++;
	}
	return total / (v.size() - 2);
}

double ecartTypeOperation(vector<unsigned int> v) {
	unsigned int total, cmp = 0;
	for (unsigned int i : v) {
		if (cmp >= 2) {
			total += pow(i - moyenneNbOperation(v), 2);
		}
		cmp++;
	}
	return sqrt(total / (v.size() - 2));
}

double moyenneTemps(vector<double> v) {
	double total, cmp = 0;
	for (double i : v) {
		if (cmp >= 2) {
			total += i;
		}
		cmp++;
	}
	return total / (v.size() - 2);
}

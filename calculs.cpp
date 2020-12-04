/*
-----------------------------------------------------------------------------------
Laboratoire : 04
Nom du fichier : calculs.cpp
Auteur(s) : Baltensperger Daniel, Pontarolo Stefano, Mbayo Guilain
Date creation : 04.12.2020
But : Contient les fonction permettant d'effectuer une moyenne ou un écart type sur les valeurs d'un vecteur.
Remarque(s) : /
Compilateur : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#include "calculs.h"

using namespace std;

double moyenneNbOperation(vector<unsigned int> v){
	unsigned int total = 0;
	for(unsigned int i : v){
		total += i;
	}
	return total/v.size();
}

double ecartTypeOperation(vector<unsigned int> v){
	unsigned int total = 0;
	for(unsigned int i : v){
		total += pow(i-moyenneNbOperation(v),2);
	}
	return sqrt(total/v.size());
}
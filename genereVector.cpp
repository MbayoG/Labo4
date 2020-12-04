/*
-----------------------------------------------------------------------------------
Laboratoire : 04
Nom du fichier : genereVector.cpp
Auteur(s) : Baltensperger Daniel, Pontarolo Stefano, Mbayo Guilain
Date creation : 03.12.2020
But : permet de générer un nombre de vecteurs donné (via la taille du vecteur de vecteur) ayant une taille données
		et de les stocker dans un vecteur de vecteur d'unsigned int.
Remarque(s) : /
Compilateur : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#include "genereVector.h"


using namespace std;

void genereVector(int taille, vector<vector<unsigned int>>& stockage){
	std::srand(std::time(nullptr));
	int compteur = 0;
	for(vector<unsigned int>& i : stockage){
		vector<unsigned int> v(taille);
		int valeur = 0;
		for(unsigned int& j : v){

			if(compteur == 0){
				j = valeur;
				valeur ++;
			} else if( compteur == 1){
				j = taille - valeur;
				valeur ++;
			} else{
				j = 1 + rand()%taille;
			}

		}
		compteur ++;
		i = v;
	}

}
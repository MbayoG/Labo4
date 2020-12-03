//
// Created by maany on 03.12.2020.
//

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
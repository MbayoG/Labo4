/*
-----------------------------------------------------------------------------------
Laboratoire : 04
Nom du fichier : afficheVector.cpp
Auteur(s) : Baltensperger Daniel, Pontarolo Stefano, Mbayo Guilain
Date creation : 03.12.2020
But : permet d'afficher les valeurs stockées dans un vecteur (unsigned int) ou les valeurs stockées dans les vecteurs
 		d'un vecteur de vecteurs (unsigned int).
Remarque(s) : /
Compilateur : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#include "afficheVector.h"
using namespace std;
void afficheVectorDeVector(vector<vector<unsigned int>> vetorDeVector){
	for(vector<unsigned int> v : vetorDeVector){
		afficheVector(v);
	}
}

void afficheVector(vector<unsigned int> &v){
	for_each(v.begin(), v.end(), afficher);
	cout << endl;
}

void afficher(int i){
	cout << i << " ";
}

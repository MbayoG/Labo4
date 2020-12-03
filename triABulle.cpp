//
// Created by maany on 24.11.2020.
//

#include "triABulle.h"
using namespace std;

void triABulle(vector<unsigned int> &v) {
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
					echange(v[i], v[i + 1]);
					fini = false;
					nbOp += 7; //nbOperation dans le if et le echange
				}
				nbOp +=3; //nbOperation dans le for (sans l'initialisation de i)
			}
			--taille;
			nbOp +=2; // nbOperation taille -- et initialisation de i dans le for
		}
		nbOp +=1; //nbOperation pour le !fini
	}
	nbOp +=1; //nbOperation pour le v.size > 0
	cout << "nbOp: " << nbOp << endl;
}

void echange(unsigned int& i, unsigned int& j){
	int temp;
	temp = j;
	j = i;
	i = temp;
}
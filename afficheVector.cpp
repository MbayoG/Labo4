//
// Created by maany on 24.11.2020.
//

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

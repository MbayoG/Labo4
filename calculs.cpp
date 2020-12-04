//
// Created by maany on 04.12.2020.
//

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
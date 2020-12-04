/*
-----------------------------------------------------------------------------------
Laboratoire : 04
Nom du fichier : triParInsertion.h
Auteur(s) : Baltensperger Daniel, Pontarolo Stefano, Mbayo Guilain
Date creation : 02.12.2020
But : Header de triParSelection.cpp.
Remarque(s) : /
Compilateur : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO4_TRIPARINSERTION_H
#define LABO4_TRIPARINSERTION_H

#include <vector>
#include <cstdlib>
#include <chrono>

void triParInsertion(std::vector<unsigned>& v, std::vector<unsigned int> &vOperations, std::vector<double> &time);
void triParInsertionMultiVecteur(std::vector<std::vector<unsigned int>> &v, std::vector<unsigned int> &vOperations, std::vector<double> &time);

#endif //LABO4_TRIPARINSERTION_H

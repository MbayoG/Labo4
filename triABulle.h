/*
-----------------------------------------------------------------------------------
Laboratoire : 04
Nom du fichier : triABulle.h
Auteur(s) : Baltensperger Daniel, Pontarolo Stefano, Mbayo Guilain
Date creation : 03.12.2020
But : Header de triABulle.cpp.
Remarque(s) : /
Compilateur : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO4_TRIABULLE_H
#define LABO4_TRIABULLE_H

#endif //LABO4_TRIABULLE_H

#include <iostream>
#include <vector>
#include <cstdlib>
#include <chrono>
#include <algorithm>


void echange(unsigned int& i, unsigned int& j);
void triABulle(std::vector<unsigned int> &v, std::vector<unsigned int> &vOperations);
void triABulleMultiVecteur(std::vector<std::vector<unsigned int>> &v, std::vector<unsigned int> &vOperations);
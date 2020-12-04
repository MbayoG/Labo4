/*
-----------------------------------------------------------------------------------
Laboratoire : 04
Nom du fichier : triParSelection.h
Auteur(s) : Baltensperger Daniel, Pontarolo Stefano, Mbayo Guilain
Date creation : 03.12.2020
But : Header de triParSelection.cpp.
Remarque(s) : /
Compilateur : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/

#ifndef LABO4_TRIPARSELECTION_H
#define LABO4_TRIPARSELECTION_H
#include <vector>
#include <cstdlib>
#include <chrono>


void triParSelection(std::vector<unsigned>& v, std::vector<unsigned int> &vOperations, std::vector<double> &time);
void triParSelectionMultiVecteur(std::vector<std::vector<unsigned int>> &v, std::vector<unsigned int> &vOperations,
                                 std::vector<double> &time);


#endif //LABO4_TRIPARSELECTION_H

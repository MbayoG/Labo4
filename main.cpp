/*
-----------------------------------------------------------------------------------
Laboratoire : 04
Nom du fichier : main.ccp
Auteur(s) : Baltensperger Daniel, Pontarolo Stefano, Mbayo Guilain
Date creation : 03.12.2020
But : Crée des vecteurs, puis applique les différentes fontion dessus afin de les remplir de vecteurs aléatoires,
 		puis d'effectuer les tri à bulle, par séléction et par insertion, afficher les vecteurs, calculer les moyennes
 		du nombre d'opération ainsi que son écart type.
Remarque(s) : /
Compilateur : Mingw-w64 g++ 8.1.0
-----------------------------------------------------------------------------------
*/
#include "triABulle.h"
#include "afficheVector.h"
#include "genereVector.h"
#include "calculs.h"
#include "triParSelection.h"
#include "triParInsertion.h"

using namespace std;
const int NBVECTOR = 27;

int main() {
	vector<double> timeTriParSelection(0);
	vector<double> timeTriABulle(0);
	vector<double> timeTriParInsertion(0);
	vector<unsigned int> nbOperationTriABulle(0);
	vector<unsigned int> nbOperationTriParSelection(0);
	vector<unsigned int> nbOperationTriParInsertion(0);
	vector<vector<unsigned int>> v10(NBVECTOR);
	vector<vector<unsigned int>> v100(NBVECTOR);
	vector<vector<unsigned int>> v1000(NBVECTOR);
	vector<vector<unsigned int>> v10000(NBVECTOR);
	unsigned indiceRandom = 2 + rand() % 25;

	genereVector(10, v10);
	genereVector(100, v100);
	genereVector(1000, v1000);
	genereVector(10000, v10000);

	afficheVector(v10[0]);
	afficheVector(v10[1]);
	afficheVector(v10[indiceRandom]);
	triParInsertionMultiVecteur(v10, nbOperationTriParInsertion, timeTriParInsertion);
	genereVector(10, v10);
	triParSelectionMultiVecteur(v10, nbOperationTriParSelection, timeTriParSelection);
	genereVector(10, v10);
	triABulleMultiVecteur(v10, nbOperationTriABulle, timeTriABulle);
	afficheVector(v10[0]);
	afficheVector(v10[1]);
	afficheVector(v10[indiceRandom]);
	cout << "Moyenne du nombre d'operations via le tri a bulle: " << moyenneNbOperation(nbOperationTriABulle) << endl;
	cout << "Ecart type du nombre d'operations via le tri a bulle: " << ecartTypeOperation(nbOperationTriABulle) << endl;
	cout << "Moyenne du temps via le tri a bulle: " << moyenneTemps(timeTriABulle) << endl;

	cout << "Moyenne du nombre d'operations via le tri par insertion: " << moyenneNbOperation(nbOperationTriParInsertion)
	     << endl;
	cout << "Ecart type du nombre d'operations via le tri par insertion: "
	     << ecartTypeOperation(nbOperationTriParInsertion)
	     << endl;
	cout << "Moyenne du temps via le tri par insertion: " << moyenneTemps(timeTriParInsertion) << endl;
	cout << "Moyenne du nombre d'operations via le tri par selection: " << moyenneNbOperation(nbOperationTriParSelection)
	     << endl;
	cout << "Ecart type du nombre d'operations via le tri par selection: " << ecartTypeOperation
		(nbOperationTriParSelection) << endl;
	cout << "Moyenne du temps via le tri par selection: " << moyenneTemps(timeTriParSelection) << endl;
	timeTriParInsertion.clear();
	timeTriABulle.clear();
	timeTriParSelection.clear();
	nbOperationTriABulle.clear();
	nbOperationTriParInsertion.clear();
	nbOperationTriParSelection.clear();



//	afficheVector(v10000[0]);
//	afficheVector(v10000[1]);
//	afficheVectorDeVector(v10000);
//	triParSelectionMultiVecteur(v10000, nbOperationTriParSelection, timeTriParSelection);
//	genereVector(10000, v10000);
//	triABulleMultiVecteur(v10000, nbOperationTriABulle, timeTriABulle);
//	genereVector(10000, v10000);
//	triParInsertionMultiVecteur(v10000, nbOperationTriParInsertion, timeTriParInsertion);
//
//
//	cout << endl << endl;
//	afficheVectorDeVector(v10000);
//
//
//	cout << "Moyenne du nombre d'operations via le tri a bulle: " << moyenneNbOperation(nbOperationTriABulle) << endl;
//	cout << "Ecart type du nombre d'operations via le tri a bulle: " << ecartTypeOperation(nbOperationTriABulle) << endl;
//	cout << "Moyenne du temps via le tri a bulle: " << moyenneTemps(timeTriABulle) << endl;
//
//	cout << "Moyenne du nombre d'operations via le tri par insertion: " << moyenneNbOperation(nbOperationTriParInsertion)
//	     << endl;
//	cout << "Ecart type du nombre d'operations via le tri par insertion: "
//	     << ecartTypeOperation(nbOperationTriParInsertion)
//	     << endl;
//	cout << "Moyenne du temps via le tri par insertion: " << moyenneTemps(timeTriParInsertion) << endl;
//
//	cout << sommeTemps;
//	cout << "Moyenne du nombre d'operations via le tri par selection: " << moyenneNbOperation(nbOperationTriParSelection)
//	     << endl;
//	cout << "Ecart type du nombre d'operations via le tri par selection: " << ecartTypeOperation
//		(nbOperationTriParSelection) << endl;
//	cout << "Moyenne du temps via le tri par selection: " << moyenneTemps(timeTriParSelection) << endl;

	return EXIT_SUCCESS;
}



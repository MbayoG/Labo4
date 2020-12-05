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
const int NBVECTOR = 27, TABCROISSANT = 0, TABDECROISSANT = 1;
void test(vector<vector<unsigned int>> &v, vector<double> &timeTriParSelection, vector<double> &timeTriABulle,
			 vector<double> &timeTriParInsertion, vector<unsigned int> &nbOperationTriABulle,
			 vector<unsigned int> &nbOperationTriParSelection, vector<unsigned int> &nbOperationTriParInsertion,
			 unsigned indiceRandom, unsigned taille);

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

	cout << "taille 10:" <<endl;
	test(v10, timeTriParSelection, timeTriABulle, timeTriParInsertion, nbOperationTriABulle,
		nbOperationTriParSelection, nbOperationTriParInsertion,
		indiceRandom, 10);

	cout << endl << endl << "taille 100:" <<endl;
	test(v100, timeTriParSelection, timeTriABulle, timeTriParInsertion, nbOperationTriABulle,
		  nbOperationTriParSelection, nbOperationTriParInsertion,
		  indiceRandom, 100);

	cout << endl << endl << "taille 1000:" <<endl;
	test(v1000, timeTriParSelection, timeTriABulle, timeTriParInsertion, nbOperationTriABulle,
		  nbOperationTriParSelection, nbOperationTriParInsertion,
		  indiceRandom, 1000);

	cout << endl << endl << "taille 10000:" <<endl;
	test(v10000, timeTriParSelection, timeTriABulle, timeTriParInsertion, nbOperationTriABulle,
		  nbOperationTriParSelection, nbOperationTriParInsertion,
		  indiceRandom, 10000);

	return EXIT_SUCCESS;
}

void test(vector<vector<unsigned int>> &v, vector<double> &timeTriParSelection, vector<double> &timeTriABulle,
				vector<double> &timeTriParInsertion, vector<unsigned int> &nbOperationTriABulle,
				vector<unsigned int> &nbOperationTriParSelection, vector<unsigned int> &nbOperationTriParInsertion,
			 unsigned indiceRandom, unsigned taille){
	afficheVector(v[TABCROISSANT]);
	afficheVector(v[TABDECROISSANT]);
	afficheVector(v[indiceRandom]);
	triParInsertionMultiVecteur(v, nbOperationTriParInsertion, timeTriParInsertion);
	genereVector(taille, v);
	triParSelectionMultiVecteur(v, nbOperationTriParSelection, timeTriParSelection);
	genereVector(taille, v);
	triABulleMultiVecteur(v, nbOperationTriABulle, timeTriABulle);
	afficheVector(v[TABCROISSANT]);
	afficheVector(v[TABDECROISSANT]);
	afficheVector(v[indiceRandom]);
	cout << "Moyenne du nombre d'operations via le tri a bulle: " << moyenneNbOperation(nbOperationTriABulle) << endl;
	/*cout << "Ecart type du nombre d'operations via le tri a bulle: " << ecartTypeOperation(nbOperationTriABulle) << endl;*/
	cout << "Moyenne du temps via le tri a bulle: " << moyenneTemps(timeTriABulle) << endl;

	cout << "Moyenne du nombre d'operations via le tri par insertion: " << moyenneNbOperation(nbOperationTriParInsertion)
		  << endl;
	/*cout << "Ecart type du nombre d'operations via le tri par insertion: "
		  << ecartTypeOperation(nbOperationTriParInsertion)
		  << endl;*/
	cout << "Moyenne du temps via le tri par insertion: " << moyenneTemps(timeTriParInsertion) << endl;
	cout << "Moyenne du nombre d'operations via le tri par selection: " << moyenneNbOperation(nbOperationTriParSelection)
		  << endl;
	/*cout << "Ecart type du nombre d'operations via le tri par selection: " << ecartTypeOperation
		(nbOperationTriParSelection) << endl;*/
	cout << "Moyenne du temps via le tri par selection: " << moyenneTemps(timeTriParSelection) << endl;
	timeTriParInsertion.clear();
	timeTriABulle.clear();
	timeTriParSelection.clear();
	nbOperationTriABulle.clear();
	nbOperationTriParInsertion.clear();
	nbOperationTriParSelection.clear();

}



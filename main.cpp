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
	vector<unsigned int> nbOperationTriABulle(0);
	vector<unsigned int> nbOperationTriParSelection(0);
	vector<vector<unsigned int>> v10(NBVECTOR);
	vector<vector<unsigned int>> v100(NBVECTOR);
	vector<vector<unsigned int>> v1000(NBVECTOR);
	vector<vector<unsigned int>> v10000(NBVECTOR);



	genereVector(10, v10);
	genereVector(100, v100);
	genereVector(1000, v1000);
	genereVector(10000, v10000);


	afficheVectorDeVector(v10);
	//afficheVectorDeVector(v100);
	//afficheVectorDeVector(v1000);
	//afficheVectorDeVector(v10000);
	//triABulleMultiVecteur(v10, nbOperationTriABulle);
	//triParSelectionMultiVecteur(v10, nbOperationTriParSelection);
	triParInsertionMultiVecteur(v10, nbOperationTriParSelection);
	cout << endl << endl;
	afficheVectorDeVector(v10);
	//afficheVector(nbOperationTriABulle);

	//cout << "Moyenne du nombre d'operations via le tri a bulle: " << moyenneNbOperation(nbOperationTriABulle) << endl;
	//cout << "Ecart type du nombre d'operations via le tri a bulle: " << ecartTypeOperation(nbOperationTriABulle) << endl;
	//cout << "Moyenne du nombre d'operations via le tri par selection: " << moyenneNbOperation(nbOperationTriParSelection) << endl;
	//cout << "Ecart type du nombre d'operations via le tri par selection: " << ecartTypeOperation(nbOperationTriParSelection) << endl;
	cout << "Moyenne du nombre d'operations via le tri par insertion: " << moyenneNbOperation(nbOperationTriParSelection) << endl;
	cout << "Ecart type du nombre d'operations via le tri par insertion: " << ecartTypeOperation(nbOperationTriParSelection) << endl;
	return EXIT_SUCCESS;
}

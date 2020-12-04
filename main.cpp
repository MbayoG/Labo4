#include "triABulle.h"
#include "afficheVector.h"
#include "genereVector.h"
#include "calculs.h"

using namespace std;
const int NBVECTOR = 27;
int main() {
	vector<unsigned int> nbOperationTriABulle(0);
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
	triABulleMultiVecteur(v10, nbOperationTriABulle);
	cout << endl << endl;
	afficheVectorDeVector(v10);
	//afficheVector(nbOperationTriABulle);

	//cout << "Moyenne du nombre d'operations via le tri a bulle: " << moyenneNbOperation(nbOperationTriABulle) << endl;
	//cout << "Ecart type du nombre d'operations via le tri a bulle: " << ecartTypeOperation(nbOperationTriABulle) << endl;
	return EXIT_SUCCESS;
}

#include <iostream>

using namespace std;

/*
    Ecrire un programme qui permet de lire un nombre X et d'afficher X lignes
    ayant chacune un nombre d'étoiles égal au numéro de la ligne correspondante.
    Exemple : X = 3
    Résultat :
    *
    **
    ***
*/
int main()
{
    int x;
    cout << "Saisir le nombre de lignes" << endl;
    cin >> x;

    for(int i=1;i<=x;i++){
            for(int j=0; j<i; j++){
              cout << "*";
            }
            cout << endl;
    }
    return 0;
}

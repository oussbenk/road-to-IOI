#include <iostream>

using namespace std;

int main()
{
    // Declaration d'un tableau
    int t1[5];

    // Méthode 1 - Remplissage du tableau
    /*
    for(int i=0;i<5;i++){
        cout << "Saisir la case " << i << endl;
        cin >> t1[i];
    }
    */

    // Méthode 2 - Intialisation et remplissage d'un tableau par des valeurs par défaut
    int t[10] = {51,46,12,5,89,46,10,78,89,46};
    for(int j=0; j<10; j++){
        cout << "l'element " << j+1 << " dans t est " << t[j] << endl;
    }

    // Application 1 - Recherche de Max/Min dans un tableau

    int nbMax = t[0];
    int nbMin = t[0];
    for(int i=1; i<10; i++){
        if(t[i]>nbMax){
            nbMax = t[i];
        }else if(t[i]<nbMin){
            nbMin = t[i];
        }
    }
    cout << "Le maximum est " << nbMax << endl;
    cout << "Le minimum est " << nbMin << endl;

    cout << "-----------------------" << endl;

    // Application 2 - Recherche de Max par indice (permet de trouver la position du Max)

    int indiceMax = 0;
    for(int i=1; i<10; i++){
        if(t[i]>t[indiceMax]){
            indiceMax = i;
        }
    }
    cout << "Le maximum est " << t[indiceMax] << " et se trouve à l'indice " << indiceMax << endl;

    // Application 3 - Recherche de nombres d'occurrences d'un nombre dans un tableau

    int nb;
    cout << "Saisir un nombre à rechercher dans t" << endl;
    cin >> nb;

    int nbOccurrences = 0;
    for(int i=1; i<10; i++){
        if(t[i]==nb){
            nbOccurrences++;
        }
    }

    if(nbOccurrences==0){
        cout << "Le nombre " << nb << " n'existe pas dans le tableau" << endl;
    }else{
        cout << "Le nombre " << nb << " se repete " << nbOccurrences << " fois" << endl;
    }

    return 0;
}

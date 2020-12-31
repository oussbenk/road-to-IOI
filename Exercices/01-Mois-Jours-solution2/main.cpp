#include <iostream>

using namespace std;
/**
* Lire un numéro de mois et afficher le nombre de jours dans ce mois.
*/

int main()
{
    int mois;

    // Lecture du numéro de mois avec contrôle de saisie (vue dans la Séance 3 avec les boucles)
    do{
        cout << "Saisir un numéro de mois" << endl;
        cin >> mois;
    }while ((mois<1) || (mois>12));

    if(mois==2){
        cout << "Le mois " << mois << " contient 28 jours" << endl;
    }else if (((mois%2==1)&&(mois<=7))||((mois%2==0)&&(mois>=8))){
        cout << "Le mois " << mois << " contient 31 jours" << endl;
    }else{
        cout << "Le mois " << mois << " contient 30 jours" << endl;
    }

    return 0;
}

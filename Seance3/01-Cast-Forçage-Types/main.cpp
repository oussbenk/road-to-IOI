#include <iostream>

using namespace std;

/**
* Conversion des types avec l'opération de cast (dite aussi forçage de type)
*/

int main()
{
    char c;
    c = 'A';
	
    cout << "le caractère saisi est " << c << endl;
	
    // Affichage du code selon la table ASCII
    cout << "le code du caractère saisi est " << (int)c << endl;

    int x,y;
    x = 9;
    y = 2;

    // Forçage du type pour avoir un résultat en virgule et non pas le résultat de la division euclidiènne
    cout << "la division donne " << (double)x/y << endl;
    
    return 0;
}

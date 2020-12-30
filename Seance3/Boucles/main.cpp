#include <iostream>

using namespace std;

int main()
{
    int x = 5;

    int compteur = 1;

    while(compteur<10){
      cout << x << "*" << compteur << "=" << x*compteur << endl;
      compteur++;
    }
    cout << "Contenu du compteur après boucle while " << compteur << endl;

    cout << "----------------" << endl;

    compteur = 1;
    do{
      cout << x << "*" << compteur << "=" << x*compteur << endl;
      compteur++;
    }while(compteur<10);
    cout << "Contenu du compteur après boucle do while " << compteur << endl;

    cout << "++++++++++++++++" << endl;

    for(compteur=1;compteur<10;compteur++){
        cout << x << "*" << compteur << "=" << x*compteur << endl;
    }

    /*for(int i=1;i<10;i++){
        cout << x << "*" << i << "=" << x*i << endl;
        cout << "valeur de i " << i << endl;
    }*/

    return 0;
}

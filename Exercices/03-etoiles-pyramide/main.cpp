#include<iostream>

using namespace std;

/*
Afficher une forme de pyramide selon le nombre saisi.
Exemple : X = 5
     *
    * *
   * * *
  * * * *
 * * * * *

*/

int main()
{
    int X;
    cout << "Ecrire le nombre de lignes de la pyramide" << endl;
    cin >> X;
    for (int i = 1; i<=X; i++)
    {
        for (int k = 0; k<X-i+1; k++){
            cout << ' ';
        }
        for (int j = 0; j<i; j++)
        {
            cout << '*';
            cout << ' ';
        }
        cout << "\n";
    }
}

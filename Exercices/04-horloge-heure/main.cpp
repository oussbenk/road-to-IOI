#include <iostream>

using namespace std;

/*
Ecrire un programme qui permet d'afficher le temps d'un chronomètre durant une heure dans le format suivant "minutes:secondes"
Résultat demandé:
0:0
0:1
0:2
....
0:59
1:0
1:1
....
59:59
*/

int main()
{
    for(int minute=0;minute<60;minute++){
        for(int seconde=0;seconde<60;seconde++){
            cout << minute << ":" << seconde << endl;
        }
    }
    return 0;
}

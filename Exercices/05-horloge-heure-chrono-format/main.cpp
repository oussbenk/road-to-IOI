#include <iostream>

using namespace std;

/*
Ecrire un programme qui permet d'afficher le temps d'un chronomètre durant une heure dans le format suivant "minutes:secondes"
Affichage du chronomètre pour avoir les nombres toujours sur deux chiffres.
Exemple :
00:00
00:01
00:02
....
00:59
01:00
....
59:59
*/

int main()
{
    for(int minute=0;minute<60;minute++){
        for(int seconde=0;seconde<60;seconde++){
            if(minute<10){
                cout << "0";
            }
            cout << minute << ":";
            if(seconde<10){
                cout << "0";
            }
            cout << seconde << endl;
        }
    }
    return 0;
}

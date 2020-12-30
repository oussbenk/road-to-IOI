#include <iostream>

using namespace std;

/**
* Ecrire un programme qui permet de vérifier si un nombre saisi par l'utilisateur
* est un nombre pair (vérifier aussi s'il est multiple de 5) ou un nombre impair	
*/

int main()
{
    int n;
    cout << "Saisir un entier" << endl;
    cin >> n;
	
    // Solution 1 : avec des if imbriqués

    if(n%2 == 0){
        if(n%5 == 0){
            cout << "Nombre pair et divisible par 5" << endl;
        }else{
            cout << "Nombre pair et non divisible par 5" << endl;
        }
    }else{
        cout << "Nombre impair" << endl;
    }

    // Solution 2 : avec des conditions composées
	
    if((n%2 == 0) && (n%5 == 0)){
        cout << "Nombre pair et divisible par 5" << endl;
    }else if((n%2==0) && (n%5!=0)){
        cout << "Nombre pair et non divisible par 5" << endl;
    }else if(n%2==1){
        cout << "Nombre impair" << endl;
    }

    //REMARQUE : la condition ((n%2 == 0) && (n%5 == 0)) est équivalente à :
    // ((n%2==0) && ((n%5==1) || (n%5==2) || (n%5==3) || (n%5==4)))

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Saisir le nombre de phrases à lire" << endl;
    cin >> n;

    string t[n];

    //.ignore() permet d'ignorer le caractère de retour à la ligne
    //lors de la lecture des chaînes de caractères qui suivent la lecture de l'entier n
    cin.ignore();
    for(int i=0;i<n;i++){
       getline(cin,t[i]); // getline permet de lire des phrases contenant des espaces
    }

    // Application 1 - Parcours d'un tableau de chaînes de caractères
    for(int i=0;i<n;i++){
        cout << "La longueur de la phrase numéro " << i+1 << " est " << t[i].length() << endl;
    }

    // Application 2 - Recherche par indice de la plus longue phrase
    int indiceMax = 0;
    for(int i=1;i<n;i++){
        if(t[i].length()>t[indiceMax].length()){
            indiceMax = i;
        }
    }
    cout << "La plus longue phrase se trouve à l'indice " << indiceMax << endl;

    // Application 3 - Filtre pour afficher les phrases qui commencent par 'A'
    cout << "Les phrases qui commencent par 'A' sont : " << endl;
    for(int i=0;i<n;i++){
        if(t[i][0]=='A'){
            cout << t[i] << endl;
        }
    }

    // Application 4 - Filtre sur les phrases qui commencent par une lettre avant 'E'
    cout << "Les phrases qui commencent par une lettre avant 'E' " << endl;
    for(int i=0;i<n;i++){
        if(t[i][0]<'E'){        // equivalent en utilisant la conversion de cast à (int)(t[i][0])<(int)('E')
            cout << t[i] << endl;
        }
    }

    // Application 5 - Remplacer les espaces par '_' dans toutes les phrases
    for(int i=0;i<n;i++){
        for(int j=0; j<t[i].length();j++){
            if(t[i][j] == ' '){
                t[i][j] = '_';
            }
        }
    }
    cout << "Les lignes sans espaces sont :" << endl;
    for(int i=0;i<n;i++){
        cout << t[i] << endl;
    }

    // Application 6 - Sauvegarder les débuts des phrases dans un tableau de caractères
    char tabChar[n];
    for(int i=0;i<n;i++){
        tabChar[i] = t[i][0];
    }
    for(int i=0;i<n;i++){
        cout << "Le début de la phrase " << i << " est " << tabChar[i] << endl;
    }

    // Application 7 - Chercher le nombre d'occurrences de la lettre 'e'
    int occ = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<t[i].length();j++){
            if(t[i][j]=='e'){
                occ++; // occ = occ + 1;
            }
        }
    }
    cout << "Le caractere 'e' se repete " << occ << " fois" << endl;

    return 0;
}

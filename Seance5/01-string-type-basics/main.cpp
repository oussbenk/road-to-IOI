#include <iostream>

using namespace std;

int main()
{
    string ch = "Hello world!";
    cout << "Le premier caractere : " << ch[0] << endl;
    cout << "Le dernier caractere : " << ch[ch.length()-1] << endl;

    string ch2 = "Hello les amis";

    // Affichage en ordre lexicographique (comme dans un dictionnaire)
    if(ch<ch2){
        cout << ch << endl;
        cout << ch2 << endl;
    }else{
        cout << ch2 << endl;
        cout << ch << endl;
    }

    // Remplacer les espaces par '_' dans la phrase ch2
    for(int i=0; i<ch2.length();i++){
        if(ch2[i] == ' '){
            ch2[i] = '_';
        }
    }
    cout << "La chaine sans espaces : " << ch2 << endl;

    return 0;
}

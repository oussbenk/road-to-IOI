#include <iostream>

using namespace std;

int main()
{
    int age;

    do{
        cout << "Saisir votre age (entre 10 et 90)" << endl;
        cin >> age;
    }while((age<10) || (age >90));
    // while(!((age>=10)&&(age<=90)));

    cout << "Votre age est " << age;

    return 0;
}

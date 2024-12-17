//Dato un numero N maggiore di 0 e data una soglia non maggiore di N calcolare la media aritmetica di N valori
#include <iostream>
using namespace std;
int main () {
    int Numero, i;
    float Soglia, Media, Somma;
    i=0;
    Somma=0;

    do {
        cout << "Inserire un numero maggiore di 0" <<endl;
        cin >> Numero;
    } while (Numero<0);

    cout << "Inserire " <<Numero;
    cout << " Numeri" <<endl;
    while (i != Numero) {
        cout << "Inserisci un numero minore o uguale di " <<Numero <<endl;
        cin >> Soglia;
        if (Soglia>Numero) {
            cout << "VALORE MAGGIORE DI " <<Numero <<endl;
        } else  {
            Somma = Somma + Soglia;
            i= i+1;
        }
    }
    Media = Somma/Numero;
    cout <<"La media e' " <<Media <<endl;
    return 0;
}

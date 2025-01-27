#include <iostream>
using namespace std;
int main() {
    int num1, contp, sommadisp, sommap, media, k;

    k = 0;
    num1 = 0;
    contp = 0;
    media = 0;
    sommap = 0;
    sommadisp = 0;
    cout << "Inserire un valore K" << endl;
    cin >> k;
    while (k <= 0) {
        cout << "ERRORE SU VALORE K, Inserire un altro valore K positivo intero" << endl;
        cin >> k;
    }
    do {
        if (num1 >= 0) {
            cout << "inserire un numero" << endl;
            cin >> num1;
            if (num1 % 2 != 0) {
                sommadisp = sommadisp + num1;
            } else {
                if (num1 % k == 0) {
                    sommap = sommap + num1;
                    contp = contp + 1;
                }
            }
        } else {
            cout << "Numero negativo non accetato, inserire un numero positivo intero" << endl;
        }
    } while (sommadisp <= 100);
    if (contp == 0) {
        cout << "non sono stati inseriti numeri pari" << endl;
    } else {
        media = (double) sommap / contp;
        cout << "la media dei pari che sono multipli di " << k;
        cout << " e' " << media << endl;
    }
    return 0;
}
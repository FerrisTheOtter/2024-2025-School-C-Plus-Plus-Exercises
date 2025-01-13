#include <iostream>
using namespace std;
int main() {
    // date in input n coppie di numeri interi contare e visualizzare delle il cui secondo numero è opposto al primo
    int ncoppie, i, n2, n1;

    cout << "inserire il numero delle coppie" << endl;
    cin >> ncoppie;
    i = 0;
    if (ncoppie > 0) {
        while (i < ncoppie) {
            cout << "Inserire n1" << endl;
            cin >> n1;
            cout << "Inserire n2" << endl;
            cin >> n2;
            if (n2 == -n1) {
                cout << n1 << " e " << n2 << " sono nummeri opposti" << endl;
                i = i + 1;
            }
        }
        cout << "il numero di coppie con nummeri opposti sono " << i << endl;
    } else {
        cout << "ERRORE IL NUMERO DI COPPIE NON PUO' ESSERE NEGATIVO" << endl;
    }
    return 0;
}

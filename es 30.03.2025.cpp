#include <iostream>

using namespace std;

int controlloInput(string valore);

int main() {
    string a, m, g, risposta;

    risposta = "Si";
    do {
        int giorno, anno, mese;

        a = "A";
        m = "M";
        anno = controlloInput(a);
        mese = controlloInput(m);
        giorno = controlloInput("G");
        if (mese == 2 && giorno > 28) {
            if (anno % 400 == 0) {
                if (giorno > 29) {
                    cout << "Data non valida!!!" << endl;
                } else {
                    cout << "Data valida!!!" << endl;
                }
            } else {
                if (anno % 4 == 0 && !anno % 100 == 0) {
                    cout << "Data valida!!!" << endl;
                } else {
                    cout << "Data non valida!!!" << endl;
                }
            }
        } else {
            if (mese == 4 || mese == 6 || mese == 9 || mese == 11) {
                if (giorno == 31) {
                    cout << "Data non valida!!!" << endl;
                } else {
                    cout << "Data valida!!!" << endl;
                }
            } else {
                if (mese == 1 || mese == 3 || mese == 5 || mese == 7 || mese == 8 || mese == 10 || mese == 12) {
                    cout << "Data valida!!!" << endl;
                }
            }
        }
        cout << "Vuoi controllare un altra data? Si o No?" << endl;
        cin >> risposta;
    } while (risposta == Si);
    return 0;
}

int controlloInput(string valore) {
    int numero;

    if (valore == "A") {
        do {
            cout << "Inserire l'anno" << endl;
            cin >> numero;
        } while (numero < 0);
    } else {
        if (valore == "M") {
            do {
                cout << "Inserire il mese" << endl;
                cin >> numero;
            } while (numero < 1 || numero > 12);
        } else {
            do {
                cout << "Inserire il giorno" << endl;
                cin >> numero;
            } while (numero < 1 || numero > 31);
        }
    }
    
    return numero;
}

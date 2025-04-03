#include <iostream>
using namespace std;

int controlloPrimi (int numeroControllo);

int main () {
	//scrivere una funzione che prende in input un intero naturale e
	//determini se è un numero primo. 
	//scrivere un main che legge in input 20 numeri e 
	//stampi soltanto quelli primi
	
	int n, i, numeroPrima;
	i= 0;
	while (i<20) {
		cout << "inserire un numero" <<end;
		cin >> n;
		while (n<0) {
			cout <<"ERRORE, Inserire un numero positivo" <<endl;
			cin >> n;
		}
		i= i+1;
		numeroPrimo = controlloPrimi (n);
		cout << " " <<numeroPrimo <<endl;
	}
	return 0;
}

int controlloPrimi(int numeroControllo) {
    int numeroPrimo, i;

    i = 2;
    numeroPrimo = 0;
    while (numeroPrimo == 0) {
        if (i < numeroControllo) {
            if (numeroControllo % i == 0) {
                if (i == numeroControllo) {
                    numeroPrimo = numeroControllo;
                }
            } else {
                i = i + 1;
            }
        } else {
            if (i == numeroControllo) {
                numeroPrimo = numeroControllo;
            }
        }
    }
    
    return numeroPrimo;
}

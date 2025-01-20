#include <iostream>
#include <cmath>
using namespace std;
int main () {
	int i, num1, nump, soglia, somma;
	float media;
	i= 0;
	somma= 0;
	nump= 0;
	cout << "Inserire una soglia" <<endl;
	cin >> soglia;
	while (soglia<0) {
		cout << "la soglia non può essere negativa" <<endl;
		cin >> soglia;
	}
	while (nump<=5) {
		cout << "inserire numeri interi positivi" <<endl;
		cin >> num1;
		while (num1<0){
			cout <<"errore numero negativo non consentito inserire un altro numero" <<endl;
			cin >> num1;
		}
		if (num1%2==0) {
			nump= nump+1;
		}
		else {
			if (num1>soglia) {
				i= i+1;
				somma= somma+num1;
			}
		}
	}
	media= somma/i;
	cout << "la media dei numeri dispari che superano la soglia e' " <<media <<endl;
}

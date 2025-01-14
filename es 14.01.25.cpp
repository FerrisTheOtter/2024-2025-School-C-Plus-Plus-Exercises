#include <iostream>
using namespace std;
int main () {
	int i, n;
	float somma, pref, media, num1, num2, num3, diff;
	i= 0;
	cout << "inserire il numero delle terne" <<endl;
	cin >> n;
	while (n<=0) {
		cout << "Errore il numero di terne non puo essere negativo inserire un altro numero" <<endl;
		cin >> n;
	}
	cout << "Inserire il numero prefissato" <<endl;
	cin >> pref;
	for (i=1; i<=n; i++) {
		cout << "inserire il primo numero della terna" <<endl;
		cin >> num1;
		cout << "inserire il secondo numero della terna" <<endl;
		cin >> num2;
		cout << "inserire il terzo numero della terna" <<endl;
		cin >> num3;
		somma = num1 + num2 + num3;
		media = somma / 3;
		diff = media - pref;
		cout << "la differenza del numero prefissato e' di " << diff <<endl;
		cout << " la media e' " <<media <<endl;
	}
	return 0;
}
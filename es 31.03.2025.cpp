#include <iostream>
using namespace std;

int tempo ();

int main () {
	int orario1, orario2, diff;
	orario1 = tempo ();
	cout << "il primo orario in secondi e' " <<orario1 <<endl;
	orario2 = tempo();
	cout << "il primo orario in secondi e' " <<orario2 <<endl;
	if (orario1==orario2) {
		cout "gli orari sono uguali" <<endl;
	} else
	if (orario1>orario2) {
		diff=orario1-orario2
		cout << "il primo orario e' maggiore con una differenza di" <<diff <<endl;
	} else {
		diff=orario2-orario1
		cout << "il secondo orario e' maggiore con una differenza di" <<diff <<endl;
	}
	return 0;
}

int tempo () {
	int esito, ore, minuti, secondi, htm
	do {
		cout << "inserire le ore" <<endl;
		cin >> ore;
	} while (ore < 0 || ore >24)
	do {
		cout "inserire i minuti" <<endl;
		cin >> minuti;
	} while (minuti <0 || minuti >60)
	do { 
		cout "inserire i secondi" <<endl;
		cin >> secondi;
	} while (secondi <0 || secondi > 60 )
	
	htm = ore*60;
	minuti = minuti+htm;
	esito = (minuti*60)+secondi;
	return esito;
}

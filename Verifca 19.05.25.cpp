#include <iostream>
using namespace std;

float Panini (int, int, float, float)

int main () {
	int Panini, Bibite, Gruppi, i;
	float costopanino, costobibita, tot, guadagnitotali;
	i=0;
	guadagnitotali=0;
	cout << "Inserire quanti gruppi acquisteranno dalla paninoteca" <<endl;
	cin >> gruppi;
	while (gruppi<0) {
		cout << "Il numero di gruppi non può essere negativo" <<endl;
		cin >> gruppi;
	}
	if (gruppi==0) {
		cout << "la paninoteca ha guandagnato 0 euro poichè non c'era alcun cliente" <<endl;
	} else {
		cout << "inserire il costo del panino" <<endl;
		cin >> costopanino;
		while (costopanino<0) {
			cout << "il costo del panino non può essere negativo" <<endl;
		cin >> costopanino;
		}
		cout << "inserire il costo della bibita" <<endl;
		cin >> costobibita;
		while (costobibita<0) {
			cout << "il costo della bibita non può essere negativo" <<endl;
		cin >> costobibita;
		}
		while (i<gruppi) {
			cout << "Quanti panini sono stati venduti al gruppo?" <<endl;
			cin >> panini;
			while (panini<0) {
				cout << "il numero di panini venduti non può essere negativo" <<endl;
				cin >> panini;
			}
			cout << "Quante bibite sono state vendute al gruppo?" <<endl;
			cin >> bibite;
			while (bibite<0) {
				cout << "il numero di bibite vendute non può essere negativo" <<endl;
				cin >> bibite;
			}
			tot=Panini(panini,bibite,costopanino,costobibita);
			guadagnitotali=guadagnitotali+tot;
			i=i+1;
		}
		cout << "i guadagni totati della paninoteca sono: " <<guadagnitotali <<endl;
	}
	return 0;
}

float Panini (int panini, int bibite, float costopanino, float costobibita) {
	int totale, i, offerta, differenza;
	i=0;
	differenza=0;
	if (panini==bibite) {
		totale=(costopanino*panini)+((costobibita/2)*bibite);
	} else {
		if (panini>bibite) {
			differenza = panini-bibite;
			while (i<(panini-differenza)) {
				offerta=(costopanino*(panini-differenza))+((costobibita/2)*1);
				i=i+1;
			}
			totale=offerta+(costobibita*differenza);
		} else {
			differenza= bibite-panini;
			if (i<(bibite-differenza)){
				offerta=(costopanino*panini)+((costobibita/2)*(bibite-differenza));
				i=i+1;
			}
			totale=offerta+(costopanino*differenza)
			
		}
	}
	return totale;
}

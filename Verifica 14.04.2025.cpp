#include <iostream>
using namespace std;

int main () {
	char scelta;
	int i,i2,i3,operazione,prelievo,importo,contoiniziale,contofinale;
	i=0;
	i2=0;
	i3=0;
	cout << "Inserire il saldo del conto corrente" <<endl;
	cin >> contoiniziale;
	while (contoiniziale<0 || contoiniziale>1000) {
		if (contoiniziale<0) {
			cout << "ERRORE il saldo non può essere negativo" <<endl;
		} else {
			cout << "ERRORE il saldo non può essere superiore ai 1000€" <<endl;
		} 
		cout << "reinserire il saldo iniziale" <<endl;
		cin >> contoiniziale;
	}
	cout << "quante operazioni si vuole eseguire?" <<endl;
	cin >> operazioni;
	while (operazioni<0){
		cout << "ERRORE le operazioni non possono essere negative, reinserire il valore" <<endl;
		cin >> operazioni;
	}
	while (i<operazioni) {
		cout << "Che operazione si vuole eseguire? Inserirre A per aggiunte oppure P per prelievi" <<endl;
		cin >> scelta;
		toupper(scelta);
		switch
		case 'A'{
			cout << "insirire di quanto sarà l'importo aggiunto?" <<endl;
			cin >> importo;
			while (importo<0) {
				cout << "ERRORE l'importo aggiunto non può essere negativo, reinserire il valore" <<endl;
				cin >> importo;
			}
			if (i=0) {
				contofinale=contoiniziale+importo;
			} else {
				contofinale=contofinale+importo;
			}
			if (contofinale>5000) {
				cout << "il conto corrente ha superato i 5000€" <<endl;
				i2= i2+1;
			} else {
			}
			i=i+1
		break;		
	}
	case 'P' {
		cout << "inserire di quanto si vuole prelevare dal conto" <<endl;
		cin >> prelievo;
		while (prelievo<0) {
			cout << "ERRORE il valore richiesto del prelievo non può essere negativo, reinserire il valore" <<endl;
			cin >> prelievo;
		}
		if (i=0) {
				contofinale=contoiniziale-prelievo;
			} else {
				contofinale=contofinale-prelievo;
			}
		if (contofinale<0) {
			cout << "il conto corrente e' andato in negativo" <<endl;
			i3=i3+1;
		}	else{
		}
		i=i+1
		break;
	} default {
		cout << "ERRORE operazione non riconoscuta" <<endl;
	}
	cout << "il conto corrente ha superato i 5000€ " <<i2 && " volte" <<endl;
	cout << "il conto corrente e' andato in negativo " <<i3 && " volte" <<endl;
	return 0;
}

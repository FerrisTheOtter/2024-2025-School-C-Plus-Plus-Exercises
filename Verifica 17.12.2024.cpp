#include <iostream>
using namespace std;
int main () {
	int Scelta;
	float Costo, km;
	cout << "Scegliere il codice tariffa 0=Nord 1=Centro 2=Sud" <<endl;
	cin >> Scelta;
	if (Scelta==0 || Scelta==1 || Scelta==2); {
		cout <<"Inserire i chilometri percorsi" <<endl;
		cin >> km;
		if (km<0) {
		cout <<"errore i chilometri non possono essere negativi" <<endl;
		return 0;
	}
	else {
		if (Scelta==0) {
			if (km>100) {
				Costo= 0.150+0.010+0.005;
			}
			else {
				Costo=0.150+0.010;
			}
		}
		else {
			if (Scelta==1) {
				if (km>100) {
					Costo= 0.125+0.010+0.005;
				} else {
					Costo= 0.125+0.010;
				}
				
			} else {
				if (km>100) {
					Costo = 0.100+0.010+0.005;
				}
				else {
					Costo= 0.100+0.010;
				}
			}
		}
	}
	}
	cout <<"il costo del pedaggio e' " <<Costo <<endl;
	return 0;
}
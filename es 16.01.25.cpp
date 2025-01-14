//un onda anomala oceanica dimezza la proprià altezza dopo ogni 3km percorsi. 
//Al di sotto di un metro l'onda perde la sua potenza e non viene più considerata pericolosa. 
//Scrivere un programma dati in input L'Altezza iniziale dell'onda, calcoli quanta distanza deve percorrere affinche perda la sua potenza iniziale
#include <iostream>
using namespace std;
int main () {
	float h, distanza;
	cout << "inserire l'altezza iniziale dell'onda" <<endl;
	cin >> h;
	if (h<1) {
		cout << "l'onda e' gia' considerata non pericolosa" <<endl;
	} else {
		while (h>1) {
			h = h/2;
			distanza = distanza+3;
		}
		cout << "l'onda e' diventata non pericolosa dopo " <<distanza << " km" <<endl;
	}
}
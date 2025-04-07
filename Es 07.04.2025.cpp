#include<iostream>


using namespace std;

bool vocali (char);

int main (){
int lettere, i,contlettere,contvocali1,contvocali2;
char carattere;
bool vocale;
i=0
contlettere=0
contvocali1=0
contvocali2=0
while (i<2) {
	cout << "di quanti carattere sara' lunga la parola" <<endl;
	cin >> lettere;
	while (lettere<0) {
		cout << "ERRORE, non puoi inserire un numero negativo" <<endl;
		cin >> lettere;
	}
	for (contlettere=1; contlettere<=lettere; contlettere++) {
		cout << "inserire una lettere della parola (una per volta)" <<endl;
		cin >> carattere;
		vocali = vocali(carttere);
		if (vocale ==true) {
		if (i==0) {
			contvocali1 = contvocali1+1;
		} else {
			contvocali2 = contvocali2+1;
		}
		} else {
		}
		 
	}
	contlettere=0;
	i=i+1;
}
if ()contvocali1== contvocali2) {
	cout << "le parole hanno lo stesso numero di vocali" <<endl;
} else {
	if contvocali1>contvocali2{
		cout << "la prima parola ha piu' vocali della seconda" <<endl;
	} else {
		cout << "la seconda parola ha piu' vocali della prima" <<endl;
	}
}
return 0;
}

bool vocali (char carattere) {
	bool vocale
	if (carattere == "a") {
		vocale = ture;
	} else {
		if (carattere == "e") {
			vocale =true;
		} else {
			if (carattere == "i") {
				vocale = true;
			} else {
				if (carattere == "o") {
					vocale = true; 
				} else {
					if (carattere=="u") {
						vocale = true;
					} else {
						vocale =false;
					}
					
				}
			} 
		}
	}
	return vocale;
}

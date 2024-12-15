#include <iostream>
using namespace std;
int main () {
    float Media;
    int num1, Somma, i;
    
	Somma=0;
    Media=0;
    i=0;
    do {
        cout << "Inserire un numero inserire 0 per smettere" <<endl;
        cin >> num1;
        if (num1 == 0) {
        	break;
		}
        Somma= Somma + num1;
        i = i+1;
        
        } while (num1!=0);
        Media = Somma / i;
        cout << "la media e' " <<Media <<endl;
        system("PAUSE");
        return 0;
        }
        

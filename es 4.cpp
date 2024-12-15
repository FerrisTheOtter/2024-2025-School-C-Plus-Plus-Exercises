#include <iostream>
using namespace std;
int main(){
	
int cilindrata, km;
double spesa;
		



 do{
	cout<<"inserire cilindrata: ";
	cin>>cilindrata;

} while (cilindrata<=0);

do{
	cout<<"inserire km: ";
	cin>>km;
	
	}while(km<=0);

	if(cilindrata<=1200){
	
  spesa=25;
	
} else{
	if(cilindrata<=2000 && cilindrata>1200){
		
		
		spesa=50;
	}else
	if(cilindrata>2000)
	spesa=75;
	}
	
	spesa=spesa+0.5*km ;

	cout<<"la spesa per il noleggio vale: "<<spesa;
	
	return 0;
}
	
	
	
	

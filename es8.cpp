#include <iostream>

using namespace std;

int main(){
	
	
	int G, MM, A;
	
	int maxGG;
	 
	 cout<<"inserire il giorno (gg)";
	 cin>> G;
	 
	 cout<<"inserire un mese (mm)";
	 cin>>MM;
	 
	 
	 cout<<"inserire l'anno(AAAA)";
	 cin>>A;
	
	if (MM<1 && MM>12){
		cout<<"la data inserita non è valida:";
		return 0;
	}
	
	if (MM== 1 or MM==3 or MM==5 or MM==7 or MM==8 or MM==10 or MM==12){
		maxGG=31;
	}else if(MM==4 or MM== 6 or MM==9 or MM==11)
	{
	maxGG=30;
	 
	}else if(MM==2){
	maxGG=28;
}
 
 if(G<1 && G>=maxGG)	{
 	cout<<"la data inserita non è valida:";
 	return 0;
 }
 
 cout<<"data valida: " << G;
 cout <<" "<< MM;
 cout << " "<< A ;
 return 0;
	
}

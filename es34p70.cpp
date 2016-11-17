#include <iostream>

using namespace std;

main()
{
	int N=0;//base
	unsigned M=0;//esponente
	int p=1;//potenza
	
	cout<<"Inserisci la base: "<<endl;
	cin>>N;
	cout<<"Inserisci l'esponente: "<<endl;
	cin>>M;
	
	for(int i=0; i<M; i++){
		p=p*N;
	}
	cout<<"La potenza e': "<<p<<endl;
	return 0;
}

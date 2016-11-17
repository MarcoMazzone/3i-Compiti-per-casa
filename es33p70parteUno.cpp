#include<iostream>
#include <math.h>


using namespace std;
int main()
{
    unsigned int x;//prima variabile
    unsigned int y;//seconda variabile; esponente
    int p=1;//potenza

    cout<<"inserisci il primo numero"<<endl;
    cin>>x;
    cout<<"inserisci l'esponente"<<endl;
    cin>>y;

    for(int i=0; i<y; i++){
        
    p=p*x;
    }

    cout<<"la potenza x alla y e': "<<p<<endl;

    return 0;

}


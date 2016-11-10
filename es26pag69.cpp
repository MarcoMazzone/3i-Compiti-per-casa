#include <iostream>
#include<cmath>
#include <stdlib.h>
using namespace std;
int main()
{
    int fine=1;
    unsigned long int n;
do{
    cout<<"inserisci un numero positivo, io ti dirò se e' primo."<<endl;
    cin>>n;

    bool primo=true;/*quest variabile alla fine vale true solo se n è primo*/
    for(unsigned long int i=2;i<n;i++)
    {
     int q;

    q=n%i;

    if(q==0)
    {

        primo=false;
        cout<<""<<i<<endl;
        break;

    }
    }
    if(primo){
        cout<<"si, e' primo."<<endl;
        }
    else{
        cout<<"no, non e' primo."<<endl;
        }
        cout<<"se vuoi terminare il programma premi 0, altrimenti digita 1"<<endl;
        cin>>fine;
        system("PAUSE");

}while(fine==1);

  return 0;
}

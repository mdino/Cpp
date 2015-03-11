#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    char polje[5];
    int i;
    
    for(i=0;i<5;i++){
                     cout<<"Unesi "<<i+1<<". broj: ";
                     cin >> polje[i];
                     }//for
    
    cout<<"\nVrijednosti u polju: ";
    
    for(i=0;i<5;i++) cout<<polje[i]<<", ";
    
    cout<<"\b\b.";
    cout<<endl<<endl;
    
    int j;
    
    for(i=0;i<5;i++){
                     int najmanji=i;
                     for(j=i+1; j<5; j++) if(polje[j]<polje[najmanji]) najmanji=j;
                     char pomoc=polje[najmanji];
                     polje[najmanji]=polje[i];
                     polje[i]=pomoc;
                     }//for(i)
    
    cout<<"Sortirano polje: ";
    
    for(i=0;i<5;i++) cout<<polje[i]<<", ";

    cout<<"\b\b."<<endl;
    
    cout<<"Obratno ispisano sortirano polje: ";
    
    for(i=4;i>=0;i--) cout<<polje[i]<<", ";
    
  
   cout<<endl<<endl;
   system("pause");
   return 0;    
}//main

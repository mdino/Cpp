#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;


int main(){
    
    int n;
    int brojac[1000]={0};
        
    cout<<"Unesi kolkiko brojeva: ";
    cin>>n;
    
    int *polje;
    polje=new int [n];
    
    for(int i=0;i<n;i++){
            cout << "Unesite "<< i+1 << ". broj: ";
            cin>>polje[i];
            }
    
    
    for(int i=0;i<n;i++){
              
    int djelitelj=2;
    int kraj=polje[i]/2+1;
    
    cout<<"\nProsti faktori broja "<<polje[i]<<": ";
    
    while(djelitelj<kraj){
                    while(polje[i]%djelitelj==0){
                                         cout<<djelitelj<<", ";
                                         brojac[djelitelj]++;
                                         polje[i]/=djelitelj;    
                                             }//while
                    djelitelj++;            
                                 }//while
                    cout<<"\b\b."<<endl;
                                 }
    
   delete[]polje;
   
   for(int i=1;i<1000;i++) if(brojac[i]) cout<<"Sa brojem: "<<i<<" djelio sam "<<brojac[i]<<". puta."<<endl;
                        
    system("pause");
    return 0;   
}

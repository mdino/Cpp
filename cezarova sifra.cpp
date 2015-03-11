#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    
    char ime[50];
    char out[50];
    char slovo[50];
    int n,kript;
    fstream dat;
    
    cout<<"Unesi ime datoteke(.txt): ";
    cin.getline(ime,50);
    
    cout<<"Koliko slova zelite unijeti: ";
    cin>>n;
    
    dat.open(ime,ios::out);
    for(int i=0;i<n;i++){
            cout<<"Unesi "<<i+1<<". slovo: ";
            cin>>slovo[i];
            dat<<slovo[i];
            }
   
    dat.close();dat.clear();
    
    cin.ignore();
    cout<<"Unesi ime nove datoteke(txt): ";
    cin.getline(out,50);
    
    cout<<"Unesi pomak: ";
    cin>>kript;
    
    dat.open(out,ios::out);
    for (int i=0;i<n;i++){
                          slovo[i]+=kript;
                          if(slovo[i]>90) slovo[i]=64+slovo[i]-90;
                          else if(slovo[i]>122) slovo[i]=96+slovo[i]-122;
                          dat<<slovo[i];
                          cout<<slovo[i]<<", ";
                          }
    cout<<endl;           
     dat.close();dat.clear();
    
    system("pause");
    return 0;   
}

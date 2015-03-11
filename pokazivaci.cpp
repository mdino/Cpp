#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;


int main(){
    
    int brojac[26];
    int i;
    
    int n;
    cout<<"Koliko znakova: ";
    cin>>n;
    
    
    char** recenica;
    recenica=new char*[n];
    
    for(i=0;i<n;i++) recenica[i]=new char[100];
    
     cin.ignore();
    for(int j=0;j<n;j++){
                    
                     cout<<"Unesite recenicu: ";
                     cin.getline(recenica[j],100);
                     }
    
     for(i=0;i<n;i++) delete[]recenica[i];
     delete[]recenica;
    
    
    system("pause");
    return 0;   
}

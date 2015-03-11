#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    
    int polje[5];
    int indeks;
    
    for(int i=0;true;i++){
            indeks=i%5;
            cout<<"polje "<<indeks<<": ";
            cin>>polje[indeks];
            if(polje[indeks]==0)break;
            }
    for(int i=0;i<5;i++) cout<<polje[i]<<endl;
    
    system("pause");
    return 0;   
}

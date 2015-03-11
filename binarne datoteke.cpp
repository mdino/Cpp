#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    
    struct podaci_t{
           char ime[20];
           int godine;
           };
    podaci_t podatak;
    
    fstream dat;
    dat.open("datoteka.dat", ios::out|ios::binary);
    
    for(int i=0;i<5;i++){
            cout<<"Ime: ";
            cin>>podatak.ime;
            cout<<"Godine: ";
            cin>>podatak.godine;
            dat.write((char*)&podatak,sizeof(podaci_t));
            }
    dat.close(); dat.clear();
    cout<<endl;
    
    dat.open("datoteka.dat", ios::in | ios::binary);
    while(true){
                dat.read((char*)&podatak,sizeof(podaci_t));
                if(dat.eof())break;
                cout<<"ime: "<<podatak.ime<<endl;
                cout<<"god: "<<podatak.godine<<endl;
                }
    dat.close();dat.clear();
    
    
    system("pause");
    return 0;   
}

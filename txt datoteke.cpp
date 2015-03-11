#include <iostream>
#include <fstream>

using namespace std;

int main(){
    
    int broj[4];
    fstream dat;
    
    dat.open("brojevi.txt",ios::out); //out sluzi za ispis sadržaja u datoteku
    for(int i=0;i<5;i++){
            cout<<"Unesi "<<i+1<<". broj: ";
            cin>>broj[i];
            dat<<broj[i]<<endl;
            }
    dat.close();dat.clear();
    
    dat.open("brojevi.txt",ios::in);//sluzi za èitanje podataka iz datoeke
    
    for(int i=0;i<5;i++){
               if(dat.eof())break;
                dat>>broj[i];
                cout<<broj[i]<<endl;
                }
                         
    dat.close();dat.clear();
    

    
    
    
    
    
    system("pause");
    return 0;   
}

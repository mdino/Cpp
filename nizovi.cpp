#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    
    int brNizova;
    fstream binar;
    
    struct infoRijec_t{
           int brSlova;
           char rijec[20];
           };
    
    cout<<"Koliko nizova: ";
    cin>>brNizova;
    
    infoRijec_t *nizovi;
    nizovi=new infoRijec_t[brNizova];
    
    cin.ignore();
    for(int i=0;i<brNizova;i++){
                                cout<<"Upisi rijec: ";
                                cin.getline(nizovi[i].rijec,20);
                                nizovi[i].brSlova=strlen(nizovi[i].rijec);
                                }
    
    for(int i=brNizova-1;i>=0;i--){
            for(int j=0;j<i;j++){
                    if(nizovi[j].brSlova>nizovi[j+1].brSlova){
                                                              infoRijec_t pomoc=nizovi[j];
                                                              nizovi[j]=nizovi[j+1];
                                                              nizovi[j+1]=pomoc;
                                                              }
                                                              }
                                                              }
    
    binar.open("rijec.dat",ios::out|ios::binary);
    
    for(int i=0;i<brNizova;i++) binar.write((char*)&nizovi[i],sizeof(infoRijec_t));
    
    binar.close();
    binar.clear();
    delete[]nizovi;
    
                                

    system("pause");
    return 0;
}//main

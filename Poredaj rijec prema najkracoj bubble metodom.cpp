#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(){
 unsigned short int brNizova;
 fstream binar;
 
 struct infoRijec_t{
        unsigned short int brSlova;
        char rijec[20];
        };
 
 cout<<"Koliko nizova? ";
 cin>>brNizova;
 
 infoRijec_t* nizovi;
 nizovi=new infoRijec_t[brNizova];
 
 cin.ignore();
 
 for(int i=0;i<brNizova;i++){
         cout<<"Unesi rijec: ";
         cin.getline(nizovi[i].rijec,20);
         nizovi[i].brSlova=strlen(nizovi[i].rijec);
         }//for
 
 for(int i=brNizova-1;i>=0;i--){
                      for(int j=0;j<i;j++){
                                       if(nizovi[j].brSlova>nizovi[j+1].brSlova){
                                                             infoRijec_t pomoc=nizovi[j];
                                                             nizovi[j]=nizovi[j+1];
                                                             nizovi[j+1]=pomoc;
                                                             }//if
                                       }//for(j)
                      }//for(i)
 
 binar.open("rijeci.dat",ios::out|ios::binary);
 
 for(int i=0;i<brNizova;i++) binar.write((char*)&nizovi[i],sizeof(infoRijec_t));
 
 binar.clear();
 binar.close();        
 delete[]nizovi;
 
 infoRijec_t *citaj;
 citaj=new infoRijec_t[brNizova];
 
 binar.open("rijeci.dat",ios::in|ios::binary);
 for(int i=0;i<brNizova;i++){
                             binar.read((char*)&citaj[i],sizeof(infoRijec_t));
                             cout<<citaj[i].brSlova<<endl;
                             cout<<citaj[i].rijec<<endl<<endl;
                             }
                             
 
 binar.close();
 binar.clear();
 
 system("pause");
 return 0;   
}

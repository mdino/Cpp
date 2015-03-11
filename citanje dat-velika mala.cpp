#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(){

 
 string imeDatoteke,ucitano;
 cout<<"Ime datoteke: ";
 cin.ignore();
 getline(cin,imeDatoteke);
 
 cout<<"IME: "<<imeDatoteke;
 
 fstream citaj;
 fstream pisi;
 citaj.open(imeDatoteke.c_str(),ios::in);
 int i=-1,brojac=0;
 
 while(1){
          citaj.read((char*)&ucitano,sizeof(char));
          if (citaj.eof()) break;
          if(ucitano[i]<=172 && ucitano[i]>=97){
                                                brojac++;
                                                ucitano[i]-=32;
                                                }//if
          }//while
          
 citaj.close();
 citaj.clear();
 
 imeDatoteke="Nova"+imeDatoteke;
 
 pisi.open(imeDatoteke.c_str(),ios::out);
 
 pisi<<ucitano.c_str();
 
 pisi.close();
 pisi.clear();          
 
 cout<<endl<<endl;
 system("pause");
 return 0;   
}

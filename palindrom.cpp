#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main(){
 fstream citaj;
 string imeDatoteke;
 string tekst;
 
 cout<<"Ime datoteke: ";
 getline(cin, imeDatoteke);
 
 citaj.open(imeDatoteke.c_str(), ios::in);
 int i=-1;
 int poc,kraj,pocIspis,krajIspis=-2;
 bool palindrom=false,zavrsi=false;
 
 poc=0;
 
 while(1){
          citaj.read((char*)&tekst[++i], 1);
          if(citaj.eof()) {tekst[--i]=' ';zavrsi=true;}
          
          if(tekst[i]==' '){
                            pocIspis=poc;
                            krajIspis=kraj=i-1;
                            palindrom=true;
                            while(poc<kraj) if(!(tekst[poc++]==tekst[kraj--])) {palindrom=false;break;}
                            }//if
          
          poc=krajIspis+2;
          
          if(palindrom){
                        cout<<"Palindrom: ";
                        for(int j=pocIspis;j<=krajIspis;j++) cout<<tekst[j];
                        cout<<endl;
                        palindrom=false;
                        }//if
          
          if(zavrsi) break;
          }//while
 
 citaj.close();
 citaj.clear();
 system("pause");
 return 0;   
}

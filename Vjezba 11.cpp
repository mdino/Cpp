#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(){
 //1. B-ti bit integera N
 
 int N,B;
 cout<<"N = ";
 cin>>N;
 cout<<"B = ";
 cin>>B;
 
 for(int i=0;i<=B-1;i++) N/=2;
 
 cout<<B<<". bit: "<<N%2;
 
 cout<<endl<<endl;
 system("pause");
 
 //2. Parovi i najmanji višekratnik
 
 struct par_t{
        unsigned int prvi,drugi;
        unsigned int visekratnik;
        };

 cout<<"Broj parova? ";
 cin>>N;
 
 par_t* parovi=new par_t[N];
 
 fstream pisi;
 pisi.open("paroviVisekratnici.dat",ios::binary|ios::out);
 
 for(int i=0;i<N;i++){
         cout<<"Prvi: ";
         cin>>(*(parovi+i)).prvi;
         cout<<"Drugi: ";
         cin>>parovi[i].drugi;
         
         int veci=parovi[i].prvi;
         int manji;
         
         if (parovi[i].drugi<veci) manji=parovi[i].drugi;
         else {veci=parovi[i].drugi; manji=parovi[i].prvi;}
         int temp=veci;
         
         while(1){
                  if(temp%manji==0) {parovi[i].visekratnik=veci;break;}
                  temp+=veci;
                  }//while
                  
         pisi.write((char*)&parovi[i],sizeof(par_t));
         }//for
 
 delete[]parovi;
 pisi.close();
 pisi.clear();
 
 cout<<endl<<endl;
 system("pause");
 
 //3. potenciranje bez cmath
 
 cout<<"X: ";
 int X;
 cin>>X;
 cout<<"B: ";
 cin>>B;
 N=1;
 
 for(int i=0;i<B;i++) N=N*X;
 
 cout<<X<<" ^ "<<B<<" = "<<N; 
 
 cout<<endl<<endl;
 system("pause");
 
 //4.Datoteka, velika i mala slova
 
 string imeDatoteke,ucitano;
 cout<<"Ime datoteke: ";
 cin.ignore();
 getline(cin,imeDatoteke);
 
 cout<<"IME: "<<imeDatoteke;
 
 fstream citaj;
 citaj.open(imeDatoteke.c_str(),ios::in);
 int i=-1,brojac=0;
 
 while(1){
          citaj.read(&ucitano[++i],sizeof(char));
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

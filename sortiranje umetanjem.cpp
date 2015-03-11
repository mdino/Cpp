#include <iostream>
#include <cstring>
using namespace std;

int main(){

    int i;
    
    
    int j;
    char slovo[10];
    

    
    for(i=0;i<10;i++){
                     cout<<"Unesi "<<i+1<<". slovo: ";
                     cin >> slovo[i];
                     }
    
    for(i=1;i<10;i++){
                      char pamti=slovo[i];
                      j=i;
                      
                      while(--j>-1){
                                    if(slovo[j]>pamti) break;
                                    slovo[j+1]=slovo[j];
                                    }
                                 
                      slovo[j+1]=pamti;
                      }
                     
    cout<<"\nSORTIRANO: "<<slovo<<endl<<endl;
    
    for(i=0;i<10;i++){
                      int brojac=1;
                      while(slovo[i]==slovo[i+1]) {brojac++;i++;}
                      cout<<"Slovo "<<slovo[i]<<" se pojavljuje "<<brojac<<" puta u polju."<<endl;
                      }
                      


   
   cout<<endl<<endl;
   system("pause");
   return 0;    
}//main

#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;


int main(){
    
    int i,j;
    char unos[10];
    cout<<"Unesite rijec: ";
    cin.getline(unos,10);
    int n = strlen(unos);
    
    char polje[10];
    int unikat=0;
    bool isti=false;
    
    for(int i=0;i<n;i++){
                          isti=false;
                          for(j=0;j<unikat;j++){
                                               if(unos[i]==polje[j]){isti=true;break;} 
                                                }
                          if (!isti) polje[unikat++]=unos[i];
                          }
    polje[unikat]='\0';
    
    for(i=1;i<unikat;i++){
                      char pamti=polje[i];
                      j=i;
                      while(--j>-1){
                                    if(polje[j]<pamti) break;
                                    polje[j+1]=polje[j];
                                    }
                                 
                      polje[j+1]=pamti;
                      }
    
    
    do{
       cout<<polje<<endl;
       }while(next_permutation(polje, polje+unikat));


    

system("pause");
return 0;
}

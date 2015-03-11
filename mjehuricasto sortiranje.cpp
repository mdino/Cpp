#include <iostream>
#include <cstring>
using namespace std;

int main(){
    

    int i;
    int j;

                      
    float broj[10];
    
    for(i=0;i<10;i++){
                      cout<<"Unesi "<<i+1<<". broj: ";
                      cin >> broj[i];
                      }
    
    cout<<endl;
    
    for(i=9;i>=0;i--){
                      for(j=0;j<i;j++){
                                       if(broj[j]>broj[j+1]){
                                                             float pomoc=broj[j];
                                                             broj[j]=broj[j+1];
                                                             broj[j+1]=pomoc;
                                                             }//if
                                       }//for(j)
                      }//for(i)
   
   
    cout<<"\nVrijednosti u polju: ";
    
    for(i=0;i<10;i++) cout<<broj[i]<<", ";
   
   
   cout<<endl<<endl;
   system("pause");
   return 0;    
}//main

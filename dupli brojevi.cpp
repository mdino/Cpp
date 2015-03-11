#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    
    int n; 
    
    int *polje; ////pokazivac imenom "polje" koji pokazuje na element tipa int
    polje=new int[n]; //u pokazivac imenom polje zapisujemo lokaciju na kojoj se nalazi polje od n int-ova
    
    cout<<"Koliko brojeva zelite unijeti: ";
    cin>>n;
    
    for(int i=0;i<n;i++){
                         cout<<"Unesi "<<i+1<<". broj: ";
                         cin>>polje[i];
                         for(int j=0;j<i;j++){
                                              if(polje[i]==polje[j]){
                                                                     i--;
                                                                     cout<<"Ponovite unos."<<endl;
                                                                      }
                                              } 
                                 }
    for(int i=0;i<n;i++) cout<<polje[i]<<endl;
    
    
    
    system("pause");
    return 0;   
}

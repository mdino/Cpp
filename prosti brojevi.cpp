#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;


int main(){
    
    int n;
    
    cout<<"Unesi broj: ";
    cin>>n;
    
    bool prost=true;
    for(int k=2;k<=sqrt(n);k++) if(n%k==0) prost=false;
    
    if(prost) cout<<"prost je. ";
    else cout<<"nije prost";
    cout<<endl;                             
    
                        
    system("pause");
    return 0;   
}

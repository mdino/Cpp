#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    
    int n;
    int suma=1;
    
    cout<<"Unesi broj: ";
    cin>>n;
    
    for(int i=1;i<=n;i++) suma=suma*i;
    
    cout<<"Faktorijela broja "<<n<<" je: "<<suma<<endl;
    
    
    system("pause");
    return 0;   
}

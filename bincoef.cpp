#include <iostream>
#include <fstream>

using namespace std;

int bincoef(int N, int K){
    if(N==0 || K==0 || K==N) return 0;
    else return bincoef(N-1,K)+bincoef(N-1,K-1);
}

int main(){
    
    do{
       cout<<"Unesi N: ";
       cin>>N;
       cout<<"Unesi K: ";
       cin>>K;
       }while(N<K || N<0 || K<0);
    
    cout<<"Rez: "<<binceof(N,K)<<endl;    
    
    
    system("pause");
    return 0;   
}

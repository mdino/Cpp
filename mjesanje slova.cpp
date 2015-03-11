#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    
    int n,i,j;
    cout<<"Unesi koliko recenica zelite unijeti: ";
    cin>>n;
    
    char recenica[n][100];
    
    cin.ignore();
    for(i=0;i<n;i++){
            cout<<"Unesite "<<i+1<<". recenicu: ";
            cin.getline(recenica[i],100);
                          }
    for(i=0;i<n;i++){ 
            for(j=0;j<strlen(recenica[i]);j++){
                if (recenica[i][j]==' ') i--;
                else if(j%2!=0 && recenica[i][j]>='A' && recenica[i][j]<='Z') recenica[i][j]+=32;
                else if(j%2==0 && recenica[i][j]>='a' && recenica[i][j]<='z') recenica[i][j]-=32;
                
                else if(j%2==0 && recenica[i][j]>='A' && recenica[i][j]<='Z') continue;
                else if(j%2!=0 && recenica[i][j]>='a' && recenica[i][j]<='z') continue;
                }//j
                recenica[i][j]='\0';                                                         
            }//i
    
    fstream dat;
    dat.open("mjesanje.dat",ios::out|ios::binary);
    for(i=0;i<n;i++){
                     dat.write((char*)&recenica[i],sizeof(recenica));
                     cout<<recenica[i]<<endl;
                     }
    dat.close();dat.clear();
    
    cout<<endl;
    
    dat.open("mjesanje.dat",ios::in|ios::binary);
    for(i=0;i<n;i++){
                     dat.read((char*)&recenica[i],sizeof(recenica));
                     if(dat.eof())break;
                     cout<<recenica[i];
                     }
    dat.close();dat.clear();
                     
                     
    
                       
    
    
    system("pause");
    return 0;   
}

#include <iostream>
#include <cstring>
#include <cmath>
#include <fstream>

using namespace std;

int main(){
    int izbor=1;
    
    while(izbor!=0){
                    system("cls");
                    cout<<"1. zad."<<endl;
                    cout<<"2. zad."<<endl;
                    cout<<"0 prekid."<<endl;
                    
                    cout<<"Izbor: ";
                    cin>>izbor;
                    
                    switch(izbor){
                                  case 0: break;
                                  
                                  case 1:
                                         system("cls");
                                         
                                         cout<<endl<<endl;
                                         system("pause");
                                         break;
                                         
                                  case 2: system("cls");
                                          
                                          cout<<endl<<endl;
                                          system("pause");
                                          break;
                                  
                                  default: system("cls");
                                           cout<<"Krivi unos: ";
                                           system("pause");
                                           break;
                                  }
                    }//while
}//main

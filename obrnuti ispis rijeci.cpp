
/* Zadatak:
Korisnik unosi re.enicu maksimalne duljine 100 znakova. Potom svaka rije. se ispisuje u
obrnutom poretku, ali poredak rije.i u re.enici ostaje nepromijenjen. Takoner treba voditi
brigo o interpunkcijskim znakovima koji moraju biti na kraju re.enice
*/


#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>


using namespace std;
int main(){
    char recenica[100];
    cout << "Unesite recenicu: ";
    cin.getline(recenica,100);
    for(int i=0;i<strlen(recenica);i++){
                                        if(recenica[i]==' ' || recenica[i]=='.'){
                                                             for(int j=i-1;recenica[j]!=' ' && j>-1;j--) cout<<recenica[j];
                                                             cout<<recenica[i];
                                                          }//if
            }//for(i)
    system("pause");
    return 0;   
}

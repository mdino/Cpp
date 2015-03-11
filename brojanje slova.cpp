/* Unesite cijeli broj N i N znakovnih nizova. Potrebno je ispisati koliko se pojedino slovo javlja
u svim znakovnim nizovima. Dakle, na ekran se ne ispisuje pojavljivanje pojedinog slova za
svaki znakovni niz, nago za sve nizove zajedno. Mala i velika slova raèunaju se zajedno.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    
    int brojac[26];
    for(int i=0;i<26;i++) brojac[i]=0;
    
    int n;
    cout<<"Unesi broj nizova: ";
    cin>>n;
    
    char recenica[n][100];
    cin.ignore();
    for(int i=0;i<n;i++){
            cout<<"Unesi recenicu: ";
            cin.getline(recenica[i],100);
            }
    
    for(int i=0;i<n;i++){
                         for(int j=0;j<strlen(recenica[i]);j++){
                                 if(recenica[i][j]>='a' && recenica[i][j]<='z'){
                                                        char indeks=recenica[i][j]-'a';
                                                        brojac[indeks]++;
                                                        }
                                                        }
                                                        }
    
    for(int i=0;i<n;i++){
                         for(int j=0;j<strlen(recenica[i]);j++){
                                 if(recenica[i][j]>='a' && recenica[i][j]<='z'){
                                                        char indeks=recenica[i][j]-'a';
                                                        brojac[indeks]++;
                                                        }
                                                        }
                                                        }
    
    for(int i=0;i<26;i++){
            if(brojac[i]!=0){
                             int pomoc=i+'A';
                             cout<<(char)pomoc<<": ";
                             cout<<brojac[i]<<endl;
                             }
                             }
    system("pause");
    return 0;   
}

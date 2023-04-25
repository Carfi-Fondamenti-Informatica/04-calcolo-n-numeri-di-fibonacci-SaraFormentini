#include <iostream>
using namespace std;

int main() {
   int n=0, i=0,primo=1,secondo=1,terzo,c;
   cin>>n;
   c=n-2;
   if (n>=2){
       cout<<primo<<endl;
       cout<<secondo<<endl;
       while(i<c) {
           terzo = primo + secondo;
           primo = secondo;
           secondo = terzo;
           i++;
           cout << terzo << endl;
   }}else {
       cout<<"errore"<<endl;
       }

    return 0;
}

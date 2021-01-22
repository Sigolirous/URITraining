/* URI 1028 - Augusto Sigolo */
#include <iostream>
using namespace std;
void mdd (int f1, int f2){
    int aux1, mem;
    if(f1 > f2){
        aux1 = f1;
        f1 = f2;
        f2 = aux1;
    }
    mem = f2 % f1;
    if(mem != 0){
        aux1 = f2;
        f2 = f1;
        f1 = aux1;
        f1 = f2;
        f2 = mem;
        mdd(f1, f2);
    }else if(mem == 0){
        cout<<f1<<endl;
    }
    
}
int main(){
    int f1, f2, n;
    cin>>n;
    do{
        cin>>f1;
        cin>>f2;
        mdd(f1, f2);
        --n;
        }while (n !=0);
    return 0;
}
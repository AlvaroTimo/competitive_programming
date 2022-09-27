#include<iostream>
using namespace std;

char indicarRelacion(int num1,int num2){
    if(num1>num2)
        return '>';
    if(num1<num2)
        return '<';
    return '=';
}

bool validarNumero(int num){
    if(num >= 1000000001)
        return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    //t es el numero de sets y debe ser menor a 15
    int t;
    cin>>t;

    if(t>=15)
        return 0;

    int a,b;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(validarNumero(a) && validarNumero(b))
            cout<<indicarRelacion(a,b)<<endl;
    }
}
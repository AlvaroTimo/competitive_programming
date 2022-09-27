#include <iostream>

using namespace std;

void calcularDesplazamiento(int velocidad,int tiempo){
    if(velocidad<-100 || velocidad>100 || tiempo<0 || tiempo>200)
        return ;
    int distanciaRecorrida=velocidad*tiempo;
    cout<<distanciaRecorrida*2<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    int velocidad,tiempo;
    while(cin>>velocidad>>tiempo)
        calcularDesplazamiento(velocidad,tiempo);
    return 0;
}
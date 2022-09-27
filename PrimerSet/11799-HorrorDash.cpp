#include<iostream>
#include<vector>
using namespace std;

int encontrarVelocidad(vector<int> &V){
    int mayor=V[0];
    for(int i=1;i<V.size();i++){
        if(V[i]>mayor)
            mayor=V[i];
    }
    V.clear();
    return mayor;
}

int main(){
    ios_base::sync_with_stdio(false);
    int T;
    cin>>T;
    if(T>50)
        return 0;

    int nmounstros,mounstro;
    vector<int> mounstros;
    for(int i=0;i<T;i++){
        cin>>nmounstros;
        if(nmounstros<1 || nmounstros>100)
            return 0;
        mounstros.reserve(nmounstros);
        for(int j=0;j<nmounstros;j++){
            cin>>mounstro;
            if(mounstro<1 || mounstro>10000)
                return 0;
            mounstros.push_back(mounstro);
        }
        cout<<"Case "<< i+1<< ": "<<encontrarVelocidad(mounstros)<<endl;
    }
}
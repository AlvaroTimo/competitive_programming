#include<iostream>
#include<utility>
#include<vector>


#define output(relevantes) for(int j=0;j<relevantes.size();j++) cout<<relevantes[j]<<endl

using namespace std;

void mostrarRelevantes(vector<pair<string,int> >&lineas){
    vector<string> relevantes;
    relevantes.push_back(lineas[0].first);
    int mayor=lineas[0].second;
    for (int i = 1; i < 10; i++)
    {
        if(lineas[i].second>mayor){
            relevantes.clear();
            mayor=lineas[i].second;
            relevantes.push_back(lineas[i].first);
        }
        else if (lineas[i].second==mayor)
            relevantes.push_back(lineas[i].first);
    }

    output(relevantes);
    
    lineas.clear();
}

int main(){
    ios_base::sync_with_stdio(false);
    int T;
    cin>>T;
    string url;
    int prioridad;
    vector<pair<string,int> >lineas;
    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin>>url>>prioridad;
            if(url.length()<1 || url.length()>100)
                return 0;
            pair<string,int> linea;
            linea.first=url;
            linea.second=prioridad;
            lineas.push_back(linea);
        }
        cout<<"Case #"<<i+1<<":"<<endl;
        mostrarRelevantes(lineas);
    }
    return 0;
}
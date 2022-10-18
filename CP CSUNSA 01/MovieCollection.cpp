#include<iostream>
#include<utility>
#include<list>
using namespace std;

void inicializarLista(list<pair<int,int> >&movies,int m){
    for(int i=1;i<=m;i++)
        movies.push_back(make_pair(i,i-1));
}

int findPos(list<pair<int,int> >&movies,int movie){
    list<pair<int,int> >::iterator it;
    int pos=0;
    for (it = movies.begin(); it != movies.end(); ++it){
        if(it->first==movie){
            pos=it->second;
            it->second=0;
        }
        else if(it->second<movie){
            it->second+=1;
        }
    }
    return pos;
}

int main(){
    ios::sync_with_stdio(false);
    int n,m,r,lectura;
    
    list<pair<int,int> > movies;
    cin>>n;
    if(n>100) return 0;
    for(int i=0;i<n;i++){
        cin>>m>>r;
        inicializarLista(movies,m);
        for(int j=0;j<r;j++){
            cin>>lectura;
            cout<<findPos(movies,lectura)<<" ";
        }
        cout<<endl;
        movies.clear();
    }
}
#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N,B,H,W;
    while(cin>>N>>B>>H>>W){
        int p,ws,minCost=B+1;
        for(int i=0;i<H;i++){
            cin>>p;
            for(int j=0;j<W;j++){
                cin>>ws;
                if(ws>=N && p*N<=minCost) minCost=p*N;
            }
        }
        if(minCost<=B) cout<<minCost<<'\n';
        else cout<<"stay home\n";
    }
    return 0;
}
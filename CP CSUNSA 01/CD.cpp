#include<iostream>
#include<vector>
using namespace std;

void JackAndJill(vector<int> &Jack,vector<int>&Jill){
    int i=0,j=0,aux=0,common=0;
    while(i<Jack.size()&&j<Jill.size()){
        if(Jack[i]<Jill[j])
            i++;
        if(Jack[i]>Jill[j])
            j++;
        if(Jack[i]==Jill[j]){
            common++;
            i++;
            j++;
        }
    }
    cout<<common<<endl;
    Jack.clear();
    Jill.clear();
}

int main(){
    ios::sync_with_stdio(false);
    int n,m,lectura;
    while (cin>>n>>m)
    {
        if(n==0 || m==0)
            return 0;

        vector<int> Jack,Jill;
        for(int i=0;i<n;i++){
            cin>>lectura;
            Jack.push_back(lectura);
        }
        for(int j=0;j<m;j++){
            cin>>lectura;
            Jill.push_back(lectura);
        }
        JackAndJill(Jack,Jill);
    }
}
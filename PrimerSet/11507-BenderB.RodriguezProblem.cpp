#include<iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int testCases;
    cin>>testCases;

    int amplitude,frequency;
    string trash;

    for(int i=0;i<testCases;i++){
        cin>>amplitude;
        cin>>frequency;

        for(int j=0;j<frequency;j++){
            for(int i=1;i<=amplitude;i++){
                for(int k=0;k<i;k++)
                    cout<<i;
                cout<<'\n';
            }
            for(int i=amplitude-1;i>=1;i--){
                for(int k=0;k<i;k++)
                    cout<<i;
                cout<<'\n';
            }
            if(j!=frequency-1) cout<<'\n';
        }
        if(i!=testCases-1) cout<<'\n';
    }
}
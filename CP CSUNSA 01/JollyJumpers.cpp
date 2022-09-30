#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

#define limitN 3000
#define limitNum 300000

int main(){
    ios_base::sync_with_stdio(false);
    int n,num,difference,pre;
    bool aux;
    while(cin>>n){
        if(n>limitN) return 0;
        vector<bool> is_jolly(n,false);
        aux=true;
        cin>>num;
        for (int i = 1; i < n; i++)
        {
            pre=num;
            cin>>num;
            if(abs(num)>limitNum)   return 0;
            difference=abs(num-pre);
            if(difference<=0 || difference>n-1)
                aux=false;
            if(is_jolly[difference])
                aux=false;
            else
                is_jolly[difference]=true;
        }
        if(aux)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
    }
}
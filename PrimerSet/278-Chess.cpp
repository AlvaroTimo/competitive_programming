#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        char piece;
        int rows,columns;
        cin>>piece>>rows>>columns;

        switch (piece)
        {
        case 'r':
            (rows<columns)? cout<<rows<<'\n' : cout<<columns<<'\n';
            break;
        case 'k':{
            int result= (rows%2==0)? (rows/2)*columns:((rows-1)/2)*columns+(columns/2);
            cout<<result<<'\n';
            break;
        }
        case 'Q':
            (rows<columns)? cout<<rows<<'\n' : cout<<columns<<'\n';
            break;
        case 'K':{
            int kingsR= (rows+1)/2,kingsC=(columns+1)/2;
            cout<<kingsR*kingsC<<'\n';
            break;
        }
        }
    }
}
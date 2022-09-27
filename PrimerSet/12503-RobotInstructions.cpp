#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int instrucciones[101], T, n, nroInstruccion, pos;
    string instruccion;
    cin>>T;

    while( T-- ) {
        for(int i=0; i < 101 ; i++) instrucciones[i] = 0;

        cin>>n;
        pos = 0;

        for(int i=1 ; i <= n; i++) {
            cin>>instruccion;
            if(instruccion == "LEFT") {
                instrucciones[i] = -1;
                pos -= 1;
            }
            else if (instruccion == "RIGHT") {
                instrucciones[i] = 1;
                pos += 1;
            }
            else {
                cin>>instruccion>>nroInstruccion;
                instrucciones[i] = instrucciones[nroInstruccion];
                pos += instrucciones[nroInstruccion];
            }
        }
        cout<<pos<<endl;
    }
    return 0;
}
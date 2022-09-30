#include <iostream>
#include <map>

using namespace std;

void intializeTable(map<char, string>& values) {
    values['B']="1";
    values['F']="1";
    values['P']="1";
    values['V']="1";

    values['C']="2";
    values['G']="2";
    values['J']="2";
    values['K']="2";
    values['Q']="2";
    values['S']="2";
    values['X']="2";
    values['Z']="2";

    values['D']="3";
    values['T']="3";

    values['L']="4";

    values['M']="5";
    values['N']="5";

    values['R']="6";
}

int main() {
    map<char, string> values;
    intializeTable(values);
    string word, equivalent;
    while(cin>>word) {
        equivalent = values[word[0]];
        for(int i = 1; i < word.size(); i++) 
            if(values[word[i]] != values[word[i-1]])
                equivalent += values[word[i]];
        cout << equivalent << endl;
    }
    return 0;
}
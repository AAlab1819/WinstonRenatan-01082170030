#include<bits/stdc++.h>
using namespace std;

int main() {
    //DECLARE VARIABLES
    int charNum, delForbid=0;
    string strs;
    //INPUT
    cin>>charNum;
    cin>>strs;
    //LOOP ALL THE CHARACTERS
    for (int i=0; i<charNum; i++) {
        if (strs[i]=='x' && strs[i+1]=='x' && strs[i+2]=='x') {
            delForbid++;
        }
    }
    //OUTPUT
    cout<<delForbid<<endl;

    return 0;
}

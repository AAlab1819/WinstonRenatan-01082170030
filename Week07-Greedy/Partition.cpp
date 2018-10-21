#include<bits/stdc++.h>
using namespace std;

int main() {
    //VARIABLE DECLARATION
    int numEle, valEle;
    int B=0, C=0;
    //INPUT NUMBER OF ELEMENT
    cin>>numEle;
    //LOOP ELEMENTS INPUT
    for (int i=0; i<numEle; i++) {
        cin>>valEle;
        //IF ELEMENT IS POSITIVE WE PUT IT TO B
        if (valEle>0) {
            B=B+valEle;
        }
        //IF ELEMENT IS NEGATIVE WE PUT IT TO C
        else {
            C=C+valEle;
        }
    }
    //OUTPUT THE ANSWER
    cout<<B-C<<endl;

    return 0;
}

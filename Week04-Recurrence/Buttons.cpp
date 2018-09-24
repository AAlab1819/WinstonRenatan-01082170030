#include<bits/stdc++.h>
using namespace std;

int main() {
    //DECLARING VARIABLES
    int numberOfLock;
    long long int totalPush=0;
    //INPUT
    cin>>numberOfLock;
    //NUMBER OF ROUND
    for (int i=1; i<numberOfLock; i++) {
        //VARIABLE I INDICATES I-TH NUMBER TO BE FOUND
        //PUSH NEEDED TO BE DONE TO GET A NUMBER IN CORRECT PLACE
        totalPush=totalPush+((numberOfLock-i)*i);
    }
    //LAST PUSH TO OPEN
    totalPush=totalPush+numberOfLock;
    //OUTPUT
    cout<<totalPush<<endl;

    return 0;
}

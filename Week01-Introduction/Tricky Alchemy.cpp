#include<bits/stdc++.h>
using namespace std;

int main() {
    //DECLARING VARIABLES
    long long int yellowCrys, blueCrys;
    long long int yellowBall, greenBall, blueBall;
    long long int needYC, needBC, needCrys;
    //INPUT
    cin>>yellowCrys>>blueCrys;
    cin>>yellowBall>>greenBall>>blueBall;
    //COUNTING NEED FOR EACH CRYSTAL
    needYC=(yellowBall*2)+greenBall-yellowCrys;
    needBC=(blueBall*3)+greenBall-blueCrys;
    //IF CRYSTAL NEEDED LESS THAN WHAT GRISHA HAVE
    if (needYC<0) {
        needYC=0;
    }
    if (needBC<0) {
        needBC=0;
    }
    //TOTAL NEED FOR BOTH CRYSTAL
    needCrys=needYC+needBC;
    //OUTPUT
    cout<<needCrys<<endl;

    return 0;
}

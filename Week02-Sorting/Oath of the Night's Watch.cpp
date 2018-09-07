#include<bits/stdc++.h>
using namespace std;

int main() {
    //DECLARING VARIABLES
    int stewardsNum, stewFeed=0;
    int minStr=INT_MAX, maxStr=INT_MIN; //WEAKEST & STRONGEST STEWARD
    //INPUT NUMBER OF STEWARDS
    cin>>stewardsNum;
    int stewStrength[stewardsNum];
    //IF IT IS TWO THEN IT IS IMPOSSIBLE
    if (stewardsNum<=2) {
        //JUST FOR INPUT
        for (int i=0; i<stewardsNum; i++) {
            cin>>stewStrength[i];
        }
        //SET STEWARD FEED TO 0
        stewFeed=0;
    }
    //IF THE NUMBER OF STEWARD IS MORE THAN 2
    else {
        //INPUT THE STRENGTH OF EACH STEWARD
        for (int i=0; i<stewardsNum; i++) {
            cin>>stewStrength[i];
            //DETERMINE WHICH STEWARD IS WEAKEST & STRONGEST
            if (stewStrength[i]<minStr) {
                minStr=stewStrength[i];
            }
            if (stewStrength[i]>maxStr) {
                maxStr=stewStrength[i];
            }
        }
        //TO CHECK THE STEWARDS
        for (int i=0; i<stewardsNum; i++) {
            //IF THE STRENGTH IS NOT THE SMALLEST & LARGEST THEN IT IS IN BETWEEN
            if (stewStrength[i]!=minStr && stewStrength[i]!=maxStr) {
                //ADD THE NUMBER OF STEWARD FEED BY JON
                stewFeed++;
            }
        }
    }
    //OUTPUT THE NUMBER OF STEWARD THAT JON FEED
    cout<<stewFeed<<endl;

    return 0;
}

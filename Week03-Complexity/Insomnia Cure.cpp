#include<bits/stdc++.h>
using namespace std;

int main() {
    //DECLARING VARIABLES
    int punchedDragon, tailDragon, pawsDragon, threatDragon, totalDragon;
    int damagedDragon=0;
    //INPUT
    cin>>punchedDragon;
    cin>>tailDragon;
    cin>>pawsDragon;
    cin>>threatDragon;
    cin>>totalDragon;
    //IF ONE OF THE NUMBER IS 1, OBVIOUSLY EVERY DRAGON IS DAMAGED
    if (punchedDragon==1 || tailDragon==1 || pawsDragon==1 || threatDragon==1) {
        damagedDragon=totalDragon;
    }
    //IF THERE IS NO 1 IN ANY OF THE NUMBER
    else {
        //LOOP FROM THE FIRST TO THE LAST DRAGON
        for (int thDragon=1; thDragon<=totalDragon; thDragon++) {
            //IF THE N-TH DRAGON DIVISIBLE BY ONE OF THE NUMBER
            if (thDragon%punchedDragon==0 || thDragon%tailDragon==0 || thDragon%pawsDragon==0 || thDragon%threatDragon==0) {
                damagedDragon++;
            }
        }
    }
    //OUTPUT
    cout<<damagedDragon<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

//BUBBLE SORT CONCEPT TO SORT BOTH STRENGTH AND BONUS
void strengthSort (int numberOfDragon, int dragonS[], int bonusS[]) {
    bool swapped;
    do {
        swapped=false;
        for (int i=0; i<numberOfDragon-1; i++) {
            if (dragonS[i]>dragonS[i+1]) {
                //SWAP DRAGON'S STRENGTH
                swap(dragonS[i], dragonS[i+1]);
                //SWAP DRAGON'S BONUS
                swap(bonusS[i], bonusS[i+1]);
                swapped=true;
            }
        }
    }
    while(swapped);

}

int main() {
    //DECLARE VARIABLES
    int kiritoStrength, dragonNum;
    bool winCheck=true;
    //INPUT
    cin>>kiritoStrength>>dragonNum;
    int dragonStrength[dragonNum], bonusStrength[dragonNum];
    for (int i=0; i<dragonNum; i++) {
        cin>>dragonStrength[i];
        cin>>bonusStrength[i];
    }
    //SORT THE STRENGTH AND BONUS
    strengthSort(dragonNum, dragonStrength, bonusStrength);
    //CHECK ALL THE DRAGONS FROM SMALLEST STRENGTH
    for (int i=0; i<dragonNum; i++) {
        //CHECK WHETHER KIRITO STRENGTH IS STRONGER OR NOT THAN THE DRAGON
        if (kiritoStrength>dragonStrength[i]) {
            //ADD KIRITO STRENGTH WITH DRAGON'S BONUS
            kiritoStrength=kiritoStrength+bonusStrength[i];
        }
        //IF KIRITO'S STRENGTH IS LOWER THEN HE LOSE
        else {
            //SET WIN TO FALSE
            winCheck=false;
            break;
        }
    }
    //CHECK WHETHER HE WINS OR LOSE
    if (winCheck==true) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

    return 0;
}

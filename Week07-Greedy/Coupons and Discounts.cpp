#include<bits/stdc++.h>
using namespace std;

int main() {
    //DECLARE VARIABLES
    int numSession; bool chkPossible=true;
    //INPUT SESSION
    cin>>numSession;
    int pizzaOrder[numSession];
    //LOOP ALL THE TEAM THAT TRAINS THAT DAY
    for (int i=0; i<numSession; i++) {
        cin>>pizzaOrder[i];
    }
    //LOOP FOR CHECK
    for (int i=0; i<numSession; i++) {
        //IF THE ORDER IS NEGATIVE, THE COUPON CANNOT BE USED WHICH MEANS FALSE
        if (pizzaOrder[i]<0) {
            chkPossible=false;
        }
        //WE USE COUPON FOR ODD ORDERS
        pizzaOrder[i+1]=pizzaOrder[i+1]-pizzaOrder[i]%2;
    }
    //IF THE LAST ONE IS ODD THEN THERE WILL BE LEFT OVER COUPON
    if (pizzaOrder[numSession-1]%2==1) {
        chkPossible=false;
    }
    //IF IT IS POSSIBLE TO USE DISCOUNT AND COUPON
    if (chkPossible==true) {
        cout<<"YES"<<endl;
    }
    //IF IT IS NOT POSSIBLE TO DO SO
    else {
        cout<<"NO"<<endl;
    }

    return 0;
}

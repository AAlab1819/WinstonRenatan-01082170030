#include<bits/stdc++.h>
using namespace std;

int main() {
    //DECLARING VARIABLES
    int numberTotal, numerator, denominator;
    //INPUT
    cin>>numberTotal;
    //IF IT IS AN ODD NUMBER
    if (numberTotal%2==1) {
        //FINDING THE NUMERATOR
        numerator=numberTotal/2;
        //DENOMINATOR IS THE REST (SUBTRACT FROM NUMERATOR)
        denominator=numberTotal-numerator;
        cout<<numerator<<" "<<denominator<<endl;
    }
    //IF IT IS AN EVEN NUMBER
    else {
        numerator=numberTotal/2;
        //IF AFTER DIVIDED BY 2 IT IS EVEN
        if (numerator%2==0) {
            //REDUCE BY 1, SO THE NUMERATOR WILL BE ODD
            numerator=numerator-1;
            //DENOMINATOR IS THE REST (SUBTRACT FROM NUMERATOR)
            denominator=numberTotal-numerator;
            cout<<numerator<<" "<<denominator<<endl;
        }
        //IF AFTER DIVIDED BY 2 IT IS ODD
        else {
            //REDUCE BY 2, SO THE NUMERATOR WILL BE ODD
            numerator=numerator-2;
            //DENOMINATOR IS THE REST (SUBTRACT FROM NUMERATOR)
            denominator=numberTotal-numerator;
            cout<<numerator<<" "<<denominator<<endl;
        }
    }

    return 0;
}

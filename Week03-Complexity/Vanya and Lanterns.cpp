#include<bits/stdc++.h>
using namespace std;

int main() {
    //DECLARING VARIABLES
    int numberOfLantern, streetLength;
    double startDistance, endDistance;
    double currentDistance;
    double maximumDistance=INT_MIN, minimumRad;
    //INPUT
    cin>>numberOfLantern>>streetLength;
    double lanternPosition[numberOfLantern];
    for (int i=0; i<numberOfLantern; i++) {
        cin>>lanternPosition[i];
    }
    //SORT THE LANTERN BASED ON LOCATION
    sort(lanternPosition, lanternPosition+numberOfLantern);
    //COUNT THE DISTANCE FROM 0 TO FIRST LANTERN
    startDistance=lanternPosition[0]-0;
    //COUNT THE DISTANCE FROM THE LAST LANTERN TO THE END OF STREET
    endDistance=streetLength-lanternPosition[numberOfLantern-1];
    //IF STARTDISTANCE IS GREATER THAN ENDDISTANCE
    if (startDistance>endDistance) {
        //SET MINIMUM RADIUS TO STARTDISTANCE
        minimumRad=startDistance;
    }
    //IF IT IS EQUAL OR SMALLER
    else {
        //SET MINIMUM RADIUS TO ENDDISTANCE
        minimumRad=endDistance;
    }
    //FINDING THE LONGEST GAP BETWEEN LANTERN
    for (int i=1; i<numberOfLantern; i++) {
        currentDistance=lanternPosition[i]-lanternPosition[i-1];
        //IF CURRENTDISTANCE IS GREATER
        if (currentDistance>maximumDistance) {
            //SET MAXIMUMDISTANCE TO CURRENT
            maximumDistance=currentDistance;
        }
    }
    //DIVIDE IT BY 2, BECAUSE IT IS IN BETWEEN TWO LANTERN
    maximumDistance=maximumDistance/2.00;
    //IF MAXIMUMDISTANCE IS GREATER THAN THE MINIMUM RADIUS WE HAVE COUNT BEFORE
    if (maximumDistance>minimumRad) {
        //SET MINIMUM RADIUS TO MAXIMUMDISTANCE
        minimumRad=maximumDistance;
    }
    //OUTPUT
    cout<<fixed<<setprecision(10)<<minimumRad<<endl;

    return 0;
}

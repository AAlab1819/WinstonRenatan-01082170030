#include<bits/stdc++.h>
using namespace std;

int main() {
    //DECLARING VARIABLES
    int numberOfLevels, xCanSolve, yCanSolve, solveLevel;
    bool unsolved=false;
    //INPUT TOTAL LEVELS
    cin>>numberOfLevels;
    //DECLARE AND ASSIGN ALL LEVELS
    int allLevels[numberOfLevels];
    for (int i=0; i<numberOfLevels; i++) {
        //1 EQUALS THAT LEVEL IS UNSOLVE
        allLevels[i]=1;
    }
    //HOW MANY LEVEL CAN X SOLVE
    cin>>xCanSolve;
    for (int i=0; i<xCanSolve; i++) {
        //WHAT CAN BE SOLVE
        cin>>solveLevel;
        //MAKE THE LEVEL SOLVE
        allLevels[solveLevel-1]=0;
    }
    //HOW MANY LEVEL CAN Y SOLVE
    cin>>yCanSolve;
    for (int i=0; i<yCanSolve; i++) {
        //WHAT CAN BE SOLVE
        cin>>solveLevel;
        //MAKE THE LEVEL SOLVE
        allLevels[solveLevel-1]=0;
    }
    //LOOP TO FIND IS THERE ANY UNSOLVED LEVEL
    for (int i=0; i<numberOfLevels; i++) {
        //IF THERE IS UNSOLVED
        if (allLevels[i]==1) {
            //UNSOLVED LEVEL IS TRUE
            unsolved=true;
            break;
        }
    }
    //IF THERE IS UNSOLVED LEVEL
    if (unsolved==true) {
        cout<<"Oh, my keyboard!"<<endl;
    }
    //IF ALL LEVEL IS SOLVED
    else {
        cout<<"I become the guy."<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

//DECLARING VARIABLES
int answ=0;
int keyCount=0;
char cells[1000][1000];             //THE ORIGINAL CELL
int visitedCell[1000][1000]={0};    //VIEW CELL IS VISITED OR NOT
int ansCell[1000000]={0};           //WILL LIST ANSWERS

void floodFillUtil(int x, int y, int maxX, int maxY)
{
    //CORNER OF CELLS
    if (x<0 || x>=maxX || y<0 || y>=maxY) {
        return;
    }
    //IF THE CELL IS VISITED
    if (visitedCell[x][y] != 0) {
        return;
    }
    //IF IT IS PICTURE ADD ANSWER
    if (cells[x][y]=='*') {
        answ++;
        return;
    }
    //REPLACE VISITED CELL WITH KEYCOUNT
    visitedCell[x][y]=keyCount;
    //RECURRENCE FOR NORTH, EAST, SOUTH, AND WEST
    floodFillUtil(x+1, y, maxX, maxY);
    floodFillUtil(x-1, y, maxX, maxY);
    floodFillUtil(x, y+1, maxX, maxY);
    floodFillUtil(x, y-1, maxX, maxY);
    return;
}

int main() {
    //DECLARING VARIABLES
    int rowNum, colNum, startPosNum;
    int rowLoc, colLoc;
    //INPUT ROW, COLUMN, AND HOW MANY TEST IT WILL BE
    cin>>rowNum>>colNum>>startPosNum;
    //INPUT THE CELLS
    for (int i=0; i<rowNum; i++) {
        for (int j=0; j<colNum; j++) {
            cin>>cells[i][j];
        }
    }
    //COUNT THE ANSWER FOR EACH PLACE (GROUPS)
    for (int i=0; i<rowNum; i++) {
        for (int j=0; j<colNum; j++) {
            if (cells[i][j]=='.' && visitedCell[i][j]==0) {
                keyCount++;                             //ADD KEYCOUNT
                answ=0;                                 //REDECLARE ANSW TO 0
                floodFillUtil(i, j, rowNum, colNum);    //USE THE RECURSIVE FUNCTION
                ansCell[keyCount]=answ;                 //PUT ANSW TO ANSCELL
            }
        }
    }
    //LOOP TESTS
    for (int x=0; x<startPosNum; x++) {
        //INSERT ROW AND COL LOCATION OF PERSON
        cin>>rowLoc>>colLoc;
        //GET THE ANSWER FROM ANSCELL
        cout<<ansCell[visitedCell[rowLoc-1][colLoc-1]]<<endl;
    }

    return 0;
}

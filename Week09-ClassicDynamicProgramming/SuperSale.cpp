#include<bits/stdc++.h>
using namespace std;

int main() {
    //INPUT TESTCASE
    int testCase;
    cin>>testCase;
    while (testCase>0) {
        //DECLARING VARIABLES
        int strength, itemNum, peopleTotal;
        int maxValue=0;
        int dp[31]={0};
        //INPUT ITEM NUMBER
        cin>>itemNum;
        int weight[itemNum], price[itemNum];
        //INPUT PRICE AND WEIGHT OF EACH ITEM
        for (int i=0; i<itemNum; i++) {
            cin>>price[i]>>weight[i];
        }
        for (int i=0; i<itemNum; i++) {
            //LOOP FROM THE HEAVIEST POSSIBLE
            for (int j=30; j>=0; j--) {
                //IF CURRENT ITEM IS LIGHTER THAN CURRENT ABILLITY
                //IF CURRENT VALUE FOR WEIGHT IS SMALLER THAN SUM OF OTHER POSSIBLE ITEMS AND VALUE FOR ITEM
                if (weight[i]<=j && dp[j]<dp[j-weight[i]]+price[i]) {
                    dp[j]=dp[j-weight[i]]+price[i];
                }
            }
        }
        //TOTAL PEOPLE IN GROUP
        cin>>peopleTotal;
        for (int i=0; i<peopleTotal; i++) {
            cin>>strength;
            //ACCUMULATE VALUE FOR PEOPLE IN THE GROUP
            maxValue=maxValue+dp[strength];
        }
        //OUTPUT ANSWER
        cout<<maxValue<<endl;
        //MINUS TEST CASE DONE
        testCase--;
    }
    return 0;
}

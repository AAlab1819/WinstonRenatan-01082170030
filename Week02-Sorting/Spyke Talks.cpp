#include<bits/stdc++.h>
using namespace std;

void merger(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1=m-l+1;
    int n2=r-m;
    //CREATE TEMPORARY ARRAY
    int L[n1], R[n2];
    //COPY DATA TO ARRAY L AND R
    for (i=0; i<n1; i++) {
        L[i]=arr[l+i];
    }
    for (j=0; j<n2; j++) {
        R[j]=arr[m+1+j];
    }
    //MERGE TEMPORARY ARRAY BACK TO ARRAY ARR
    i=0; //INTIAL INDEX OF FIRST SUBARRAY
    j=0; //INTIAL INDEX OF SECOND SUBARRAY
    k=l; //INTIAL INDEX OF MERGED SUBARRAY
    while (i<n1 && j<n2) {
        if (L[i]<=R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    //COPY REMAIN ELEMENTS OF L[], IF THERE ARE ANY
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    //COPY REMAIN ELEMENTS OF R[], IF THERE ARE ANY
    while (j<n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

//L IS FOR LEFT AND R IS FOR RIGHT INDEX OF SUB-ARRAY OF ARRAY THAT IS GOING TO  BE SORT
void mergeSort(int arr[], int l, int r) {
    if (l<r) {
        int m=l+(r-l)/2;
        //SORT FIRST AND SECOND HALF
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merger(arr, l, m, r);
    }
}

int main() {
    //DEFINE VARIABLES
    int secretaryNum, chatSec=0, zeroNum=0;
    int temp, tempSame=1;
    bool check=true;
    //INPUT
    cin>>secretaryNum;
    int id[secretaryNum];
    for (int i=0; i<secretaryNum; i++) {
        cin>>id[i];
        //IF THE NUMBER IS ZERO
        if (id[i]==0) {
            zeroNum++;
        }
    }
    //SORT THE CALL ID'S
    mergeSort(id, 0, secretaryNum-1);
    //SET THE FIRST NUMBER AS TEMPORARY NUMBER TO CHECK, SKIP ALL THE ZERO NUMBER
    temp=id[zeroNum];
    //CHECK ALL THE NUMBER IN ARRAY EXCEPT THE ZEROS
    for (int i=zeroNum+1; i<secretaryNum; i++) {
        //IF THE TEMPORARY NUMBER IS NOT EQUAL TO THE NUMBER NOW
        if (temp!=id[i]) {
            //SET THE TEMPORARY NUMBER TO THE NUMBER NOW
            temp=id[i];
            //RESET THE SAME TEMPORARY NUMBER TO 1
            tempSame=1;
        }
        else {
            //ADD THE NUMBER OF SAME TEMPORARY NUMBER
            tempSame++;
            //IF IT IS TWO THEN, THE SECRETARY IS CHATTING
            if (tempSame==2) {
                chatSec++;
            }
            //IF IT IS MORE THAN TWO THEN, IT IS NOW BECOME IMPOSIBBLE
            if (tempSame>2) {
                check=false;
                break;
            }
        }
    }
    //IF IT IS IMPOSIBBLE
    if (check==false) {
        cout<<-1<<endl;
    }
    else {
        cout<<chatSec<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>

int countPainters(vector<int> &boards, int time) {

    int n = boards.size();

    int painters = 1;

    int paintUnits = 0;

    for(int i = 0; i < n ; i++) {

        if(boards[i] + paintUnits <= time) {

            paintUnits += boards[i];

        }

        else {

            painters++;

            paintUnits = boards[i];

        }

    }

    return painters;

}

int findLargestMinDistance(vector<int> &boards, int k)

{

    int n = boards.size();

    int low = *max_element(boards.begin(), boards.end());

    int high = accumulate(boards.begin(), boards. end(), 0);

    

    while(low <= high) {

        int mid = (low + high) / 2;

        int painters = countPainters(boards, mid);

        if(painters > k) {

            // If the units are not sufficient 

            low = mid + 1;

        }

        else {

            // If sufficient we try to minimize it

            high = mid - 1;

        }

    }

    return low;

}
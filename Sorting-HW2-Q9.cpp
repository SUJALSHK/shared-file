#include <iostream>
#include <vector>
using namespace std;

void BucketSort(vector<pair<int,char>>& arr) {
    
    int maxKey = arr[0].first;
    for (int i = 1; i < (int)arr.size(); i++) {
        if (arr[i].first > maxKey) maxKey = arr[i].first; // this is to find the max value in the list


    }

    
    vector<vector<pair<int,char>>> buckets(maxKey + 1); //this is the main line to make a bucket like array

    
    for (int i = 0; i < (int)arr.size(); i++) { //put the value in the key bucket
        int key = arr[i].first;
        buckets[key].push_back(arr[i]);   // keeps input order inside bucket
    }

    
    int index = 0;
    for (int key = 0; key <= maxKey; key++) {
        for (int j = (int)bs1; j >= 0; j--) { // taking the value out of the bucket but in reverse orders
            arr[index++] = buckets[key][j];
            
        }
    }
}

int main() {
    vector<pair<int,char>> arr = { {1,'a'}, {3,'z'}, {4,'b'}, {3,'a'}, {1,'c'} };

    BucketSort(arr);

    for (int i = 0; i < (int)arr.size(); i++) {
        cout << "(" << arr[i].first << "," << arr[i].second << ") ";
    }
    cout << endl;
    return 0;
}
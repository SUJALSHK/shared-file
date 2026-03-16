#include<iostream>
#include<vector>
#include<algorithm> // to use in built function sort()
using namespace std;

void bucketSort(int arr[],int size){
    if(size<1){
        return ;
    }

    //find the max value in the bucket

    int maxValue = arr[0];
    for(int i =0; i<size;i++){
        if(arr[i]>maxValue){
            maxValue = arr[i];

        }
    
    }
    //step1 creating a bucket of size of an arry

    vector<vector<int>> bucket(maxValue +1);

    //step 2 inserting the element in to bucket 
    for( int i=0; i<size;i++){
        int index = arr[i];
        bucket[index].push_back(arr[i]);

    }

    //Step 3 sorting indiviual bucket 

    for(int i=0; i<bucket.size();i++){
        sort(bucket[i].begin(), bucket[i].end());

    }

    int key =0;
    for (int i =0; i<(int)bucket.size();i++){
        for(int j=0; j<(int)bucket[i].size();j++){
            arr[key++]=bucket[i][j];
        }
    }
}



//main function 

int main (){
    int arr[]= {5,2,8,9,1,3};
    int size = sizeof(arr) /sizeof(arr[0]);
    bucketSort(arr, size);

    for(int i=0; i <size; i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;

}
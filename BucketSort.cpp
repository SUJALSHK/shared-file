#include<iostream>
#include<vector>
using namespace std;

// we have to find the highest number in the list to start 
// step 2: creat a bucket

void bucketSort(vector<int> &arr){


    int maxValue= arr[0];
    for(int i=0; i<arr.size();i++){ // this is to find out the max value of the list 
        if(arr[i]>maxValue){
            maxValue=arr[i];
            

    }    
}
    cout<< "max value of the list :"<< maxValue<<endl;

    // Creating a bucket 

    vector<vector<int>> bucket(maxValue+1);

    for( int i =0;i<arr.size();i++){
        bucket[arr[i]].push_back(arr[i]);

    }

    //taking out numbers
    int index =0;
    for(int i=0; i<=maxValue;i++){
        for(int j=0; j< bucket[i].size();j++){
            arr[index]=bucket[i][j];
            index ++;

        }

    }




}






int main(){
    vector<int> arr = {};
    bucketSort(arr);
    
    for(int i=0;i<arr.size();i++){
        cout<< arr[i] <<endl;

    }
    return 0;
    

    


}
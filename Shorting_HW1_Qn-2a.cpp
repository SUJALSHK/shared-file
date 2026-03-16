#include<stdio.h>
#include<iostream>
using namespace std;

void printArray(int arr[],int n){ //print the array
    for (int i =0;i<n ;i++){
        cout << arr[i]<<"";
    }
    cout << endl;
} 

void most_frequent(int arr[], int n){
    int max_count =0;
    int most_repated=arr[0];

    for(int i=0; i<n; i++){ // loops through array n times
        int count =0;  
        for( int j=0; j< n;j++){ //loops through same array 
            if(arr[j]==arr[i]){ //compare if next elements is equal to the current element
                count ++;
            }
        }
        if(count> max_count){
            max_count = count;
            most_repated= arr[i];
        }
    }
    cout << "Most Repeated Number:" << most_repated << endl;
    cout << "Frequency:" << max_count << endl;
}

int main(){
    int n =5;
    // int arr[]={10,2,7,3,9,14,1,5};
    int arr[]={1,1,2,2,1};
    most_frequent(arr,n);
    printArray(arr,n);
    return 0;

}
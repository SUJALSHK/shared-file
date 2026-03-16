#include<stdio.h>
#include<iostream>
using namespace std;


void printArray(int arr[],int n){ //print array 
    for (int i =0;i<n ;i++){
        cout << arr[i]<<" ,";
    }
    cout<<endl;
}

void insertionSort(int arr[],int n){
    int count=0;
    for(int i = 1; i<n; i++){
        int currentValue = arr[i];
        int preValue = i-1;
        
        while(arr[preValue]>=0 && arr[preValue] > currentValue){
            arr[preValue+1] = arr[preValue];
            preValue--;
            count++;
        } 
        arr[preValue+1]=currentValue;
    }

    cout << "Number of Swap:" << count << endl;
}

//time complexity of this function is O(n^2) because it has two nloops the the number of iteration in each loop is n so for two loops n*n which is n^2






int main(){
    int n =22;
    // int arr[]={10,2,7,3,9,14,1,5};
    int arr[]={38,77,12,45,66,54,68,42,93,51,20,74,72,83,49,63,85,60,55,34,33,6};
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;

}




// void insertion_short(int arr[],int n){

//     int count =0;
//     for(int i=1;i<n;i++){ //loops through arry from i=1 index
//         int current_value = arr[i];  
//         int prev_value = i-1;

//         while(prev_value>=0 && arr[prev_value]>current_value){ //check if the i-1 value is greater than i
//             arr[prev_value+1]=arr[prev_value];
//             prev_value--;
//             count++;

//         }
//         arr[prev_value+1]= current_value; //assign the next value to i+1ss
//     }
//     cout << "Number of shifts:" << count <<endl;
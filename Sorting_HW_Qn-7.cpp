// #include <iostream>
// #include <vector>
// #include <random>
// #include <algorithm>
// using namespace std;


// int median(int a, int b, int c) {
//     if ((a <= b && b <= c) || (c <= b && b <= a)) return b;
//     if ((b <= a && a <= c) || (c <= a && a <= b)) return a;
//     return c;
// }

// //  Insertion Sort 
// void insertionSort(vector<int>& arr, int low, int high) {
//     for (int i = low + 1; i <= high; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= low && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// // Partition using pivot value
// int partitionByValue(vector<int>& arr, int low, int high, int pivotValue) {
    
//     int pivotIndex = -1; // Moveing one occurrence of pivotValue to the end (if found)
//     for (int i = low; i <= high; i++) {
//         if (arr[i] == pivotValue) {
//             pivotIndex = i;
//             break;
//         }
//     }
//     if (pivotIndex != -1) {
//         swap(arr[pivotIndex], arr[high]);
//     }

//     int i = low - 1;
//     for (int j = low; j < high; j++) {
//         if (arr[j] <= pivotValue) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }

// // Quick Sort 
// void quickSortMedianRandom(vector<int>& arr, int low, int high, mt19937& rng) {
//     if (low >= high) return;

//     // If small, insertion sort is faster and simpler
//     if (high - low + 1 <= 10) {
//         insertionSort(arr, low, high);
//         return;
//     }

//     uniform_int_distribution<int> dist(low, high);

//     int i1 = dist(rng);
//     int i2 = dist(rng);
//     int i3 = dist(rng);

//     int pivotValue = medianOfThree(arr[i1], arr[i2], arr[i3]);

//     int p = partitionByValue(arr, low, high, pivotValue);

//     quickSortMedianRandom(arr, low, p - 1, rng);
//     quickSortMedianRandom(arr, p + 1, high, rng);
// }


// vector<int> fantabulous_sort(vector<int> arr) {
//     random_device rd;
//     mt19937 rng(rd());

//     if ((int)arr.size() <= 10) {
//         insertionSort(arr, 0, (int)arr.size() - 1);
//     } else {
//         quickSortMedianRandom(arr, 0, (int)arr.size() - 1, rng);
//     }
//     return arr;
// }


// int main() {
//     vector<int> nums = {8, 3, 1, 9, 5, 7, 2, 4, 6, 0, 10, 12};

//     vector<int> sorted = fantabulous_sort(nums);

//     for (int x : sorted) cout << x << " ";
//     cout << endl;

//     return 0;
// }

// Note: used knowledge of above Cpp program from a YOUTUBE (appanaCollege) and modified it using 
// external agent


// in pyhton which is more easy to understand 

import random

def median(a, b, c):
    return sorted([a, b, c])[1]

def quickSort(arr):
    if len(arr) <= 1:
        return arr

    # pick 3 random elements
    x, y, z = random.sample(arr, 3)
    pivot = median_of_three(x, y, z)

    st = []
    mid = []
    end = []

    for num in arr:
        if num < pivot:
            st.append(num)
        elif num > pivot:
            end.append(num)
        else:
            mid.append(num)

    return quickSort(left) + mid + quickSort(right)


    def insertionSort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1

        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1

        arr[j + 1] = key

    return arr


    def fantabulouSort(arr):
    if len(arr) <= 10:
        return insertionSort(arr.copy())
    else:
        return quickSort(arr)

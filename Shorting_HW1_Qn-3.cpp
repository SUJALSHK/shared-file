#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;


class Person {
    public:
    string name;
    int age;
    Person(string n, int a){
        name = n;
        age = a;
    }
};

class Person {
    public:
    string name;
    int age;
    Person(string n, int a){
        name = n;
        age=a;
    }
};

void printPeople(const vector<Person>& people){
    for(const Person& p : people){
        cout << p.name <<"("<< p.age<<")";

    }
    cout << endl;
}

void selection_short_by_age(vector<Person>& people){
    int n = people.size();
    for(int i=0;i<n-1;i++){
        int small_idx =i;
        for(int j=i+1;j<n;j++){
            if(people[j].age < people[small_idx].age){
                small_idx =j;

            }
        }
        swap(people[i], people[small_idx]);
    }
}

int main() {
    vector<Person> people = {
        {"Matt", 38},
        {"Ashley", 21},
        {"Cameron", 37},
        {"Gene", 25},
        {"Dexter", 21}
    };

    selection_short_by_age(people);
    printPeople(people);

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>   // for sort()
using namespace std;

/*
   Function: most_frequent
   Purpose : Finds the most frequent number in an array
*/
int most_frequent(vector<int>& nums) {

    // If the list is empty, return -1 (no valid element)
    if(nums.size() == 0){
        return -1;
    }

    // Sort the array so equal numbers come together
    sort(nums.begin(), nums.end());

    // Stores the number with highest frequency
    int best_value = nums[0];

    // Stores the highest frequency found so far
    int best_count = 1;

    // Tracks current number while scanning
    int current_value = nums[0];

    // Counts frequency of current_value
    int current_count = 1;

    // Start from second element
    for(int i = 1; i < nums.size(); i++){

        // If same as previous number, increase count
        if(nums[i] == current_value){
            current_count++;
        }
        else{
            // If this number appeared more times than best so far
            if(current_count > best_count){
                best_count = current_count;
                best_value = current_value;
            }

            // Move to new number
            current_value = nums[i];
            current_count = 1;
        }
    }

    // Final check for the last group
    if(current_count > best_count){
        best_value = current_value;
    }

    return best_value;
}

int main(){
    vector<int> nums = {1, 1, 2, 2, 1};

    cout << "Most Frequent Number: "
         << most_frequent(nums) << endl;

    return 0;
}


void selectionSort( int arr[], int n){

}
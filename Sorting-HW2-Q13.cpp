#include <iostream>
#include <vector>
using namespace std;

void sortZeroOne(vector<int>& a) {
    int left = 0, right = (int)a.size() - 1;

    while (left < right) {
        while (left < right && a[left] == 0) left++;
        while (left < right && a[right] == 1) right--;

        if (left < right) {
            swap(a[left], a[right]);
            left++;
            right--;
        }
    }
}

int main() {
    vector<int> a = {1,0,1,1,0,0,1,0,1};
    sortZeroOne(a);

    for (int x : a) cout << x << " ";
    cout << "\n";
    return 0;
}

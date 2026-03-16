#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> sortKSequences(const vector<vector<int>>& sequences, int N) {
    vector<vector<int>> result;
    result.reserve(sequences.size());

    for (const auto& seq : sequences) {
        vector<int> count(N, 0);

        // Count keys
        for (int x : seq) { //Counting keys
            count[x]++;
        }

        vector<int> sorted;
        sorted.reserve(seq.size()); //building the sorting 
        for (int key = 0; key < N; key++) {
            while (count[key]-- > 0) {
                sorted.push_back(key);
            }
        }

        result.push_back(sorted);
    }

    return result;
}

int main() {
    int N = 6; 

    vector<vector<int>> sequences = {
        {3, 1, 5, 1, 0},
        {2, 2, 4, 0, 5, 3},
        {1, 1, 1, 0}
    };

    vector<vector<int>> sortedSeqs = sortKSequences(sequences, N);

    for (int i = 0; i < (int)sortedSeqs.size(); i++) {
        cout << "Sequence " << i + 1 << ": ";
        for (int x : sortedSeqs[i]) cout << x << " ";
        cout << "\n";
    }

    return 0;
}

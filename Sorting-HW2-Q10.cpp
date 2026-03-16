#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> radixSortWords(vector<string> words) {
    if (words.empty()) return words;

    int L = words[0].size();              // all words same length from a to z
    const int K = 26;                     

    for (int pos = L - 1; pos >= 0; pos--) { // shorting from last charackter to first
        vector<vector<string>> buckets(K);

        for (const string& w : words) { // this put each word into a bucket based on the current char
            int idx = w[pos] - 'a'; 
            buckets[idx].push_back(w);    
        }

        // collect back into words
        int k = 0;
        for (int b = 0; b < K; b++) {
            for (const string& w : buckets[b]) {
                words[k++] = w;
            }
        }
    }

    return words;
}

int main() {
    vector<string> words = {"apple", "three", "ashes", "trees", "thank", "lamps"};
    vector<string> sorted = radixSortWords(words);

    for (const auto& w : sorted) cout << w << " ";
    cout << "\n";
    return 0;
}

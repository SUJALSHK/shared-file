#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int countVowels(const string& s) {
    int c = 0;
    for (char ch : s) {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') c++;
    }
    return c;
}

vector<string> sortByVowels(vector<string> words) {
    vector<pair<int, string>> decorated;
    decorated.reserve(words.size());

    for (const string& w : words) {
        decorated.push_back({countVowels(w), w});
    }

    sort(decorated.begin(), decorated.end(),
         [](const auto& a, const auto& b) {
             if (a.first != b.first) return a.first < b.first;
             return a.second < b.second;
         });

    vector<string> result;
    result.reserve(words.size());
    for (auto& p : decorated) result.push_back(p.second);

    return result;
}

int main() {
    vector<string> words = {"forest","prisoner","juxtaposition","superfluous","trees","dip","lamps","meadow"};
    vector<string> sorted = sortByVowels(words);

    for (auto &w : sorted) cout << w << " ";
    cout << "\n";
    return 0;
}

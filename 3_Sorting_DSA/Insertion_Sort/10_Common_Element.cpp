#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(const vector<int>& arr) {
    for (int a : arr) {
        cout << a << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec1 = {3, 2, 2, 4, 4};
    vector<int> vec2 = {2, 4, 3, 2, 7};

    size_t vec1_size = vec1.size();
    size_t vec2_size = vec2.size();

    vector<int> ans;

    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());

    int i = 0, j = 0;

    while (i < vec1_size && j < vec2_size) {
        if (vec1[i] < vec2[j]) i++;
        else if (vec2[j] < vec1[i]) j++;
        else {
            ans.push_back(vec1[i]);
            i++;
            j++;
        }
    }

    cout << "array: ";
    print(ans);

    return 0;
}
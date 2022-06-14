#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */     vector<int> data;
    int len, datum;
    cin >> len;

    for (int i = 0; i < len; i++) {
        cin >> datum;
        data.push_back(datum);
    }

    std::sort(data.begin(), data.end());

    for (int value : data) {
        cout << value;
        cout << " ";
    }

    return 0;
}

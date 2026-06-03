#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<double> vec;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size!" << endl;
        return 1;
    }

    cout << "Enter " << n << " real numbers:" << endl;
    for (int i = 0; i < n; i++) {
        double num;
        cin >> num;
        vec.push_back(num);
    }

    cout << "\nOriginal vector: ";
    for (double val : vec) {
        cout << val << " ";
    }
    cout << endl;

    int maxIndex = 0;
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] > vec[maxIndex]) {
            maxIndex = i;
        }
    }

    swap(vec[0], vec[maxIndex]);

    cout << "Result vector: ";
    for (double val : vec) {
        cout << val << " ";
    }
    cout << endl;

    cout << "\nMaximum element " << vec[0] << " moved to first position" << endl;

    return 0;
}
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);


    stringstream ss(input);
    int n, a1, a2, a3;
    char comma;  // 逗號
    ss >> n >> comma >> a1 >> comma >> a2 >> comma >> a3;


    int total = a1 * 15 + a2 * 20 + a3 * 30;


    if (total > n) {
        cout << "0" << endl;
        return 0;
    }


    int change = n - total;


    int num_50 = change / 50;
    change = change % 50;
    int num_5 = change / 5;
    int num_1 = change % 5;


    cout << num_1 << "," << num_5 << "," << num_50 << endl;

    return 0;
}
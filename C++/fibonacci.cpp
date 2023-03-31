#include <iostream>
#include <cmath>
using namespace std;

int fibonacci(int i) {
    if (i < 2)
        return i;
        else 
        return fibonacci(i-2) + fibonacci(i-1);
}

int main() {
    int n;
    cout << "Dame el limite de la serie: " << endl; cin >> n;
    for (int i=0; i<n; i++) {
        cout << i+1 << ": " << fibonacci(i) << endl;
    }

    return 0;
}
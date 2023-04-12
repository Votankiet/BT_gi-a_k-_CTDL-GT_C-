#include <iostream>

using namespace std;
//Bai 21
int sol(int n) {
    if(n == 1) return 1;
    return n * sol(n - 1);
}

int main() {
    cout << sol(10) << endl;
}
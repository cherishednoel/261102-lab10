#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int sum = 0;
    for(int i = 3; i <= 333; i += 3) {
        if(i % 6 == 0) {
            sum += pow(i,3);
        } else {
            sum += pow(i,2);
        }
    }
    cout << sum;

    return 0;
}
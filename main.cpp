#include <iostream>
using namespace std;

int main() {

    double n,base,temp;

    cout << "Enter Number" << endl;
    cin >> n;

    for (base = 1; temp<n; base++) {

        temp = base * base;
    }

double i;

    for (i=1; i<=10; i++) {

        base = ((n/base) + (base ))/2;

    }

    cout<<"Your square root is "<<base<<endl;

    return 0;
}

#include <iostream>


using namespace std;

long long n,sum = 0;

long long count(long long n);

int main() {

    cout<<"Enter any number."<<endl;
    cin>>n;
    long long a;

    a = count(n);

    cout<<"Total digits in number are "<<a<<endl;

    return 0;
}


long long count(long long n) {



    if(n != 0) {

         n = n / (1*10);

        sum = sum + 1;

        count(n);

    }

return sum;

}
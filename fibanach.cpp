#include <iostream>
using namespace std;

int fib(int n){
    int c, a = 0;
    int b = 1;
    cout << a << endl << b << endl;
    for(int i = 3; i <= n; i++){
        c = b;
        b = a + b;
        a = c;
        cout << b << endl;
    }
    return b;
}

int main(){
    fib(10);
    return 0;
}
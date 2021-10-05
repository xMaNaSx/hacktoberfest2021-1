#include <bits/stdc++.h>

using namespace std;

class Sum {
    int prev;
public:
    Sum(int prev) {
        this -> prev = prev;
    }
    Sum operator()(int);
    int operator()();
};

Sum Sum::operator()(int next) {
    return Sum(next + prev);
}

int Sum::operator()() {
    return prev;
}

auto sumTwo(int a) {
    return [a](int b) {
        return a + b;
    };
}

auto sumThree(int a) {
    return [a](int b) {
        return [a, b](int c) {
            return a + b + c;
        };
    };
}


int main() {
    cout << sumTwo(1)(2) << endl;
    cout << sumThree(1)(2)(3) << endl;
    int sum = Sum(1)(2)(3)(4)(5)();
    cout << sum << endl;
    return 0;
}
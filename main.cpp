#include <iostream>
#include <cmath>

using namespace std;

void print(string n = "artur") {
    cout << n << endl;
}

void sum(int a, int b) {
    cout << a + b << endl;
}

int function() {
    return 123;
}

int power(int osn, int step) {
    int power = 1;

    for (int i = 0; i < step; i++)
        power *= osn;

    return power;
}

int main() {
    int powered1 = pow(2, 5);
    cout << powered1 << endl;

    int powered2 = 1;

    for (int i = 0; i < 5; i++) { // поменять степень можно здесь вместо 5
        powered2 *= 2; // поменять основание можно здесь вместо 2
    }

    cout << powered2 << endl;

    print("cake");
    print();

    sum(2, 3);

    int answer = function();
    print(to_string(answer));

    print(to_string(power(2, 5)));

    return 0;
}
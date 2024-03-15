#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 10;

    // сума і різниця
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Метод 1: a = " << a << ", b = " << b << endl;

    // множення і ділення
    a = 5;
    b = 10;
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "Метод 2: a = " << a << ", b = " << b << endl;

    // використання виразу присвоювання
    a = 5;
    b = 10;
    a = (a + b) - (b = a);
    cout << "Метод 3: a = " << a << ", b = " << b << endl;

    return 0;
}

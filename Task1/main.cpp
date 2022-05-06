#include "Complex.h"
#include <iostream>
#include <fstream>
using namespace std;

int menu() {
    int answer;
    cout << "\n1 - plus\n"
        << "2 - minus\n"
        << "3 - multiply\n"
        << "4 - split\n";
    cin >> answer;
    cout << endl;
    return answer;
}
void text()
{

}

int main() {
    ComplexNumber a, b, result;
    int answer;
    do {
        answer = menu();
        if (answer != 0) {
            cout << "Number A\n";
            a.read();
            cout << "Number B\n";
            b.read();
        }
        switch (answer) {
        case 1:
            result = a.plus(b);
            break;
        case 2:
            result = a.minus(b);
            break;
        case 3:
            result = a.multiply(b);
            break;
        case 4:
            result = a.divide(b);
            break;
        }
        if (answer != 0) {
            cout << "Result: ";
            result.print();
        }
    } while (answer != 0);
}

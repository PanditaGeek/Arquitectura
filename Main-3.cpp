#include <iostream>
using namespace std;

int bitmulti(int num1, int num2) {
    int val1 = num1;
    int val2 = num2;
    int temp;
    if (val2 < 0) {
        temp = -val1;
    } else {
        temp = val1;
    }
    int result = 0;
    for (int i = 0; i < 256; i++) { 
        int bit = val2 & 1;
        if (bit == 1) {
            res = res + temp;
        }
        bool lbit = res & 1;
        
        res = (res >> 1) | (lbit<< 7);
        val2 >>= 1;
    }
    return res;
}

int main() {
    int num1, num2;
    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;
    int resultado = bitmulti(num1, num2);
    cout << "El producto es: " << finalResult << endl;
    return 0;
}

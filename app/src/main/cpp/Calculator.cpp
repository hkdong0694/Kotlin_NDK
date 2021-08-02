//
// Created by KyungDong Han on 2021/08/02.
//

#include "Calculator.h"

Calculator::Calculator(int num1, int num2) : num1(num1), num2(num2) {
}

Calculator::Calculator() : num1(2), num2(4) {

}

Calculator::~Calculator() = default;

int Calculator::getAdd(const int &num1, const int &num2) {
    return num1 + num2;
}

int Calculator::getMinus(const int &num1, const int &num2) {
    if(num1 > num2) return num1 - num2;
    else num2 - num1;
}

int Calculator::getMulti(const int &num1, const int &num2) {
    return num1 * num2;
}

int Calculator::getDivide(const int &num1, const int &num2) {
    if(num1 == 0 || num2 == 0) return 0;
    else {
        if(num1 > num2) return num1 / num2;
        else return num2 / num1;
    }
}


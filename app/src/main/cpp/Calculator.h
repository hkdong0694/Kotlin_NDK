//
// Created by KyungDong Han on 2021/08/02.
//

#ifndef NDKSAMPLE_CALCULATOR_H
#define NDKSAMPLE_CALCULATOR_H


class Calculator {
private:
    int num1;
    int num2;

public:
    Calculator();
    Calculator(int num1, int num2);
    static int getAdd(const int& num1, const int& num2);
    static int getMinus(const int& num1, const int& num2);
    static int getMulti(const int& num1, const int& num2);
    static int getDivide(const int& num1, const int& num2);
    ~Calculator();
};

#endif //NDKSAMPLE_CALCULATOR_H

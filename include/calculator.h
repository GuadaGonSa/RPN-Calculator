#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stack>
#include <string>
#include <iostream>

class CalculatorEngine {
public:
    CalculatorEngine();

    void pushOperand(double value);
    double executeOperation(const std::string& op);
    void clear();

    double peek() const;
    int stackSize() const;

private:
    std::stack<double> stack;
};

#endif // CALCULATOR_H

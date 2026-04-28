#include "calculator.h"

CalculatorEngine::CalculatorEngine() {
    // Inicialización si fuera necesaria
}

void CalculatorEngine::pushOperand(double value) {
    stack.push(value);
}

double CalculatorEngine::executeOperation(const std::string& op) {
    double num1, num2, result;

    if(stack.size() < 2)
    {
        std::cout << "There's not enough numbers to do the operation" << std::endl;
        return -1;
    }

    num2 = stack.pop();
    num1 = stack.pop();

    switch(op[0])
    {
        case '+':
            result = num1+num2;
        break;
        case '-':
            result = num1-num2;
        break;
        case '*':
            result = num1*num2;
        break;
        case '/':
            result = num1/num2;
        break;
        default:
            std::cout << "Not a valid operator" << std::endl;
        break;
    }

    stack.push(result);

    return result;
}

void CalculatorEngine::clear() {
    int size = stack.size()-1;
    while(size != 0){
        stack.pop();
        size--;
    }
}

double CalculatorEngine::peek() const {
    if (stack.empty())
    {
        std::cout << "The stack is empty" << std::endl;
        return -1;
    }
    else
    {
        return stack.top();
    }
}

int CalculatorEngine::stackSize() const {
    return stack.size();
}

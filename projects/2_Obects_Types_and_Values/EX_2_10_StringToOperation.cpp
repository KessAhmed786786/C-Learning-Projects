// Program that takes on operation followed by two operands and outputs the result

#include <iostream>

int main()
{
    // Inputting the code for operation and operand
    std::cout << "Input OPERATION (plus, minus, mul, div or +,-,*,/):\n";
    std::string operation;
    std::cin >> operation;
    std::cout << "Input OPERAND A:\n";
    double operand_a;
    std::cin >> operand_a;
    std::cout << "Input OPERAND B:\n";
    double operand_b;
    std::cin >> operand_b;
    std::cout << operand_a << " " << operation << " " << operand_b << " = " << "\n";
    double answer;
    bool valid = true;

    // Logic for operations
    if (operation == "plus" || operation == "+")
    {
        answer = operand_a + operand_b;
    }
    else if (operation == "minus" || operation == "-")
    {
        answer = operand_a - operand_b;
    }
    else if (operation == "mul" || operation == "*")
    {
        answer = operand_a * operand_b;
    }
    else if (operation == "div" || operation == "/")
    {
        if (operand_b == 0)
        {
            std::cout << "Error: Divsion by zero is undefined.\n";
            return 1;
        }
        answer = operand_a / operand_b;
    }
    else
    {
        valid = false;
    }

    if (valid)
        std::cout << "The ANSWER: " << answer << "\n";
    else
        std::cout << "Invalid operation\n";
}

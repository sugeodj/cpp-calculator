#include <iostream>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {
    char operation;
    int first;
    int second;
    int answer;

    std::cout << "Select an Operation:";
    std::cout << "\n\n\tAddition: \t\t+";
    std::cout << "\n\tSubtraction: \t\t-";
    std::cout << "\n\tMultiplication: \t*";
    std::cout << "\n\tDivision: \t\t/";
    std::cout << "\n\nEnter an Operation symbol: ";
    std::cin >> operation;

    std::cout << "\nOperation Selected: " << operation;

    std::cout << "\n\nEnter the first number: ";
    std::cin >> first;
    std::cout << "\nFirst number entered is " << first;

    std::cout << "\nEnter the second number: ";
    std::cin >> second;
    std::cout << "\nSecond number entered is " << second;
    std::cout << "\n";

        switch (operation) {
        case '+':
            answer = add(first, second);
            break;
        case '-':
            answer = subtract(first, second);
            break;
        case '*':
            answer = multiply(first, second);
            break;
        case '/':
            answer = divide(first, second);
            break;
        default:
            std::cout << "Invalid operator entered.";
            break;
    }

    std::cout << first << operation << second << "=" << answer << "\n";

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}
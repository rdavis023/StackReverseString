#include "ReverseString.h"
#include <stack>
#include <string>

string reverseString(const string& str) {
    std::stack<char> charStack;
    string reversedString;

    // Push each character of 'str' onto the stack
    for (char ch : str) {
        charStack.push(ch);
    }

    // Pop from the stack and append to 'reversedString'
    while (!charStack.empty()) {
        reversedString += charStack.top();
        charStack.pop();
    }

    return reversedString;

}

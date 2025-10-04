String Parenthesis 

#include stdio
#include string.h
#include stack
std::stack<char> s; 

bool isBalanced(const std::string& str) {
    for (char ch : str) {
        if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            if (s.empty() || s.top() != '(') {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

#include <iostream>
#include <sstream>
#include <stack>
#include <limits>
#include <string>
using namespace std;

int priority(char a)
{
    int temp;
    if (a == '^')
        temp = 1;
    else if (a == '*' || a == '/')
        temp = 2;
    else if (a == '+' || a == '-')
        temp = 3;
    return temp;
}

int main()
{
    string infix;
    cout << "Masukan Infix : ";
    getline(cin, infix);

    stack<char> opr_stack;

    stringstream postfix;

    for (unsigned i = 0; i < infix.length(); i++)
    {
        if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^')
        {
            while (!opr_stack.empty() && priority(opr_stack.top()) <= priority(infix[i]))
            {
                postfix << opr_stack.top();
                opr_stack.pop();
            }
            opr_stack.push(infix[i]);
        }
        else if (infix[i] == '(')
        {
            opr_stack.push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while (opr_stack.top() != '(')
            {
                postfix << opr_stack.top();
                opr_stack.pop();
            }
            opr_stack.pop();
        }
        else
        {
            postfix << infix[i];
        }
    }

    while (!opr_stack.empty())
    {
        postfix << opr_stack.top();
        opr_stack.pop();
    }

    cout << "Postfix : " << postfix.str() << endl;

    return 0;
}

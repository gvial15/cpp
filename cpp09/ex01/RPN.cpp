#include "RPN.hpp"
#include <cstddef>
#include <string>

// constructor
RPN::RPN(std::string arg)
{
	int	i;
	
	equation = arg;
	i = -1;
	while (equation[++i])
		if (!std::isdigit(equation[i]) && equation[i] != '+' && equation[i] != '-'
			&& equation[i] != '*' && equation[i] != '/' && equation[i] != ' ')
			std::cout << "Error: authorized characters are \"+-*/\" and (0-9)\n", exit(1);
}

// destructor
RPN::~RPN() {}

void print(std::stack<int> &s)
{
    if(s.empty())
    {
        std::cout << std::endl;
        return;
    }
    int x= s.top();
    s.pop();
    print(s);
    s.push(x);
    std::cout << x << " ";
 }

// solve equation
int	RPN::solve()
{
	size_t			i;
	size_t			nextI;
	int				digit1;
	int				digit2;
	std::string		token;
	std::stack<int>	stack;

	i = 0;
	while (i < equation.size())
	{
		nextI = equation.find(' ', i);
		if (nextI == std::string::npos)
			nextI = equation.size();
		token = equation.substr(i, nextI - i);
		i = nextI + 1;
		if (isdigit(token[0]) || (token[0] == '-' && token.length() > 1))
            stack.push(stod(token));
		else if (token == "-" || token == "+" || token == "*" || token == "/") {
            digit2 = stack.top();
            stack.pop();
            digit1 = stack.top();
            stack.pop();
            if (token == "+")
                stack.push(digit1 + digit2);
            else if (token == "-")
                stack.push(digit1 - digit2);
            else if (token == "*")
                stack.push(digit1 * digit2);
            else if (token == "/")
                stack.push(digit1 / digit2);
            else
			{
                std::cerr << "Invalid operator: " << token << std::endl;
                return 0;
			}
        }
	}
	return (stack.top());
}

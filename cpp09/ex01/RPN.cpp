
#include "RPN.hpp"
#include <cstddef>
#include <string>

// constructor
RPN::RPN(std::string arg)
{
	int		i;

	equation = arg;
	i = -1;
	while (equation[++i])
		if ((!std::isdigit(equation[i]) && equation[i] != '+' && equation[i] != '-'
			&& equation[i] != '*' && equation[i] != '/' && equation[i] != ' ')
			|| (std::isdigit(equation[i]) && std::isdigit(equation[i + 1])))
			std::cout << "Error: authorized characters are \"+-*/\" and (0-9)\n", exit(0);
}

// destructor
RPN::~RPN() {}


// testing function
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
		if (isdigit(token[0]))
            stack.push(stod(token));
		else if (token == "-" || token == "+" || token == "*" || token == "/")
		{
			if (stack.empty())
					std::cout << "invalid equation\n", exit(0);
			digit2 = stack.top();
			stack.pop();
			if (stack.empty())
				std::cout << "invalid equation\n", exit(0);
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
        }
	}
	if (stack.size() != 1)
		std::cout << "invalid equation\n", exit(0);
	return (stack.top());
}

#include "RPN.hpp"

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

// solve equation
int	RPN::solve()
{
	int				i;
	int				digit1;
	int				digit2;
	std::stack<int>	stack;

	i = -1;
	while (equation[++i])
	{
		if (std::isdigit(equation[i]))
			stack.push(atoi(&equation[i]));
		else if (equation[i] != ' ')
		{
			digit1 = stack.top();
			stack.pop();
			if (stack.empty() && i < (int)equation.length() - 1)
				std::cout << "Error: invalid equation\n", exit(1);
			digit2 = stack.top();
			stack.pop();
			if (equation[i] == '*')
			{
				printf("%i * %i\n", digit1, digit2);
				stack.push(digit1 * digit2);
			}
			if (equation[i] == '/')
			{
				printf("%i / %i\n", digit1, digit2);
				stack.push(digit1 / digit2);
			}
			if (equation[i] == '+')
			{
				printf("%i + %i\n", digit1, digit2);
				stack.push(digit1 + digit2);
			}
			if (equation[i] == '-')
			{
				printf("%i - %i\n", digit1, digit2);
				stack.push(digit1 - digit2);
			}
		}
	}
	return (stack.top());
}

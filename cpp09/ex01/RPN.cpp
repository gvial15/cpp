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

// ******** TODO:
//			- error check for 1 digit number only

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
	int				i;
	int				digit1;
	int				digit2;
	int				result;
	int				sign;
	std::stack<int>	stack;

	result = 0;
	sign = 0;
	i = -1;
	// ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
	while (equation[++i])
	{
		if (std::isdigit(equation[i]))
		{
			stack.push(atoi(&equation[i]));
			if (sign == 1)
				stack.push(result);
			sign = 0;
		}
		if (equation[i] == '+' || equation[i] == '-' || equation[i] == '*'
			|| equation[i] == '/')
		{
			sign = 1;
			if (stack.empty() && i < (int)equation.length() - 1)
				std::cout << "Error: invalid equation\n", exit(1);
			digit1 = stack.top();
			stack.pop();
			digit2 = stack.top();
			stack.pop();
			if (equation[i] == '*')
			{
				printf("%i * %i = ", digit1, digit2);
				printf("%i\n", digit1 * digit2);
				result  = (digit1 * digit2);
			}
			else if (equation[i] == '/')
			{
				printf("%i / %i = ", digit1, digit2);
				printf("%i\n", digit1 / digit2);
				result = (digit1 / digit2);
			}
			else if (equation[i] == '+')
			{
				printf("%i + %i = ", digit1, digit2);
				printf("%i\n", digit1 + digit2);
				result = (digit1 + digit2);
			}
			else if (equation[i] == '-')
			{
				printf("%i - %i = ", digit1, digit2);
				printf("%i\n", digit1 - digit2);
				result = (digit1 - digit2);
			}
		}
	}
	if (stack.size() == 0)
		return (result);
	else if (stack.size() == 1)
		return (stack.top());
	else
		std::cout << "Error: invalid equation\n", exit(1);
}

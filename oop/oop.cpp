#include <iostream>
#include <math.h>
#include <cstdint>
using namespace std;
class Power

{
private:
	int m_a = 5;
	int m_b = 6;
public:
	void seta(int a) { m_a = a; }
	void setb(int b) { m_b = b; }
	void calculate()
	{
		cout << pow(m_a, m_b) << endl;
	}
};

class RGBA
{
private:
	uint8_t m_red = 0;
	uint8_t m_green = 0;
	uint8_t m_blue = 0;
	uint8_t m_alpha =255;
public:
	RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) :m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
	{

	}
	RGBA()
	{

	}
	void print()
	{
		cout << "red:" << static_cast<uint16_t>(m_red)<<endl;
		cout << "green:" << static_cast<uint16_t>(m_green)<<endl;
		cout << "blue:" << static_cast<uint16_t>(m_blue) << endl;
		cout << "alpha:" << static_cast<uint16_t>(m_alpha) << endl;
	}
};

class Stack
{
private:
	int myarr[10];
	int stacklendth;
public:
	void reset()
	{
		stacklendth = 0;
	}
	bool push(int var)
	{
		myarr[stacklendth]=var;
		if (stacklendth == 10)
		{
			return false;
		}
		else
		{
			myarr[stacklendth] = var;
			++stacklendth ;
			return true;
		}
	}
	void pop()
	{
		if (stacklendth == 0)
		{
			cout << "stack empty" << endl;
		}
		else
		{
			--stacklendth;
		}
	}
	void print()
	{
		cout << "(";
		for (int i = 0; i < stacklendth; ++i)
		{
			cout << myarr[i];
		}
		cout << ")" << endl;
	}
};
int main()
{
	Power power;
	power.calculate();

	int red, green, blue, alpha;
	RGBA color;
	color.print();


	cout << "enter number red" << endl;
	cin >> red;
	cout << "enter number green" << endl;
	cin >> green;
	cout << "enter number blue" << endl;
	cin >> blue;
	cout << "enter number alpha" << endl;
	cin >> alpha;

	RGBA rgba(red,green,blue,alpha);
	rgba.print();

	Stack stack;
	stack.reset();
	stack.print();

	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();
	stack.print();

	return 0;
}

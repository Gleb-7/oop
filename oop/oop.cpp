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
	uint8_t m_alpha;
public:
	RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha = 255) :m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
	{
		cout << "constructor" << endl;
		cout << "red" << m_alpha;
	}
	void print()
	{
		cout << "red" << static_cast<uint16_t>(m_alpha);
	}
};


int main()
{
	Power power;
	power.calculate();

	RGBA rgba(0, 0, 0);
	rgba.print();

	return 0;
}

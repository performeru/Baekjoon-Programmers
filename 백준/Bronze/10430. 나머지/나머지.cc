#include <iostream>

class Calculator
{
private:
	int mA, mB, mC;

public:

	Calculator(int a, int b, int c) : mA(a), mB(b), mC(c) {}

    int SumModuloC() const
    {
        return (mA + mB) % mC;
    }

    int SumModuloCIndividual() const
    {
        return ((mA % mC) + (mB % mC)) % mC;
    }

    int MultiplyModuloC() const
    {
        return (mA * mB) % mC;
    }

    int MultiplyModuloCIndividual() const
    {
        return ((mA % mC) * (mB % mC)) % mC;
    }
};

int main()
{
	int a{}, b{}, c{};

	std::cin >> a >> b >> c;

    Calculator calculator(a, b, c);

    std::cout << calculator.SumModuloC() << std::endl;
    std::cout << calculator.SumModuloCIndividual() << std::endl;
    std::cout << calculator.MultiplyModuloC() << std::endl;
    std::cout << calculator.MultiplyModuloCIndividual() << std::endl;
}

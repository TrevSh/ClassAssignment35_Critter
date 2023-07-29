// ClassAssignment35_Critter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Critter {         //class definition -- defines a new type, Critter.
public:
    int m_Hunger;       //data member
    void Greet();       //member function
};

void Critter::Greet() {     //Member function definition
    std::cout << "Hello! I am a wee little critter. My hunger level is " << m_Hunger << "!" << "\n";
}

int main()
{
    Critter c1;
    Critter c2;

    c1.m_Hunger = 9;
    std::cout << "Critter 1's hunger level is "<<c1.m_Hunger<<"!\n";
    
    c2.m_Hunger = 3;
    std::cout << "Critter 2's hunger level is "<<c2.m_Hunger<<"!\n";

    c1.Greet();
    c2.Greet();

    system("pause");
}

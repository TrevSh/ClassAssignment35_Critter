// ClassAssignment35_Critter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Critter {         //class definition -- defines a new type, Critter.
public:
    int m_Hunger;       //data member
    void Greet();       //member function
    Critter(int hunger);//Constructor prototype
};

//Constructor for Critter. Is called each time a Critter item is instantiated.
Critter::Critter(int hunger) {      
    std::cout << "A critter! A critter has been born!" << "\n";
    m_Hunger = hunger;
}

void Critter::Greet() {     //Member function definition
    std::cout << "Hello! I am a wee little critter. My hunger level is " << m_Hunger << "!" << "\n";
}

int main()
{
    Critter c1(4);          //Creating a critter using the constructor. 
    c1.Greet();

    system("pause");
}

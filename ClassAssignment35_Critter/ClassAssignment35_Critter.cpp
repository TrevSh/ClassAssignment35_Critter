// ClassAssignment35_Critter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Critter {         //class definition -- defines a new type, Critter.
public:
    void Greet();       //member function
    Critter(int hunger);//Constructor prototype
    int GetHunger() const;
    void SetHunger(int hunger);
private:
    int m_Hunger;       //private data member
};

//Constructor for Critter. Is called each time a Critter item is instantiated. Must have same name as class.
Critter::Critter(int hunger) :      //Using member initialization to give hunger a value. Colon starts initialization followed by brackets after variables are assigned values.
    m_Hunger(hunger)                
{
    std::cout << "A critter! A critter has been born!" << "\n";
}

//returns a private variable. In this case, hunger. Const because we dont want to change the value here.
int Critter::GetHunger() const {
    return m_Hunger;
}

//Used to modify a private variable.
void Critter::SetHunger(int hunger) {
    if (hunger < 0) {
        std::cout << "Illegal. Cannot be lower than 0. Im calling the cops.";
    }
    else {
        m_Hunger = hunger;
    }
}

void Critter::Greet() {     //Member function definition
    std::cout << "Hello! I am a wee little critter. My hunger level is " << m_Hunger << "!" << "\n";
}

int main()
{
    Critter c1(4);          //Creating a critter using the constructor. 

    //We use GetHunger() because you cannot directly access a private variable.
    std::cout << "Calling GetHunger(): " << c1.GetHunger() << "\n\n";

    std::cout << "Calling SetHunger() with -1. \n";
    c1.SetHunger(-1);
    std::cout << "Calling SetHunger() with 9. \n";
    c1.SetHunger(9);
    std::cout << "Calling GetHunger(): " << c1.GetHunger() << "\n\n";

    system("pause");
}

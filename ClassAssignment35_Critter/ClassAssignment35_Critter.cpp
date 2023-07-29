
#include <iostream>

class Critter {         //class definition -- defines a new type, Critter.
public:                 //Public can be accessed anywhere
    static int s_Total;     //static member variable declaration. A static member exists for the entire class. Stores total number of Critter objects.
    static int GetTotal();

    void Greet();       //member function
    Critter(int hunger);//Constructor prototype
    int GetHunger() const;
    void SetHunger(int hunger);
private:                //Private can only be accessed via member functions. Class members are private by default.
    int m_Hunger;       //private data member
};


int Critter::s_Total = 0;       //static member initializiation.

int Critter::GetTotal() {       //static member function definition.
    return s_Total;
}

//Constructor for Critter. Is called each time a Critter item is instantiated. Must have same name as class.
Critter::Critter(int hunger) :      //Using member initialization to give hunger a value. Colon starts initialization followed by brackets after variables are assigned values.
    m_Hunger(hunger)                
{
    std::cout << "New Critter instantiated." << "\n";
    ++s_Total;                      //Adds instantiated Critter to s_Total.
}

//returns a private variable. In this case, hunger. Const because we dont want to change the value here.
int Critter::GetHunger() const {
    return m_Hunger;
}

//Used to modify a private variable.
void Critter::SetHunger(int hunger) {
    //Prevents hunger from going below 0
    if (hunger < 0) {
        std::cout << "Illegal. Cannot be lower than 0. Im calling the cops.\n\n";
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
    std::cout << "The total number of Critters is: ";
    std::cout << Critter::s_Total << "\n\n";

    Critter c2(5), c3(7), c4(8);

    std::cout << "The total number of Critters is: ";
    std::cout << Critter::GetTotal() << "\n\n";
    //-------------------------------------------------------------------------------------
    //We use GetHunger() because you cannot directly access a private variable.
    std::cout << "Calling GetHunger(): " << c1.GetHunger() << "\n\n";

    std::cout << "Calling SetHunger() with -1. \n";
    c1.SetHunger(-1);
    std::cout << "Calling SetHunger() with 9. \n";
    c1.SetHunger(9);
    std::cout << "Calling GetHunger(): " << c1.GetHunger() << "\n\n";
    //-------------------------------------------------------------------------------------

    system("pause");
}

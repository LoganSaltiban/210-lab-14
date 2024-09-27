#include <iostream>

using namespace std;

class Color
{
private:
    int red;
    int green;
    int blue;

public:
    // Setters
    void set_Red(int redValue) { red = redValue; }
    void set_Green(int greenValue) { green = greenValue; }
    void set_Blue(int blueValue) { blue = blueValue; }

    // Getters
    int get_Red() { return red; }
    int get_Green() { return green; }
    int get_Blue() { return blue; }
    
    // Print 
    void print_RGB() 
    { 
        cout << "Red: " << red << endl; 
        cout << "Green: " << green << endl;
        cout << "Blue: " << blue << endl;
    }
};

int main()
{
    Color Purple;
    // Initialize Purple Hex Colors
    Purple.set_Red(157);
    Purple.set_Green(0);
    Purple.set_Blue(255);
    cout << "Purple RGB Colors are: " << endl;
    Purple.print_RGB();

    Color Crimson;
    // Initialize Crimson Hex Colors
    Crimson.set_Red(220);
    Crimson.set_Green(20);
    Crimson.set_Blue(60);
    cout << "Crimson RGB Colors are: " << endl;
    Crimson.print_RGB();

    Color Mustard;
    // Initialize Mustard Hex Colors
    Mustard.set_Red(225);
    Mustard.set_Green(173);
    Mustard.set_Blue(1);
    cout << "Mustard RGB Colors are: " << endl;
    Mustard.print_RGB();

    return 0;
}
/*
COMSC-210 | Lab 16 | Rylan Der
IDE Used: Visual Studio Code
*/

#include <iostream>

using namespace std;

class Color {
    public:
        //Default constructor
        Color() { r = 0; g = 0; b = 0; }

        //Partial constructors
        Color(int r) { this->r = r; g = 0; b = 0; }
        Color(int r, int g): r(r), g(g), b(0) { }

        //Full parameter constructor
        Color(int r, int g, int b): r(r), g(g), b(b) { }

        //getters & setters
        void setR(int r) { this->r = r; }
        void setG(int g) { this->g = g; }
        void setB(int b) { this->b = b; }
        int getR() const { return r; }
        int getG() const { return g; }
        int getB() const { return b; }

        /**
         * Prints color RGB values
         */
        void print();

    private:
        int r;
        int g;
        int b;
};

int main() {
    //Populate colors using a variety of constructors

    //Partial constructors
    Color red(255);
    Color orange(255, 150); 
    Color yellow(255, 255); 
    Color green(0, 255); 

    //Full constructors
    Color blue(0, 0, 255);
    Color purple(150, 0, 255); 
    Color white(255, 255, 255);

    //Default constructor
    Color black;

    //Output colors
    red.print();
    orange.print();
    yellow.print();
    green.print();
    blue.print();
    purple.print();
    white.print();
    black.print();

    //end funky text coloring
    cout << "\033[0m";
}

void Color::print() {
    //funky text coloring
    cout << "\033[38;2;" << r << ";" << g << ";" << b << "m";

    cout << "R: " << r << endl;
    cout << "G: " << g << endl;
    cout << "B: " << b << endl;
    cout << endl;
}
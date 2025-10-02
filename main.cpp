/*
COMSC-210 | Lab 16 | Rylan Der
IDE Used: Visual Studio Code
*/

#include <iostream>

using namespace std;

class Color {
    public:
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
    Color red, orange, yellow, green, blue, purple, white, black;
    
    //Fill colors
    red.setR(255);
    red.setG(0);
    red.setB(0);

    orange.setR(255);
    orange.setG(150);
    orange.setB(0);

    yellow.setR(255);
    yellow.setG(255);
    yellow.setB(0);

    green.setR(0);
    green.setG(255);
    green.setB(0);

    blue.setR(0);
    blue.setB(255);
    blue.setG(0);

    purple.setR(150);
    purple.setB(255);
    purple.setG(0);

    white.setR(255);
    white.setG(255);
    white.setB(255);

    black.setR(0);
    black.setG(0);
    black.setB(0);

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
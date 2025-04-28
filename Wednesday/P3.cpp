#include <iostream>

enum Color {
    BLACK,
    WHITE,
    BLUE
};

int main() {
    Color myColor = WHITE;

    if (myColor == WHITE) {
        std::cout << "The color is White." << std::endl;
    }

    return 0;
}
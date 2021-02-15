#include <iostream>

int main()
{
	// Write an PPM image to stdout (example from wikipedia)
	std::cout << "P3\n"; // RGB color in ASCII
	std::cout << "3 2\n"; // 3 pixels wide and 2 pixels high
	std::cout << "255\n"; // maximum value for each color
	std::cout << "255 0 0\n"; // red
	std::cout << "0 255 0\n"; // green
	std::cout << "0 0 255\n"; // blue
	std::cout << "255 255 0\n"; // yellow
	std::cout << "255 255 255\n"; // white
	std::cout << "0 0 0\n"; // black
}

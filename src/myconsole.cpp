#include "../include/myconsole.hpp"

#include <iostream>
using namespace std;
void setColor(AnsiColor color) {
  cout << "\033[" << static_cast<int>(color) << "m";
}
void CursorPosition(int y, int x, string text) {
  cout << "\033[" << y << ";" << x << "H" << text << endl;
}
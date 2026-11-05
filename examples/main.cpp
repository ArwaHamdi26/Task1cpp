#include <iostream>

#include "../include/myconsole.hpp"
using namespace std;
int main() {
  setColor(AnsiColor::Green);
  CursorPosition(5, 100, "Main Menu");
  setColor(AnsiColor::Reset);
  CursorPosition(7, 100, "Start");
  setColor(AnsiColor::Red);
  CursorPosition(9, 100, "Exit");
  setColor(AnsiColor::Reset);
  return 0;
}
#include <iostream>

#include "../include/myconsole.hpp"
using namespace std;
int main() {
  myconsole::initialize();
  myconsole::setColor(myconsole::AnsiColor::Green);
  myconsole::CursorPosition(5, 30, "Main Menu");
  myconsole::setColor(myconsole::AnsiColor::Reset);
  myconsole::CursorPosition(7, 30, "Start");
  myconsole::setColor(myconsole::AnsiColor::Red);
  myconsole::CursorPosition(9, 30, "Exit");
  myconsole::setColor(myconsole::AnsiColor::Reset);
  return 0;
}
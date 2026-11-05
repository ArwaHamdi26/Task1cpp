#ifndef MYCONSOLE_HPP
#define MYCONSOLE_HPP

#include <iostream>
#include <string>
using namespace std;
namespace myconsole {
// Ansi color code values
enum class AnsiColor : int {
  Black = 30,
  Red = 31,
  Green = 32,
  Yellow = 33,
  Blue = 34,
  Magenta = 35,
  Cyan = 36,
  White = 37,
  BrightBlack = 90,
  BrightRed = 91,
  BrightGreen = 92,
  BrightYellow = 93,
  BrightBlue = 94,
  BrightMagenta = 95,
  BrightCyan = 96,
  BrightWhite = 97,
  Reset = 0
};

void setColor(AnsiColor color);
void CursorPosition(int y, int x, string text);
bool initialize();
}  // namespace myconsole
#endif
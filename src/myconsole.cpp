#include "../include/myconsole.hpp"

#include <iostream>
using namespace std;
#ifdef _WIN32
#include <windows.h>
#endif

namespace myconsole {

bool initialize() {
#ifdef _WIN32

  HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

  if (h == INVALID_HANDLE_VALUE) return false;

  DWORD Mode = 0;

  if (!GetConsoleMode(h, &Mode)) return false;

  Mode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;

  if (!SetConsoleMode(h, Mode)) return false;

#endif
  return true;
}
void setColor(AnsiColor color) {
  cout << "\033[" << static_cast<int>(color) << "m";
}
void CursorPosition(int y, int x, string text) {
  cout << "\033[" << y << ";" << x << "H" << text << endl;
}
}  // namespace myconsole
#include <iostream>

using namespace std;

struct WindowParams {
  int x;
  int y;
  char bgChar;
};

struct Window {
  char *window;
};

Window *DisplayWindow(WindowParams *params) {
  char *grid[params->x][params->y];

  Window w;
  w.window = grid;

  return &window;
}

int main() {

  WindowParams displayParams displayParams.x = 300;
  displayParams.y = 300;
  displayParams.bgChar = 'X';

  return 0;
}

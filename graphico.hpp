#ifndef __VISUALIZE_HPP
#define __VISUALIZE_HPP

#include <iostream>
#include <vector>

using SCREEN = std::vector<std::vector<char>>;

void draw_on_screen(SCREEN& screen, int x, int y, char i) {
    screen[x][y] = i;
}

void visualize(const SCREEN& screen) {
  // Draw a top border.
  for (auto row : screen) {
    std::cout << "|";
    for (auto pixel : row) {
      std::cout << "---";
    }
    std::cout << "|\n";
    break;
  }

  for (auto row : screen) {
    std::cout << "|";
    for (auto pixel : row) {
      std::cout << " " << pixel << " ";
    }
    std::cout << "|\n";
  }

  // Draw a bottom border.
  for (auto row : screen) {
    std::cout << "|";
    for (auto pixel : row) {
      std::cout << "---";
    }
    std::cout << "|\n";
    break;
  }
}

void clear_screen(SCREEN& screen) {
  for (auto& row : screen) {
    for (auto& pixel : row) {
      pixel = ' ';
    }
  }
}

SCREEN make_screen(int height, int width) {
  return SCREEN(height, std::vector<char>(width, ' '));
}


void draw_smiley(std::vector<std::vector<char>> &screen) {
  draw_on_screen(screen, 1, 3, '$');
  draw_on_screen(screen, 1, 5, '$');
  draw_on_screen(screen, 3, 4, '|');
  draw_on_screen(screen, 4, 4, '*');

  draw_on_screen(screen, 5, 2, '\\');
  draw_on_screen(screen, 6, 3, '\\');

  draw_on_screen(screen, 7, 4, '-');
  draw_on_screen(screen, 6, 5, '/');
  draw_on_screen(screen, 5, 6, '/');
}
#endif
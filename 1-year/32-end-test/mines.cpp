#include <iostream>
using namespace std;

short MINE = 9;

void readMines(short field[32][32], short mineNumber) {
  short x, y;
  
  for (short i = 0; i < mineNumber; i++) {
    cin >> x >> y;
    field[x - 1][y - 1] = MINE;
  }
}

short countMines(short field[32][32], short x, short y) {
  short count = 0;

  if (x - 1 >= 0 && y - 1 >= 0 && field[x - 1][y - 1] == MINE) count++;
  if (y - 1 >= 0 && field[x][y - 1] == MINE) count++;
  if (x + 1 < 32 && y - 1 >= 0 && field[x + 1][y - 1] == MINE) count++;
  if (x + 1 < 32 && field[x + 1][y] == MINE) count++;
  if (x + 1 < 32 && y + 1 < 32 && field[x + 1][y + 1] == MINE) count++;
  if (y + 1 < 32 && field[x][y + 1] == MINE) count++;
  if (x - 1 >= 0 && y + 1 < 32 && field[x - 1][y + 1] == MINE) count++;
  if (x - 1 >= 0 && field[x - 1][y] == MINE) count++;

  return count;
}

void printField(short field[32][32], short x, short y) {
  for (short i = 0; i < x; i++) {
    for (short j = 0; j < y; j++) {
      if (field[i][j] == MINE) {
        cout << "*";
      } else {
        cout << field[i][j];
      }
    }
    cout << endl;
  }
}

int main() {
  short x, y, mineNumber;
  short field[32][32] = {};

  cin >> x >> y >> mineNumber;
  readMines(field, mineNumber);

  for (short i = 0; i < x; i++) {
    for (short j = 0; j < y; j++) {
      if (field[i][j] != MINE) {
        field[i][j] = countMines(field, i, j);
      }
    }
  }

  printField(field, x, y);

  return 0;
}
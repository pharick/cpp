#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ncurses.h>
using namespace std;

const int WIDTH = 10;  // Ширина поля
const int HEIGHT = 20; // Высота поля

const bool O_BLOCK[4][4][4] = {
    {{1, 1, 0, 0},
     {1, 1, 0, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}},

    {{1, 1, 0, 0},
     {1, 1, 0, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}},

    {{1, 1, 0, 0},
     {1, 1, 0, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}},

    {{1, 1, 0, 0},
     {1, 1, 0, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}}};
const int O_BLOCK_SIZE_X[4] = {2, 2, 2, 2};
const int O_BLOCK_SIZE_Y[4] = {2, 2, 2, 2};
const bool O_BLOCK_COLOR = 1;

const bool I_BLOCK[4][4][4] = {
    {{1, 0, 0, 0},
     {1, 0, 0, 0},
     {1, 0, 0, 0},
     {1, 0, 0, 0}},

    {{1, 1, 1, 1},
     {0, 0, 0, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}},

    {{1, 0, 0, 0},
     {1, 0, 0, 0},
     {1, 0, 0, 0},
     {1, 0, 0, 0}},

    {{1, 1, 1, 1},
     {0, 0, 0, 0},
     {0, 0, 0, 0},
     {0, 0, 0, 0}}};
const int I_BLOCK_SIZE_X[4] = {1, 4, 1, 4};
const int I_BLOCK_SIZE_Y[4] = {4, 1, 4, 1};
const bool I_BLOCK_COLOR = 1;

int item_x, item_y; // Координаты падающего блока
int item_color;     // Цвет блока (от 1 до 7)
bool item[4][4];    // Стуктура отображения блока
int item_size_x, item_size_y;
int item_flip;

int field[HEIGHT][WIDTH] = {0}; // Поле тетриса

void ncurses_init()
{
    initscr();
    scrollok(stdscr, TRUE);
    nodelay(stdscr, TRUE);
    noecho();
}

void insert_item_to_field(int x, int y, bool item[4][4], int color)
{
    for (int i = 0; i < item_size_y; i++)
    {
        for (int j = 0; j < item_size_x; j++)
        {
            if (item[i][j])
            {
                field[y + i][x + j] = color;
            }
        }
    }
}

void remove_item_from_field(int x, int y, bool item[4][4])
{
    for (int i = 0; i < item_size_y; i++)
    {
        for (int j = 0; j < item_size_x; j++)
        {
            if (item[i][j])
            {
                field[y + i][x + j] = 0;
            }
        }
    }
}

void generate_new_item()
{
    item_flip = 0;
    item_size_x = I_BLOCK_SIZE_X[item_flip];
    item_size_y = I_BLOCK_SIZE_Y[item_flip];
    item_x = WIDTH / 2 - item_size_x / 2;
    item_y = 0;
    item_color = I_BLOCK_COLOR;

    for (int i = 0; i < item_size_y; i++)
    {
        for (int j = 0; j < item_size_x; j++)
        {
            item[i][j] = I_BLOCK[item_flip][i][j];
        }
    }

    insert_item_to_field(item_x, item_y, item, item_color);
}

void draw_point(int point)
{
    switch (point)
    {
    case 0:
        cout << ".";
        break;
    case 1:
        cout << "X";
        break;
    }
    cout << " ";
}

void draw_field()
{
    cout << "+";
    for (int i = 0; i < HEIGHT; i++)
        cout << "-";
    cout << "+\r\n";

    for (int i = 0; i < HEIGHT; i++)
    {
        cout << "|";

        for (int j = 0; j < WIDTH; j++)
        {
            draw_point(field[i][j]);
        }

        cout << "|\r\n";
    }

    cout << "+";
    for (int i = 0; i < HEIGHT; i++)
        cout << "-";
    cout << "+\r\n";
}

void process_fall(int *y)
{
    (*y)++;
}

bool check_collision_bottom(int item_x, int item_y, int item_size_x, int item_size_y)
{
    if (item_y + item_size_y >= HEIGHT)
        return true;

    for (int i = item_x; i < item_x + item_size_x; i++)
    {
        if (field[item_y + item_size_y][i])
        {
            return true;
        }
    }

    return false;
}

bool check_collision_left(int item_x, int item_y, int item_size_x, int item_size_y)
{
    if (item_x <= 0)
        return true;

    for (int i = item_y; i < item_y + item_size_y; i++)
    {
        if (field[i][item_x - 1])
        {
            return true;
        }
    }

    return false;
}

bool check_collision_right(int item_x, int item_y, int item_size_x, int item_size_y)
{
    if (item_x + item_size_x >= WIDTH)
        return true;

    for (int i = item_y; i < item_y + item_size_y; i++)
    {
        if (field[i][item_x + item_size_x])
        {
            return true;
        }
    }

    return false;
}

void process_keyboard()
{
    char key = getch();
    bool collision_left = false, collision_right = false;

    switch (key)
    {
    case 'a':
        collision_left = check_collision_left(item_x, item_y, item_size_x, item_size_y);
        if (!collision_left)
            item_x--;
        break;
    case 'd':
        collision_right = check_collision_right(item_x, item_y, item_size_x, item_size_y);
        if (!collision_right)
            item_x++;
        break;
    case 'w':
        item_flip++;
        if (item_flip > 3)
            item_flip = 0;
        item_size_x = I_BLOCK_SIZE_X[item_flip];
        item_size_y = I_BLOCK_SIZE_Y[item_flip];

        for (int i = 0; i < item_size_y; i++)
        {
            for (int j = 0; j < item_size_x; j++)
            {
                item[i][j] = I_BLOCK[item_flip][i][j];
            }
        }

        break;
    }
}

void delete_fill_lines()
{
}

int main()
{
    ncurses_init();

    while (true)
    {
        generate_new_item();
        bool collision_bottom = false;

        do
        {
            remove_item_from_field(item_x, item_y, item);
            process_fall(&item_y);
            process_keyboard();
            usleep(500000);
            insert_item_to_field(item_x, item_y, item, item_color);
            collision_bottom = check_collision_bottom(item_x, item_y, item_size_x, item_size_y);
            system("clear"); // Очистка экрана
            draw_field();
        } while (!collision_bottom);

        delete_fill_lines();
    }

    endwin();
    return 0;
}
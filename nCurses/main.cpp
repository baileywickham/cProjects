#include <ncurses.h>
#include <stdio.h>
#include <time.h>
using namespace std;

void sleep(unsigned int mseconds);

int main() {
    initscr();
    noecho();
    //cbreak;
    char arr[101];
    for (int i = 0; i < 100; i++) {
        arr[i] = '|';
        printw(arr);
        refresh();
        sleep(250000);
    }
    getch();
    endwin();
    return 0;
}

void sleep(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
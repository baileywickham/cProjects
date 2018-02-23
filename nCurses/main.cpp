#include <ncurses.h>
#include <stdio.h>
#include <time.h>
using namespace std;

void sleep(unsigned int mseconds);

int main()
{
    char ch[101];
    int row, col;
    initscr();			/* Start curses mode 		*/
    raw();				/* Line buffering disabled	*/
    keypad(stdscr, TRUE);		/* We get F1, F2 etc..		*/
    noecho();			/* Don't echo() while we do getch */
    getmaxyx(stdscr,row,col);
    for (int i = 0; i < 100; i++) {
        ch[i] = ' ';
    }
    for (int j = 0; j < 100; j++) {
        ch[j] = '|';
        mvprintw(row/2, 10, ch);
        sleep(250000);
        refresh();
    }

    refresh();			/* Print it on to the real screen */
    getch();			/* Wait for user input */
    endwin();			/* End curses mode		  */

    return 0;
}

void sleep(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

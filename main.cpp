#include <ncurses.h>			/* ncurses.h includes stdio.h */
#include <zconf.h>

int main()
{
 int row,col;				/* to store the number of rows and *
					 * the number of colums of the screen */
 initscr();				/* start the curses mode */
 getmaxyx(stdscr,row,col);		/* get the number of rows and columns */
                                	/* print the message at the center of the screen */ 

 noecho();
 char arr[100];

 for (int i = 0; i < 100; i++) {
    arr[i] = '|';
    mvprintw(row/2, 0, arr);
    refresh();
    sleep(1);
 }

 mvprintw(row-2,0,"This screen has %d rows and %d columns\n",row,col);
 printw("Try resizing your window(if possible) and then run this program again");
 refresh();
 getch();
 endwin();
 return 0;
}

/* ncurses tutorial for now */
/* https://github.com/mcdaniel/curses_tutorial */
/* https://tldp.org/HOWTO/NCURSES-Programming-HOWTO/helloworld.html */

#include <stdlib.h>
#include <ncurses.h>
#include <panel.h>

int main() {

    int y = 15;
    int x = 15;

    initscr();
    mvprintw(y, x, "DUDUDUUDDUD\n");
    refresh();
    noecho();
    getch();

    /* from tutorial */

    raw(); /* disable line buffering */
    keypad(stdscr, TRUE);
    noecho(); 

    printw("im gonna bold typed character\n");
    int ch = getch();

    if (ch == KEY_F(1)) printw("you have pressed the F1");
    else {
        printw("you have pressed: ");
        attron(A_BOLD);
        printw("%c", ch);
        attroff(A_BOLD);
    }
    
    refresh();

    getch();
    endwin();

    return EXIT_SUCCESS;
}

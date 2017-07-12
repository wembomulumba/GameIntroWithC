#include<ncurses.h>
#include<unistd.h>

#define DELAY 30000

int main(int argc , char *argv[]){

  int x = 0 , y = 0;
  initscr();
  noecho();
  curs_set(FALSE);

  while(1){

    clear();

    mvprintw(y, x,"o");
    refresh();

    usleep(DELAY);
    x++;

  }

  endwin();
  
}

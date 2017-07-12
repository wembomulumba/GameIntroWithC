// demo.c about game and curses

#include<ncurses.h>
#include<unistd.h>

int main(int argc, char * argv[]){

  initscr();
  noecho();
  curs_set(FALSE);

  

  mvprintw(0,0,"Hello Mulumba Otepa !");
  refresh();
  
  sleep(3);
  endwin(); // restore normal terminal behavior
  

}

#include <curses.h>
 
int r, c, // current row and column(upper-left is (0,0))
  nrows,
  ncols;

void draw(char dc)
{

  move(r,c); // curses call to mlove cursor to row r, comumnc
  delch();
  refresh(); // curses call to update screen
  r++;

  if(r == nrows){

    r = 0;
    c++;
    if(c == ncols) c = 0;

  }
}

int main()
{

  int i ; char d;
  WINDOW *wnd;

  wnd = initscr();
  cbreak();
  noecho();
  getmaxyx(wnd,nrows,ncols);// curses call to find size of window
  clear();
  refresh();

  r = 0;  c = 0;
  while(1){


    d = getch();
    if(d == 'q') break; // quit ?
    draw(d);

  }

  endwin(); // curses call to restore the original window and leave

}

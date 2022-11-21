#include <array>
#include <iostream>
#include <string>
#include <curses>


using std::array;
using std::cin;
using std::cout;
using std::endl;
using std::getchar;
using std::string;


void paintFrame();
void userAction();

const int MAXCOLS = 50;
const int MAXROWS = 20;
array<int, 2> head{24, 9};


int main()
{
	system("clear");
    paintFrame();
	userAction();
    main();

    return 0;
}

void paintFrame()
{
    for (int row = 0; row < MAXROWS; row++)
    {
        for (int col = 0; col < MAXCOLS; col++)
        {
            if (row == 0 || row == MAXROWS - 1)
            {
                if (col == 0 || col == MAXCOLS - 1)
                    cout << "+";
                else
                    cout << "-";
            }
            else
            {
                if (col == 0 || col == MAXCOLS - 1)
                    cout << "|";
                else
                {
                    if (head[0] == col && head[1] == row)
                        cout << "Ö";
                    else
                        cout << " ";
                }
            }
        }
        cout << endl;
    }
}

void userAction()
{
    char ch = getchar();

    switch (ch)
    {
    case 'a':
        head[0] = head[0] - 1;
        break;
    case 'd':
        head[0] = head[0] + 1;
        break;
    case 'w':
        head[1] = head[1] - 1;
        break;
    case 's':
        head[1] = head[1] + 1;
        break;
    }
}
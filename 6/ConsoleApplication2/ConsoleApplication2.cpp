#include<iostream> 
#include <ctime>
#include <conio.h>
using namespace std;
int width = 45, height = 15, x = 1, y = 1, counter = 0;
int s[55] = { -1 }, ss[55] = { -1 };
bool t = true,f=0;
static int yy, xx;
void start()
{
	x = width / 2;
	y = height / 2;
topp:
	int fruitx = rand() % width;
	int fruity = rand() % height;
here:
	for (int i = -1; i <= height; i++)
	{
		for (int j = -1; j <= width; j++)
		{
			if (i == -1 || i == height)
			{
				for (int i = -1; i <= width; i++)
				{
					cout << "#";
				}
				break;
			}
			else
			{
				if (counter) {
					for (int k = 0; k < counter; k++)
					{
						if (j == s[k] && i == ss[k])
						{
							cout << "o";
							goto there;
						}
					}
				}
				if (j == -1 || j == width)
					cout << "#";

				else if (x == j && y == i)
				{
					cout << "O";
				}
				else if (fruitx == j && fruity == i)
					cout << "F";
				else
					cout << " ";
			there:
				;
			}
		}
		cout << endl;
	}
	string dir;
	xx = x;
	yy = y;
	int ult, ultt;
		if (1)
		{
			char r = _getch();
			if (r == 'w')
				dir = "up";
			else if (r == 'd')
				dir = "right";
			else if (r == 'a')
				dir = "left";
			else if (r == 's')
				dir = "down";
			else
				;

			if (dir == "right")
				x++;
			else if (dir == "left")
				x--;
			else if (dir == "up")
				y--;
			else if (dir == "down")
				y++;
			else
				goto hi;

		}
		if (x == width || x == -1 || y == height || y == -1)
			return;
	f = false;
	if (fruitx == x && fruity == y)
	{
		counter++;
		time_t* p = NULL;
		srand(static_cast<int>(time(p)));
		f = true;
	}
	for (int i = 0; t == true && i < counter; i++)
	{
		ult = s[i];
		ultt = ss[i];
		s[i] = xx;
		ss[i] = yy;
		xx = ult;
		yy = ultt;

	}
	for (int i = 0;t==true&& i < counter&&counter>0; i++)
	{
		if (x == s[i] && y == ss[i])
			return;
	}
	hi:
	system("cls");
	if (f)

		goto topp;
	goto here;
}
int main(void)
{
	start();
	return 0;
}

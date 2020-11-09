#include<iostream>
using namespace std;
void square(int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == 0)
			{cout << "*";}
			else if (i == r - 1)
			{
				cout << "*";
			} else if (j == 0 )
			{
				cout << "*";
			} else if ( j == c - 1)
			{
				cout << "*";

			} else {
				cout << " ";
			}
        }
		cout << "\n";
	}
}
void circle(int r, int c) {
	int maxr = r / 2;
	maxr = r - maxr;
	int maxc = c / 2;
	int firstblock  = c - maxc - maxc / 2 - 1;//To find 1st block in 1st row where we should start printing the pattern
	int lastblock = firstblock + maxc - 1;
	int firstleft = r - maxr - maxr / 2 ;//To find the 1st block column wise to print *
	int lastleft = firstleft + maxr - 1;
	int ci1 = firstblock - 1;
	int ci2 = lastblock + 1;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == 0 || i == r - 1)
			{
				if (j >= firstblock && j <= lastblock)
				{
					cout << "*";
				} else {
					cout << " ";
				}
			} else if (i == 1 || i == r - 2)
			{
				if ( j == ci2 || j == ci1)
				{
					cout << "*";
				} else {
					cout << " ";
				}
			} else {
				if (i >= firstleft && i <= lastleft)
				{
					if (j == 0 || j == c - 1)
					{
						cout << "*";
					} else {
						cout << " ";
					}
				}
			}

		}
		cout << "\n";
	}
}
void arrow(int r, int c)
{
	int midrow = c / 2 ;
    int secondblock = midrow + 2;
	int secondlastblock = midrow + 2;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{

			if (i == 1) {
				if ( j == midrow - 1)
				{
					cout << "*";
				}
			}
			if (i == 2)
			{	if ( j == midrow - 1)
				{
					cout << "*";
				}
				if ( j == midrow - 2)
				{
					cout << "*";
				}
            }
			if (j == midrow )
			{
				cout << " *";
			}
			else {
				cout << " ";
			}
            if (i == 1)
			{
                if ( j == midrow + 1)
				{
					cout << "*";
				}
			}
			if (i == 2)
			{	if ( j == midrow + 1)
				{
					cout << "*";
				}
				if ( j == midrow + 2)
				{
					cout << "*";
				}
            }
        }
		cout << "\n";
	}
}
void diamond(int r, int c)
{
	int midline = r / 2;
	int consti = r * 1.4;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == 0 || i == r - 1)
			{
				if (j == midline)
				{
					cout << "*";
				} else {
					cout << " ";
				}
			}
			else {

				if (j == midline - i || j == midline + i)
				{
					cout << "*";
				} else if (i - j == midline)
				{
					cout << "*";
                }
				else if (i + j == consti)
				{
					cout << "*";
                }
				else {
					cout << " ";
                    }
			}
		}
		cout << "\n";
	}

}
int main()
{
    int r, c;
	cout << "Enter number of rows and Column of sqaure \n";
	cin >> r >> c  ;
	square(r, c);
	int r1, c1;
	cout << "Enter number of rows and Column of Circle \n";
	cin >> r1 >> c1  ;
	circle(r1, c1);

	int r2, c2;
	cout << "Enter number of rows and Column of Arrow \n";
	cin >> r2 >> c2  ;
	arrow(r2, c2);

	int r3, c3;
	cout << "Enter number of rows and Column of Diamond \n";
	cin >> r3 >> c3  ;
	diamond(r3, c3);
	return 0;
}

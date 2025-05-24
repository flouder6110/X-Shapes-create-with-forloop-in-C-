#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

/* 

 #            #
  ##        ##
   ###    ###
    ########
    ########
   ###    ###
  ##        ##
 #            #

   */

int main()
{
	for (int i = 1; i <= 4; i++)
	{
		for (int space = 1; space <= i; space++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "#";
		}
		for (int middlespacing = 1; middlespacing <= 8 - (i * 2); middlespacing++)
		{
			cout << " ";
		}
		for (int spaceRight = 1; spaceRight <= 9 - (2 * i) - 1; spaceRight++)
		{
			cout << " ";
		}
		for (int hashleft = 4; hashleft <= 3+ i; hashleft++)
		{
			cout << "#";
		}
		cout << "\n";
	}
	for (int row = 1; row <= 4; row++)
	{
		for (int space = 1; space <= 5 - row; space++)
		{
			cout << " ";
		}
		for (int hash = 1; hash <= 5 - row; hash++)
		{
			cout << "#";
		}
		for (int middle = 2; middle <= -1 + row * 2; middle++)
		{
			cout << " ";
		}
		for (int left = 1; left <= -2 + row * 2; left++)
		{
			cout << " ";
		}
		for (int leftspace = 4; leftspace <= 8 - row; leftspace++)
		{
			cout << "#";
		}
		cout << "\n";
	}

	return 0;
}

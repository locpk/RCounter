#include <iostream>
#define ROW 5
#define COL 5
using namespace std;

int main()
{
	int maxIndex; 
	int arr[ROW][COL]  = 
	  { 1, 1, 1, 0, 0,
		1, 1, 0, 0, 0,
		1, 1, 1, 1, 0,
		1, 0, 0, 0, 0,
		1, 1, 1, 0, 0 };
	int R = 0; //for row indexing
	int C = 0; //for column indexing
	while (R < ROW && C < COL)
	{
		if (arr[R][C] == 1)
		{
			C++;		//shift right
			maxIndex = R;
		}
		else
			R++;		//shift down
	}
	cout << maxIndex << "'s row with the most 1s." << endl;
}
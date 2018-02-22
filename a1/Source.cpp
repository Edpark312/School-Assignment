// tic tac toe with variables

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int board1 = 0;		// top row left
	int board2 = 0;		// top row middle
	int board3 = 0;		// top row right
	int board4 = 0;		// middle row left
	int board5 = 0;		// middle row middle
	int board6 = 0;		// middle row left
	int board7 = 0;		// bottom row left
	int board8 = 0;		// bottom row middle
	int board9 = 0;		// bottom row right

	cout << board1 << "|" << board2 << "|" << board3 << endl;
	cout << "-----" << endl;
	cout << board4 << "|" << board5 << "|" << board6 << endl;
	cout << "-----" << endl;
	cout << board7 << "|" << board8 << "|" << board9 << endl;

	system("pause");
	return 0;
}// end of main
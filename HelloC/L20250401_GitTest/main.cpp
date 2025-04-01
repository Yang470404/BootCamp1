#include <iostream>

using namespace std;

int main()
{
	int Number1 = 1;
	int Number2 = 2;

	// () 해주는거 습관들이기. 누가봐도 혼동이 없는 것이 best.
	cout << (Number1 + Number2) << endl;
	cout << (Number1 - Number2) << endl;
	cout << (Number1 * Number2) << endl;
	cout << (Number1 / Number2) << endl;

	float Number3 = 10.5f;
	float Number4 = 2.6f;

	cout << (Number3 + Number4) << endl;
	cout << (Number3 - Number4) << endl;
	cout << (Number3 * Number4) << endl;
	cout << (Number3 / Number4) << endl;

	return 0;
}
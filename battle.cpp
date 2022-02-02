#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <queue>

using namespace std;

void battle() {
	queue<string> turn;
	int action;
	cout << "What will you do?\n1. Attack\n2. Command Arts\n3. Defend\n4. Item\n5. Flee\n Action: ";
	cin >> action;
	switch (action) {
	case 1:
		cout << "Character attacks!";
		break;
	case 2:

	case 3:

	case 4:

	case 5:

	default:
		cout: "That is not a valid action!";
		break;
	}
}
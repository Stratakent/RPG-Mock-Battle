#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <queue>

using namespace std;

//idea is to be able to control your characters while the opposing enemy will be attacking and via "AI"
void battle() {
	queue<string> turn;//setting up turn order possibly by speed.
	
	int action;
	bool friendly;
	cout << "What will you do?\n1. Attack\n2. Command Arts\n3. Guard\n4. Item\n5. Flee\n Action: ";
	cin >> action;
	switch (action) {
	case 1:
		cout << "Character attacks!";
		break;
	case 2:
		cout << "Character uses ______!";
		break;
	case 3:
		cout << "Character Guards!"
		break;
	case 4:
		cout << "Characters use an item!";
		break;
	case 5:
		cout << "Character attempts to flee!";
	default:
		cout: "That is not a valid action!";
		break;
	}
}

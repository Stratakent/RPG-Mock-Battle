//#include "battle.cpp"
#include "actors.h"
#include "actors.cpp"

#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

string getEnemy(int RNG) {
	string enemy;

	switch (RNG) {
	case 1:
		enemy = "Swordmaster";
		break;
	case 2:
		enemy = "Veteran";
		break;
	case 3:
		enemy = "Warrior";
		break;
	case 4:
		enemy = "Hunter";
		break;
	case 5:
		enemy = "Monk";
		break;
	case 6:
		enemy = "Rogue";
		break;
	case 7:
		enemy = "Hero";
		break;
	case 8:
		enemy = "Warlock";
		break;
	case 9:
		enemy = "Paladin";
		break;
	case 10:
		enemy = "General";
		break;
	default:
		enemy = "Invalid";
		break;
	}
	return enemy;
}

int main() {

	Actor Ryo;
	Actor Ilene;
	Actor Sorin;
	Actor Liana;
	Ryo.Fill("Ryo", 352, 172, 33, 12, 28, 26, 22, 24, 30, "okay", 0, 
		"Lightning Thrust", "Twin Demon", "Locust Hexagon", "Twin Circles", "Blurblade", "Fair & Square", "Carnage Revolver", "Reckoning Scissors");
	Ilene.Fill("Ilene", 312, 322, 12, 32, 26, 16, 26, 32, 26, "okay", 0, 
		"Pyre Wyrm", "Divine Saber", "Flare", "Recover", "Ballad", "Minuet", "Nurse", "Resurrection");
	Sorin.Fill("Sorin", 300, 246, 30, 20, 34, 20, 19, 20, 32, "okay", 0, 
		"Hunter's Quiver", "Heavy Shot", "Shock Coil", "Freeze Lancer", "Air Calibur", "Multishot", "Bola Arrow", "Rainsong");
	Liana.Fill("Liana", 292, 282, 24, 19, 32, 23, 23, 29, 34, "okay", 0, 
		"Crescent Flash", "Rook Swallow", "Heal", "Recover", "Purify", "Keenness", "Guardian", "Agility");
	
	cout << "====Welcome to Itineris Battle Simulator====" << endl;
	cout << "You party will consist of: " << Ryo.name << ", " << Ilene.name << ", " << Sorin.name << ", " << Liana.name << "." << endl;
	system("pause");
	cout << "Generating Encounter..." << endl;

	srand(time(NULL));

	int encounter1 = (rand() % 10) + 1;
	int encounter2 = (rand() % 10) + 1;
	int encounter3 = (rand() % 10) + 1;
	int encounter4 = (rand() % 10) + 1;

	string Enemy1 = getEnemy(encounter1);
	string Enemy2 = getEnemy(encounter2);
	string Enemy3 = getEnemy(encounter3);
	string Enemy4 = getEnemy(encounter4);

	cout << "You have encountered an enemy " << Enemy1 << ", " << Enemy2 << ", " << Enemy3 << ", and " << Enemy4 << "." << endl;

	//EnemySetup(Enemy1);

	cout << "ENGAGE!\n";
	//battle();

	return 0;
}

#ifndef actors_h
#define actors_h

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


class Actor {
public:
	string name;
	int HP;
	int MP;
	int STR;
	int MAG;
	int FOC;
	int DEF;
	int RES;
	int LUK;
	int SPD;
	string status;
	bool enemy;
	string ability1;
	string ability2;
	string ability3;
	string ability4;
	string ability5;
	string ability6;
	string ability7;
	string ability8;

	//current constructor for Character and Enemy
	void Fill(string a, int b, int c, int d, int e, int f, int g, int h, int i, int j, string k, 
		bool l, string m, string n, string o, string p, string q, string r, string s, string t) {
		name = a;
		HP = b;
		MP = c;
		STR = d;
		MAG = e;
		FOC = f;
		DEF = g;
		RES = h;
		LUK = i;
		SPD = j;
		status = k;
		enemy = l;
		ability1 = m;
		ability2 = n;
		ability3 = o;
		ability4 = p;
		ability5 = q;
		ability6 = r;
		ability7 = s;
		ability8 = t;
	}
};
#endif

//============================================================================
// Name        : lab5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string key;
	cout<<"key to search";
RF s("gita","12");
SF  f("data.txt");
f.write(s.pack());
f.read(key);
f.delet(key);
}

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}

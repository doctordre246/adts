#include <iostream>
#include "List.h"
#include <vector>

using namespace std;

int main()
{
List L1, L2;
	L1.insert(1, 1);
	L2.insert(2, 2);
	L1.insert(3, 3);
	L2.insert(4, 2);
	L1.insert(5, 1);
 
 for (int i =0; i < L1.size(); i++){
	cout << L1;}
	
	// for (initialize ; comparison ; increment)
	// { 	code 	}
	
/*	
for (unsigned int i =0; i < v1.size(); i++){
	cout << v1[i];
}

v1.pop_back();
for (unsigned int i =0; i < v1.size(); i++){
	cout << v1[i];
}

v1.clear();

for (unsigned int i =0; i < v1.size(); i++){
	cout << v1[i];
}
	
 //Do some stuff with L1, L2, ...
 // ...*/
}

#include <iostream>
#include "List.h"


using namespace std;

int main()
{
List L1, L2;
	L1.insert(1, 1);
	L1.insert(2, 2);
	L1.insert(3, 3);
	L1.insert(4, 2);
	L1.insert(5, 1);
 
 for (int i =0; i < L1.size(); i++){
	cout << L1.size();
}
L1.clear();
	for (int i =0; i < L1.size(); i++){
		cout<<L1;
	}
L2.clear();
	for (int i =0; i < L2.size(); i++){
		cout<<L1.size();
	}
L1.size();	
	for (int i =0; i < L1.size(); i++){
		cout<<L1.size();
	}
L1.remove(1);
L1.remove(3);
	for (int i =0; i < L1.size(); i++){
		cout<<L1;
	}
	
	
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


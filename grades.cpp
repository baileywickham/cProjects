#include <iostream>
#include <stdlib.h>
#include <list>
#include <iterator>

using namespace std;

void print(list<int> l);

int main() {
	list <int> grades;
	for (int i = 1; i < 100; i++) {
        int r = rand() % 100;
		grades.push_back(r);
	}
    print(grades);
    return 0;
}

list sort() {

}

void print(list<int> l) {
	list<int>::const_iterator it;
	for (it = l.begin(); it != l.end(); it++) {
		cout << " num: " << *it;
	}
}
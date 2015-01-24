#include <vector>
#include <iostream>
using namespace std;

vector< vector<int> > image;

vector<int> row;

int main(){
	int *pointer = 0;
	int test = 2;
	pointer = &test;
	cout << *pointer;
	return 0;
}

#include <iostream>
#include <Node.cpp>
#include <Domain2d.cpp>
#include <astar>

using namespace std;

int main(){
//	need to import map
	2dnode Node1;
//	4dnode Node2;
	Domain2d Dom1;
//	Domain4d Dom2;
	path = astar(Dom1<Node1>, *Node1);
	cout << path;
	return 0;
}

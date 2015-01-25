#include <iostream>
#include <vector>
#include "Domain2d.hpp"
#include "Node2d.hpp"

using namespace std;

int main(int argc, char **argv){
//	need to import map
	Domain2d Dom1;
	Dom1.get_map();
	Node2d start;
	Dom1.get_neighbors(start);
//	make_nodes();
//	vector<int> path;
//	path = astar(Dom1<Node1>, *Node1);
//	cout << path;
	return 0;
}

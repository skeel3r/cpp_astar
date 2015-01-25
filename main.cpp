#include <iostream>
#include <vector>
#include "Domain2d.hpp"
#include "Node2d.hpp"
#include "astar.hpp"

using namespace std;

//Domain imports the map and defines functions such as the heuristic, cost between nodes, and neighbors. The node class is the definition of the different types of nodes, the nodes include their location and their g_score, and parent Node.
int main(int argc, char **argv){
	Domain2d Dom1;
	Dom1.get_map();
	astar astar1;
	astar1.get_path(Dom1);
	return 0;
}

//Astar
//author: Ryan Skeele

#include <iostream>
//#include <queue>
//#include <math.h>

using namespace std;

class astar(Domain, Node){
	d = Domain;
	int * start = d.get_start();
	int * goal = d.get_goal();
	set<Node> closed_set = d.get_node_shape;
	open_set =  ;//make a vector! Needs to be pointers for each node
	came_from = ;
	float g_score[start] = 0;
	float f_score[start] = g_score[start] + d.heuristic(start, goal);

	while(!open_set.empty()){
		current = open_set(0);
		if(current = goal){
			return path;
		}
		open_set.erase(current);
		closed_set.insert(current);
		for(int *neighbor = 0;;i = d.find_neighbors(current)){
			if(closed_set.find(neighbor) == closed_set.end()){
				continue;
			}
			tentative_g_score = g_score[current] + d.cost_between(current, neighbor);
			if(!openset.find(neighbor) == open_set.end(), || tentative_g_score < g_score[neighbor]){
				came_from[neighbor] = current;
				g_score[neighbor] = tentative_g_score;
				f_score[neighbor] = g_score[neighbor] + d.heuristic[neighbor, goal];
				if(!open_set.find(neighbor) == open_set.end()){
					open_set.insert(neighbor);
	return "error";

	}

}

function reconstruct_path(came_from, current)
	total_path = current;
	while(current in came_from){
		current = came_from[current];
		total_path.append(current);
	return total_path

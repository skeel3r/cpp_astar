//Astar
//author: Ryan Skeele
#include "astar.hpp"
#include <iostream>
#include "Domain2d.hpp"
#include <vector>
#include <algorithm>
//#include <queue>
//#include <math.h>

using namespace std;

void astar::get_path(Domain2d d){
	Node2d start;
	Node2d goal;
	start = d.get_start();
	goal = d.get_goal();

	vector<Node2d> closed_set;
	vector<Node2d> open_set;
	start.g_score = 0;
	start.f_score = start.g_score + d.get_heuristic(start);
	cout << start.f_score;
	open_set.insert(open_set.begin(), start);
	Node2d current;
	while(!open_set.empty()){
		sort(open_set.begin(), open_set.end());
		current = open_set[0];
		if(current.x == goal.x && current.y == goal.y){
			break;
		};
		open_set.erase(open_set.begin());
		closed_set.insert(closed_set.begin(), current);
		vector<Node2d> neighbors;
		neighbors = d.get_neighbors(current);
		/*
		for(vector<Node2d>::iterator i = neighbors.begin(); i != neighbors.end(); i++){
			if(binary_search(closed_set.begin(), closed_set.end(), *i) != closed_set.end()){
				continue;
			};
		};
		*/

	};
};

/*

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

*/

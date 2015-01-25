#include "Domain2d.hpp"
#include "PGM_parser.hpp"
#include "math.h"
#include <iostream>
using namespace std;

void Domain2d::get_map(){
	map.start = make_pair(1,1);
	map.goal = make_pair(24,24);
	PGM_parser("maze1.pgm", &map);
};

Node2d Domain2d::get_start(){
	Node2d start;
	start.x = map.start.first;
	start.y = map.start.second;
	return start;
};

Node2d Domain2d::get_goal(){
	Node2d goal;
	goal.x = map.goal.first;
	goal.y = map.goal.second;
	return goal;
};


vector<Node2d> Domain2d::get_neighbors(Node2d current){
	vector<Node2d> neighbors;
	for(int i = -1; i <=1; i++){
		for(int j = -1; j <= 1; j++){
			if(map.map[current.y + i][current.x + j] == 1&& j<map.width && i<map.height){
				Node2d node;
				node.x = current.x + j;
				node.y = current.y + i;
				neighbors.push_back(node);
			};
		};
	};
	return neighbors;
};

double Domain2d::get_heuristic(Node2d current){
	double heuristic;
	heuristic = sqrt(pow((current.x - map.goal.first),2) + pow((current.y - map.goal.second), 2));
	cout << heuristic << endl;
	return heuristic;
};



#include "Domain2d.hpp"
#include "PGM_parser.hpp"
#include "math.h"
#include <iostream>
using namespace std;

void Domain2d::get_map(){
	cout << "PGM Start";
	PGM_parser("maze2.pgm", &map);
	cout << "PGM FINISH";
}

void Domain2d::get_nodes(){
	for(int i = 0; i< map.width; i++){
		vector<Node2d> row;
		for(int j = 0; j< map.height; j++){
			Node2d node;
			node.x = i;
			node.y = j;
			row.push_back(node);
		}
		nodes.push_back(row);
	}
}

Node2d* Domain2d::get_start(){
	return &nodes[0][0];
}

Node2d* Domain2d::get_goal(){
	return &nodes[map.height-1][map.width-1];
}


vector<Node2d*> Domain2d::get_neighbors(Node2d* current){
	
	vector<Node2d*> neighbors;
	map.map[current->y+1][current->x+1];

	// need to change later so that it is only 4 connected
	int tmp_x;
	int tmp_y;
	for(int i = -1; i < 2; i++){
		for(int j = -1; j < 2; j++){
			tmp_x = current->x+i;
			tmp_y = current->y+j;
			if(tmp_x >= 0 && tmp_y >= 0){
				if(current->x != tmp_x || current->y != tmp_y){
					if (tmp_x < map.width && tmp_y < map.height){
						if(map.map[tmp_x][tmp_y] == 1){
							Node2d* neighbor;
							neighbor = &nodes[tmp_x][tmp_y];
							neighbors.push_back(neighbor);
						}
					}
				}
			}
			
		}
	}
	/*for(int k =0; k < neighbors.size(); k++){
		cout << "NEIGHBORS" << k<< endl;
		cout << endl << neighbors[k] << endl;
	}*/
	return neighbors;
}

double Domain2d::get_heuristic(Node2d* current){
	//euclidean heuristic
	
	double heuristic;
	double epsilon = 1;
	/*	
	Node2d* goal;
	goal = get_goal();
	heuristic = epsilon*sqrt(pow((current->x - goal->x),2) + pow((current->y - goal->y), 2));
	*/
		
	Node2d* goal;
	goal = get_goal();
	heuristic = epsilon *(abs(current->x - goal->x)+ abs(current->y - goal->y));
	
	return heuristic;
}

double Domain2d::get_cost(Node2d* curr, Node2d* neigh){
	double cost;
	if(abs(curr->x - neigh->x) == 1 && abs(curr->y - neigh->y) == 1){
		cout << endl << "UPDATED COST" << endl;
		return cost = sqrt(2);
	}
	return 1;
}


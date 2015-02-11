#ifndef DOMAIN_2D_HPP
#define DOMAIN_2D_HPP
#include "Node2d.hpp"
#include "My_map.hpp"
#include <iostream>
#include <vector>

using namespace std;

class Domain2d{
	public:
		void get_map();
		vector< vector<Node2d> > nodes; 
		void get_nodes();
		vector<Node2d*> get_neighbors(Node2d*);
		double get_heuristic(Node2d*);
		double get_cost(Node2d*, Node2d*);
		Node2d* get_start();
		Node2d* get_goal();
		My_map map;

};

#endif

#ifndef DOMAIN_2D_HPP
#define DOMAIN_2D_HPP
#include "Node2d.hpp"
#include "My_map.hpp"

using namespace std;

class Domain2d{
	public:
		void get_map();
		vector<Node2d> get_neighbors(Node2d);
		double get_heuristic(Node2d);
		Node2d get_start();
		Node2d get_goal();
	private:
		My_map map;

};

#endif

#ifndef DOMAIN_2D_HPP
#define DOMAIN_2D_HPP
#include "Node2d.hpp"
using namespace std;

class Domain2d{
	public:
		void get_map();
		void get_neighbors(Node2d);
};


#endif

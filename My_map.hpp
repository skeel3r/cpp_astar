#ifndef MY_MAP_HPP
#define MY_MAP_HPP

#include <vector>

class My_map{
	public:
		std::vector< std::vector<int> > map;
		int width, height;
		std::pair<int, int> start, goal;

};

#endif

#include "Domain2d.hpp"
#include "PGM_parser.hpp"
#include "My_map.hpp"

using namespace std;

void Domain2d::get_map(){
	My_map map;
	map.start = make_pair(1,1);
	map.goal = make_pair(24,24);
	PGM_parser("maze1.pgm", &map);
};


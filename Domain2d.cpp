#include "PGM_parser.cpp"
#include "My_map.hpp"
using namespace std;

class Domain2d{
	public:
		My_map map;
		map.start = make_pair(1,1);
		map.goal = make_pair(24,24);
		void get_map(void);
};

void Domian2d::get_map(void){
	PGM_parser("maze1.pgm", &map);
};


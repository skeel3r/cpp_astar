#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Node2d{
	public:
		double x, y;
		Node2d(double _x, double _y);

};

Node2d::Node2d(double _x, double _y){
	x = _x;
	y = _y;
};

template <typename N>
class Domain{
	public:
		void heuristic(N node);

};

template <>
void Domain<Node2d>::heuristic(Node2d node) {
	// TODO(ryan): Fill this in
	sqrt(pow((node.x - 3),2) + pow((node.y - 4),2));
}


int main(){
	Node2d node1(1,2);
	Domain<Node2d> domain;

	domain.heuristic(node1);

	cout << node1.x;
	return 0;
}



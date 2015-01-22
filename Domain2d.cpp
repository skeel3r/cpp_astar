#include <Idomain>
#include <Node>
#include <math>
#include <PGMParser>
using namespace std;

class Domain2d: public IDomain{

	public:
		PGMParser(mapname);
		int width = ;
		int height = ;
		vector<vector<Node> > nodes;
		for(int i = 0; i<width; i++){
			vector<Node> row;
			for(int j = 0; j<height; j++){
				Node n;
				nodes[i][j].push_back(;
			}
		}

		double heuristic(node){
			//euclidean
			heuristic = math.sqrt((node.x - goal.x)^2 + (node.y - goal.y)^2);
			//manhattan
			// heuristic = math.abs(node.x - goal.x) + (node.y - goal.y);
			return heuristic;
		}
		double g_score(node){
			return node.g_score;
		}
		double f_score(node){
			return node.f_score;
		double get_start(){
			return start;
		}
		double get_goal(){
			return goal;
		}
		double neighbors(){
			return neighbors;
		}
}

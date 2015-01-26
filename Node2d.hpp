#ifndef NODE_2D_HPP
#define NODE_2D_HPP
class Node2d{
	public: 
		int x, y;
		double g_score, f_score;
		const bool operator<(const Node2d& other) const;
		Node2d* parent;
};

#endif

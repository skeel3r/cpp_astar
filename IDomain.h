template<Node*>
class IDomain(){
	public:
		virtual void heuristic(Node);
		virtual void cost(Node);
		virtual void neighbors(Node);
		virtual void get_start(Node);
		virtual void get_goal(Node);
}

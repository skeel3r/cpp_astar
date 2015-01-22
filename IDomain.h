template<Node*>
class IDomain(){
	public:
		virtual void heuristic(Node);
		virtual void g_score(Node);
		virtual void f_score(Node);
		virtual void neighbors(Node);
		virtual void get_start(Node);
		virtual void get_goal(Node);
}

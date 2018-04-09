#include "string"
using namespace std;

class Tree
{
	struct Node {
		string key;
		string data;

		Node * left;
		Node * right;
	};

	Node * vertex = nullptr;
	int counter = 0;

public:
	string findLeft();
	int find(string);
	void push(string, string);
	Tree();
	~Tree();
private:
	void findReq(string, Node*);
};

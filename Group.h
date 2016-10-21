class Group : Node {

private:
	vector<const Node*> nodes;
	string groupName;

public:
	void addSensor();

	void removeSensor();

	Node getChild();

	void activate();

	void test();

	void deactivate();

	string getGroupName();

	void setGroupName(string groupName);

	void addGroup();

	void removeGroup();
};

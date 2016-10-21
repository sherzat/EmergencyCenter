class Sensor : Node {

private:
	Action* action;
	string id;
	string sensorType;
	string vender;
	bool status;

public:
	void activate();

	void addAction();

	void removeAction();

	void test();

	void deactivate();

	string getId();

	void setId(string id);

	string getSensorType();

	void setSensorType(string sensorType);

	string getVender();

	void setVender(string vender);

	bool getStatus();

	void setStatus(bool status);
};

#include <iostream>
#include <string>

using namespace std;

//bencode has 4 types: strings, ints, lists, and dicts
// 
// 
//bencode string
class Bencode_Byte_String {
private:
	string name;
	string value;
public:
	//Constructor
	Bencode_Byte_String(string Name, string Value) {
		name = Name;
		value = Value;
	}
	//getters
	string GetName() {
		return name;
	}
	string GetValue() {
		return value;
	}
	//setters
	void setName(string Name) {
		name = Name;
	}
	void setValue(string Value) {
		value = Value;

	}
};

//bencode int
class Bencode_Integer {
private:
	string name;
	int value;

public:
	//Constructor
	Bencode_Integer(string Name, int Value) {
		name = Name;
		value = Value;
	}
	//getters
	string GetName() {
		return name;
	}
	int GetValue() {
		return value;
	}
	//setters
	void setName(string Name) {
		name = Name;
	}
	void setValue(int Value) {
		value = Value;

	}
};

// Bencode list
class Bencode_List {
};


// Bencode Dict
class Bencode_Dict {
};


};

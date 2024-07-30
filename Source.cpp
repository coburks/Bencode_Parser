#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {

	string fileName = "short.torrent";
	fstream dataFile; // create an fstream object named dataFile to open the .torrent
	string input; //to hold the input from the file
	char ch; // to hold a single character
	int numBytes; //store the byte size

	vector<char> contents;// a vector to copy the contents of the file into :p
	

	//cin >> fileName;// we can pipe a filename into this later

	dataFile.open(fileName, ios::in);

	

	
	if (dataFile) {
		dataFile.seekg(0L, ios::end); // move read position to last byte in file
		numBytes = dataFile.tellg(); // get the current byte number of the read position
		cout << "The file has " << numBytes << " bytes.\n";
		cout << " " << endl;
		dataFile.seekg(0L, ios::beg); // go back to the start of the file

		for (int offset = 0; offset < numBytes; offset++) { // loop through the file from start to end and print each character
			dataFile.seekg(offset);//each increment of the loop is 1 byte
			dataFile.get(ch);// assign the char to the value at the offset position
			contents.push_back(ch); // add each character to a char vector
		
		}

		dataFile.close();

		for (int i = 0; i < numBytes; i++) {

			cout << contents[i];//print said char vector
		}
	}


}
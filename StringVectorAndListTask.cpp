// StringVectorAndListTask.cpp

#include <iostream>						
#include <string>						
#include <vector>
#include <list>

using namespace std;

void enterStringsToVector();
void enterStringsToList();

/*
Write two programs which asks the user to enter a series of strings and stores them in
An STL vector
An STL list

Each program should output all of the values entered at the end.
*/
int main()
{
	enterStringsToVector();
	enterStringsToList();
	system("pause");
}

void enterStringsToVector() {

	vector<string> stringVector; // dynamic array 
	string str;

	while (true) { // endless loop, break by user entering Q or q
		cout << "Enter a String (or Q to stop)" << endl;
		cin >> str;
		if ((str == "Q") || (str == "q")) break;
		//add a string to the end
		stringVector.push_back(str);
	}
	cout << "Strings in Vectors: " << endl;
	for (int i = 0; i < stringVector.size(); ++i) {
		cout << stringVector[i];
		if (i < (stringVector.size() - 1)) cout << ","; //do a comma if not the last item

	}
	cout << endl;
}

void enterStringsToList() {
	list<string> stringList;

	while (true) {
		string str;
		cout << "Enter a String (or Q to stop)" << endl;
		cin >> str; if ((str == "Q") || (str == "q")) break;
		//add a string to the end
		stringList.push_back(str);
	}
	cout << "Strings in List: " << endl;
	for (auto it = stringList.begin(); it != stringList.end(); ++it) {
		if (it != stringList.begin()) cout << ","; //insert a comma before the next item if not the first item (dont start with a comma!)
		cout << *it;
	}
	cout << endl;

}

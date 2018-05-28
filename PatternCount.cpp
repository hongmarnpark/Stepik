// Pattern Count

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <list>
#include <iterator>

using namespace std;

int main () {
	list<int> numList;
	string text;
	ifstream myfile ("dataset_2_7.txt");
	getline (myfile,text);
	myfile.close();
//	cout << text << '\n';
//	cout << text.size() << '\n';
//	cout << text.substr(1,5) << '\n';
	int tlen = text.size();
	string pat="CGGATCCCG";
	int plen = pat.size();
	for (int i=0; i<tlen-plen+1; ++i){
		if (text.substr(i,plen)==pat){
		numList.push_back(i);
		}

	}
	list<int>::iterator it = numList.begin();
	while(it != numList.end()){
	cout<<(*it)<<"\n";
	++it;
	}

	return 0;
}


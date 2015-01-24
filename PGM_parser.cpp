#include "PGM_parser.hpp"
#include "My_map.hpp"
#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <utility>

using namespace std;

void PGM_parser(string filename, My_map * map2d){
	bool debug = false;

	ifstream file;
	file.open(filename);
	string line;
	stringstream ss;
	for(unsigned int i = 0; i < 4; i++){
		getline(file, line);
		if(i == 2){
			ss.str(line);
			ss >> map2d->width;
			ss >> map2d->height;
		};
	};
	if(debug){
		cout << map2d->width << endl;
		cout << map2d->height << endl;
	};
	ss.str("");
	ss.clear();
	vector<int> row;
	getline(file, line);
	ss.str(line);

	//for(unsigned int j = 0; j < height; j++){
	int i = 0;
	while(true){
		if(line[i++] == 0) row.push_back(0);
		else row.push_back(1);

		if(row.size() == map2d->width){
			map2d->map.push_back(row);
			row.clear();
		};
		if(map2d->map.size() == map2d->height) break;
	};

	if(debug){
		for(int i = 0; i < map2d->width; i++){
			for(int j = 0; j < map2d->height; j++){
				cout << map2d->map[i][j];
			};
			cout << endl;
		};
	};
	file.close();
};


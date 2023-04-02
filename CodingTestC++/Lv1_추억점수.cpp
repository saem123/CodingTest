#pragma once
#include "programmers.h"
#include <vector>
#include <string>
#include <iostream>
#include <map>
using namespace std;

void Programmers::Lv1_추억점수()
{
	vector<string> name;
	vector<int> yearning;
	vector<vector<string>> photo;

}

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {

	map<string, int> valueMap;
	vector<int> answer;
	for (int i = 0; i < name.size(); i++)
	{
		valueMap.insert(make_pair( name[i], yearning[i]));
	}

	for (int i = 0; i < photo.size(); i++)
	{
		int value = 0;
		for (int j = 0; j < photo[i].size(); j++)
		{
			if (valueMap.find(photo[i][j]) != valueMap.end())
			{
				value += valueMap[photo[i][j]];
			}
		}
		answer.push_back(value);
	}
	return answer;
}

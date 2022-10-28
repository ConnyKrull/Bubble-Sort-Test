#pragma once
#ifndef SORT_HPP
#define SORT_HPP


#include <iostream>
#include <vector>

using std::cout;
using std::string;
using std::rand;

class sort_h
{
protected:
	std::vector<int> sort_array_ = { NULL, NULL, NULL, NULL, NULL };
	int swap_ = NULL;

public:
	void rand_num()
	{
		srand(time(nullptr));
		for(int i = 0; i<sort_array_.size(); i++)
		{
			sort_array_[i] = rand() % 10;
		}
	}

	void sort_main()
	{
		for(int i = 0; i<sort_array_.size(); i++)
		{
			for(int j = i+1; j < sort_array_.size(); j++)
			{
				if (sort_array_[i] > sort_array_[j])
				{
					swap_ = sort_array_[i];
					sort_array_[i] = sort_array_[j];
					sort_array_[j] = swap_;
				}
			}
		}
	}

	void print_array()										//Print Vector (independent of "sort_main()")
	{
		for(int i = 0; i <sort_array_.size(); i++)
		{
			cout << sort_array_[i] << "\n";
		}
	}

};
#endif
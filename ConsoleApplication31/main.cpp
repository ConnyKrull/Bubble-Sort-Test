#include <iostream>
#include "sort.hpp"

#define FOR_X(x) for(int i = 0; i<x; i++)

using namespace std;



int main()
{
	sort_h sort_h;
	sort_h.rand_num();
	sort_h.print_array();
	FOR_X(5)
	{
		cout << "\n";
	}
	
	sort_h.sort_main();
	sort_h.print_array();
}
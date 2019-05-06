#include "zoo.hpp"
#include "zookeeper.hpp"

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	zoo halifax_zoo;
	zookeeper dave;
	
	vector< animal* >& animals = halifax_zoo.get_animals();
	
	cout << "Printing initial state of animals...\n" << endl;
	halifax_zoo.print_status();
	
	cout << "Zookeeper Dave is feeding the animals...\n" << endl;
	dave.feed( animals );
	
	cout << "Printing state of animals after being fed...\n" << endl;
	halifax_zoo.print_status();
	
	cout << "Zookeeper Dave is giving the animals water...\n" << endl;
	dave.give_water( animals );
	
	cout << "Printing state of animals after they received water...\n" << endl;
	halifax_zoo.print_status();
	
	cout << "Zookeeper Dave is putting some of the animals to sleep...\n" << endl;
	dave.sleep( animals );
	
	cout << "Printing state of animals after some have been put to bed...\n" << endl;
	halifax_zoo.print_status();
	
	return 0;
}

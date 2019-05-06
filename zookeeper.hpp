#ifndef ZOOKEEPER_HPP_INCLUDED
#define ZOOKEEPER_HPP_INCLUDED

#include <vector>

class animal;

class zookeeper {

public:
	
	void feed( std::vector<animal* >& animals );
	void give_water( std::vector<animal* >& animals );
	void sleep( std::vector<animal* >& animals );
};

#endif

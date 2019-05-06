#include "zoo.hpp"
#include "animal.hpp"

#include <iterator>
#include <iostream>

using namespace std;

zoo::zoo()
{
	animals_.push_back( new goldfish() );
	animals_.push_back( new tiger() );
	animals_.push_back( new small_whale() );
}

zoo::~zoo()
{
	for(int i=0; i < animals_.size(); ++i )
	{
		delete animals_[i];
	}
}

vector< animal* >& zoo::get_animals() {
	return animals_;
}

void zoo::print_status()
{
	for( vector< animal* >::const_iterator itr = animals_.begin();
			 itr != animals_.end(); ++itr )
	{
		cout << (*itr)->print_status();
	}
}

#include "zookeeper.hpp"
#include "animal.hpp"

using namespace std;

void zookeeper::feed( vector< animal* >& animals )
{
	for( vector< animal* >::iterator itr = animals.begin();
			 itr != animals.end(); ++itr )
	{
		(*itr)->feed();
	}
}

void zookeeper::give_water( vector<animal* >& animals )
{
	for( vector< animal* >::iterator itr = animals.begin();
		 	 itr != animals.end(); ++itr )
	{
		(*itr)->give_water();
	}
}

void zookeeper::sleep( vector<animal* >& animals )
{
	for( vector< animal* >::iterator itr = animals.begin();
	 		 itr != animals.end(); ++itr )
	{
		air_animal* a = dynamic_cast< air_animal* >(*itr);
		water_animal* w = dynamic_cast< water_animal* >(*itr);
		if( a != NULL && w == NULL ) 
		{
			a->sleep();
		}
	}
}

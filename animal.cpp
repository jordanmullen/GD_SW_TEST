#include "animal.hpp"

#include <sstream>

using namespace std;

animal::animal() 
: thirsty_( true ), hungry_( true ), 
	awake_( true )
{
	
}

animal::~animal()
{
	
}

string animal::print_status() const 
{
	stringstream ss;
	ss << "Thirsty: ";
	( thirsty_ ) ? ss << "Yes" : ss << "No";
	ss << endl;
	ss << "Hungry: ";
	( hungry_ ) ? ss << "Yes" : ss << "No";
	ss << endl;
	ss << "Awake: ";
	( awake_ ) ? ss << "Yes" : ss << "No";
	ss << endl; 
	return ss.str();
}

void animal::feed() 
{
	hungry_ = false;
}

void animal::give_water()
{
}

water_animal::water_animal()
{
	thirsty_=false;
}

void water_animal::give_water()
{
}

void air_animal::give_water()
{
	thirsty_ = false;
}

void air_animal::sleep()
{
	awake_ = false;
}

goldfish::goldfish()
{
	
}

string goldfish::print_status() const
{
	stringstream ss;
	ss << "Name: Goldfish" << endl;
	ss << "Type: " << "Water Animal" << endl;
	ss << animal::print_status() << endl;
	return ss.str();
}

tiger::tiger()
{
	
}

string tiger::print_status() const
{
	stringstream ss;
	ss << "Name: Tiger" << endl;
	ss << "Type: Air Animal" << endl;
	ss << animal::print_status() << endl;
	return ss.str();
}

small_whale::small_whale()
{
	
}

string small_whale::print_status() const
{
	stringstream ss;
	ss << "Name: Small Whale" << endl;
	ss << "Type: Water and Air Animal" << endl;
	ss << animal::print_status() << endl;
	return ss.str();
}

void small_whale::give_water()
{
	
}

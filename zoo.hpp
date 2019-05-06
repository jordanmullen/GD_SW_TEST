#ifndef ZOO_HPP_INCLUDED
#define ZOO_HPP_INCLUDED

#include <vector>

class animal;

class zoo {
	
public:
	
	zoo();
	~zoo();
	
	std::vector< animal* >& get_animals();
	void print_status();
	
private:
	
	std::vector< animal* > animals_;
};

#endif

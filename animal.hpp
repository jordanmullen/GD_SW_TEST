#ifndef ANIMALS_HPP_INCLUDED
#define ANIMALS_HPP_INCLUDED

#include <string>

class animal {
	
public:
		
	animal();
	virtual ~animal();
	
	void feed();
	virtual std::string print_status() const;
	virtual void give_water();

protected:

	bool thirsty_;
	bool hungry_;
	bool awake_;
};

class water_animal : virtual public animal {
public:
	
	water_animal();
	
	void give_water();
		
};

class air_animal : virtual public animal {
	
public:
	
	void give_water();
	void sleep();
	
};

class goldfish : public water_animal {

public:
	
	goldfish();
	
	std::string print_status() const;
};

class tiger : public air_animal {

public:
	
	tiger();
	
	std::string print_status() const;
};

class small_whale : public air_animal, public water_animal
{
	public:
		
		small_whale();
		
		std::string print_status() const;
		void give_water();
};

#endif

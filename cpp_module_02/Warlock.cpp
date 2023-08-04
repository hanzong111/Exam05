# include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
{
	this->_name = name;
	this->_title = title;
	std::cout << this->_name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << this->_name << ": My job here is done!\n";
}

void	Warlock::introduce() const
{
	std::cout << this->_name << " I am " << this->_name << ", " << this->_title << "!\n";
}

std::string const	&Warlock::getName() const
{
	return (this->_name);
}

std::string const &Warlock::getTitle() const
{
	return(this->_title);
}

void	Warlock::setTitle(std::string const &ref)
{
	this->_title = ref;
}

void	Warlock::learnSpell(ASpell *ref)
{
	book.learnSpell(ref);
}

void	Warlock::forgetSpell(std::string name)
{
	book.forgetSpell(name);
}

void	Warlock::launchSpell(std::string name, ATarget const &target)
{
	ATarget const *tmp = 0;
	if (tmp == &target)
		return;
	ASpell *spell = book.createSpell(name);
	if (spell)
		spell->launch(target);
}


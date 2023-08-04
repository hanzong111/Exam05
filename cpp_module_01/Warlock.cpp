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
	std::map<std::string, ASpell *>::iterator it_start = this->spellbook.begin();
	std::map<std::string, ASpell *>::iterator it_end = this->spellbook.end();
	if (it_start != it_end)
	{
		delete it_start->second;
		++it_start;
	}
	this->spellbook.clear();
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
	if (ref)
		spellbook.insert(std::pair<std::string,ASpell *>(ref->getName(), ref->clone()));
}

void	Warlock::forgetSpell(std::string name)
{
	std::map<std::string, ASpell *>::iterator it_begin = spellbook.begin();
	std::map<std::string, ASpell *>::iterator it_end = spellbook.end();
	if (it_begin != it_end)
		delete it_begin->second;
	spellbook.erase(name);
}

void	Warlock::launchSpell(std::string name, ATarget const &target)
{
	ASpell *spell = spellbook[name];
	if (spell)
		spell->launch(target);
}

# include "SpellBook.hpp"

SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{
	std::map<std::string, ASpell *>::iterator it_start = this->book.begin();
	std::map<std::string, ASpell *>::iterator it_end = this->book.end();
	if (it_start != it_end)
	{
		delete it_start->second;
		++it_start;
	}
	this->book.clear();
}

void	SpellBook::learnSpell(ASpell *ref)
{
	if (ref)
		book.insert(std::pair<std::string, ASpell *>(ref->getName(), ref->clone()));
}

void	SpellBook::forgetSpell(std::string const &ref)
{
	std::map<std::string, ASpell *>::iterator it = book.find(ref);
	if (it != book.end())
	{
		delete it->second;
	}
	book.erase(ref);
}

ASpell	*SpellBook::createSpell(std::string const &ref)
{
	std::map<std::string, ASpell *>::iterator it = book.find(ref);
	if (it != book.end())
		return (book[ref]);
	return NULL;
}
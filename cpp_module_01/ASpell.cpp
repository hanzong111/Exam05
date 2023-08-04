# include "ASpell.hpp"

ASpell::ASpell()
{}

ASpell::ASpell(std::string const &name, std::string const &effects)
{
	this->_name = name;
	this->_effects = effects;
}

ASpell::~ASpell()
{}

ASpell::ASpell(ASpell const &ref)
{
	*this = ref;
}

ASpell &ASpell::operator=(ASpell const &ref)
{
	this->_name = ref._name;
	this->_effects = ref._effects;
	return (*this);
}

std::string const &ASpell::getName() const
{
	return (this->_name);
}

std::string const &ASpell::getEffects() const
{
	return (this->_effects);
}

void	ASpell::launch(ATarget const &ref)
{
	ref.getHitBySpell(*this);
}
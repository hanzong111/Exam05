# include "ATarget.hpp"

ATarget::ATarget()
{}

ATarget::ATarget(std::string const &type)
{
	this->_type = type;
}

ATarget::~ATarget()
{}

ATarget &ATarget::operator=(ATarget const &ref)
{
	this->_type = ref._type;
	return(*this);
}

ATarget::ATarget(ATarget const &ref)
{
	*this = ref;
}

std::string const &ATarget::getType() const
{
	return (this->_type);
}

void	ATarget::getHitBySpell(ASpell const &spellname) const
{
	std::cout << this->_type << " has been " << spellname.getEffects() << "!\n";
}
# pragma once
# include <iostream>

class ASpell;

class ATarget
{
	public:
			ATarget();
			ATarget(ATarget const &ref);
			ATarget(std::string const &type);
			virtual ~ATarget();
			ATarget &operator=(ATarget const &ref);

			std::string const &getType() const;

			void	getHitBySpell(ASpell const &spellname) const;
			virtual ATarget *clone() const = 0;
	private:
			std::string	_type;
};

# include "ASpell.hpp"
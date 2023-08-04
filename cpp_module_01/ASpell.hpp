#pragma once
# include <iostream>

class ATarget;

class ASpell
{
	public:
			ASpell();
			ASpell(std::string const &name, std::string const &effects);
			~ASpell();
			ASpell(ASpell const &ref);
			ASpell &operator=(ASpell const &ref);

			std::string const &getName() const;
			std::string const &getEffects() const;

			void	launch(ATarget const &ref);
			virtual ASpell *clone() const = 0;
	private:
			std::string _name;
			std::string _effects;
};

# include "ATarget.hpp"
# pragma once
# include <iostream>
# include <map>
# include "ASpell.hpp"

class SpellBook
{
	public:
			SpellBook();
			~SpellBook();

			void	learnSpell(ASpell *ref);
			void	forgetSpell(std::string const &ref);
			ASpell	*createSpell(std::string const &ref);
	private:
			SpellBook(SpellBook const &ref);
			SpellBook &operator=(SpellBook const &ref);

			std::map<std::string ,ASpell *> book;
};
#pragma once
# include <iostream>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"
# include <map>

class Warlock
{
	public :
			Warlock(std::string const &name, std::string const &title);
			~Warlock();
			std::string const &getName() const;
			std::string const &getTitle() const;

			void	setTitle(std::string const &ref);
			void	introduce() const;

			void	learnSpell(ASpell *ref);
			void	forgetSpell(std::string name);
			void	launchSpell(std::string name, ATarget const &target);

	private :
			Warlock();
			Warlock(Warlock const &ref);
			Warlock	&operator=(Warlock const &ref);

			std::string _name;
			std::string _title;

			SpellBook	book;
};
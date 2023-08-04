#pragma once
# include <iostream>

class Warlock
{
	public :
			Warlock(std::string const &name, std::string const &title);
			~Warlock();
			std::string const &getName() const;
			std::string const &getTitle() const;

			void	setTitle(std::string const &ref);
			void	introduce() const;

	private :
			Warlock();
			Warlock(Warlock const &ref);
			Warlock	&operator=(Warlock const &ref);

			std::string _name;
			std::string _title;
};
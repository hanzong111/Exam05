# pragma once
# include <iostream>
# include <map>
# include "ATarget.hpp"

class TargetGenerator
{
	public:
			TargetGenerator();
			~TargetGenerator();
			void	learnTargetType(ATarget *target);
			void	forgetTargetType(std::string const &name);
			ATarget	*createTarget(std::string const &name);
	private:
			TargetGenerator(TargetGenerator const &ref);
			TargetGenerator &operator=(TargetGenerator const &ref);

			std::map<std::string,ATarget *> target_arry;
};
# include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{
	std::map<std::string, ATarget *>::iterator it_begin = this->target_arry.begin();
	std::map<std::string, ATarget *>::iterator it_end = this->target_arry.end();
	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	this->target_arry.clear();
}

void	TargetGenerator::learnTargetType(ATarget *target)
{
	target_arry.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
}

void	TargetGenerator::forgetTargetType(std::string const &type)
{
	std::map<std::string, ATarget *>::iterator it = target_arry.find(type);
	if (it != target_arry.end())
		delete it->second;
	target_arry.erase(type);
}

ATarget *TargetGenerator::createTarget(std::string const &name)
{
	std::map<std::string, ATarget *>::iterator it = target_arry.find(name);
	if (it != target_arry.end())
		return (target_arry[name]);
	return (NULL);
}
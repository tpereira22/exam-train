#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator()
{
    std::map<std::string, ATarget*>::iterator it;
    for (it = targetTypes.begin(); it != targetTypes.end();)
    {
        if (it->second)
        {
            delete it->second;
            targetTypes.erase(it->first);
            it = targetTypes.begin();
        } else
            it++;
    }
}

void    TargetGenerator::learnTargetType(ATarget* target)
{
    std::map<std::string, ATarget*>::iterator it;
    for (it = targetTypes.begin(); it != targetTypes.end(); ++it)
    {
        if (it->first == target->getType())
            return ;
    }
    targetTypes.insert(std::make_pair(target->getType(), target->clone()));
}

void    TargetGenerator::forgetTargetType(const std::string& targetType)
{
    std::map<std::string, ATarget*>::iterator it;
    for (it = targetTypes.begin(); it != targetTypes.end(); ++it)
    {
        if (it->first == targetType)
        {
            delete it->second;
            targetTypes.erase(targetType);
            return ;
        }
    }
}

ATarget* TargetGenerator::createTarget(const std::string& targetType)
{
    std::map<std::string, ATarget*>::iterator it;
    for (it = targetTypes.begin(); it != targetTypes.end(); ++it)
    {
        if (it->first == targetType)
            return it->second;
    }
    return NULL;
}
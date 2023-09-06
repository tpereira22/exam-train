#ifndef TARGET_GENERATOR_HPP
# define TARGET_GENERATOR_HPP

# include <iostream>
# include <map>
# include "ATarget.hpp"

class TargetGenerator
{
private:
    std::map<std::string, ATarget*> targetTypes;
public:
    TargetGenerator();
    ~TargetGenerator();
    
    void    learnTargetType(ATarget* spell);
    void    forgetTargetType(const std::string& spellName);
    ATarget* createTarget(const std::string& spellName);
};

#endif
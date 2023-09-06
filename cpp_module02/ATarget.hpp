#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
private:
    std::string type;
public:
    ATarget(const std::string& type);
    virtual ~ATarget();
    
    const std::string& getType(void) const;

    void    getHitBySpell(const ASpell& spell) const;

    virtual ATarget* clone(void) = 0;
};

#endif
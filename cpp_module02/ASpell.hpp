#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
private:
    std::string name;
    std::string effects;
public:
    ASpell(const std::string& name, const std::string& effects);
    virtual ~ASpell();

    std::string getName(void) const;
    std::string getEffects(void) const;

    void    launch(const ATarget& target);

    virtual ASpell* clone(void) = 0;
};

#endif
#ifndef  WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "SpellBook.hpp"

class Warlock
{
private:
    std::string name;
    std::string title;
    SpellBook   spellBook;
public:
    Warlock(const std::string& name, const std::string& title);
    ~Warlock();
    
    const std::string& getName(void) const;
    const std::string& getTitle(void) const;

    void    setTitle(const std::string& newTitle);

    void    introduce() const;

    void    learnSpell(ASpell* spell);
    void    forgetSpell(std::string spellName);
    void    launchSpell(std::string spellName, const ATarget& target);
};

#endif
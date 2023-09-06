#ifndef SPELL_BOOK_HPP
# define SPELL_BOOK_HPP

# include "ASpell.hpp"
# include <map>

class SpellBook
{
private:
    std::map<std::string, ASpell*> spellInv;
public:
    SpellBook();
    ~SpellBook();

    void    learnSpell(ASpell* spell);
    void    forgetSpell(const std::string& spellName);
    ASpell* createSpell(const std::string& spellName);
};

#endif
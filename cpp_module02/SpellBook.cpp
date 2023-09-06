#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
    std::map<std::string, ASpell*>::iterator it;
    for (it = spellInv.begin(); it != spellInv.end(); ++it)
    {
        if (it->second)
        {
            delete it->second;
            spellInv.erase(it->first);
            it = spellInv.begin();
        }
    }
}

void    SpellBook::learnSpell(ASpell* spell)
{
    std::map<std::string, ASpell*>::iterator it;
    for (it = spellInv.begin(); it != spellInv.end(); ++it)
    {
        if (it->first == spell->getName())
            return ;
    }
    spellInv.insert(std::make_pair(spell->getName(), spell->clone()));
}

void    SpellBook::forgetSpell(const std::string& spellName)
{
    std::map<std::string, ASpell*>::iterator it;
    for (it = spellInv.begin(); it != spellInv.end(); ++it)
    {
        if (it->first == spellName)
        {
            delete it->second;
            spellInv.erase(spellName);
            return ;
        }
    }
}

ASpell* SpellBook::createSpell(const std::string& spellName)
{
    std::map<std::string, ASpell*>::iterator it;
    for (it = spellInv.begin(); it != spellInv.end(); ++it)
    {
        if (it->first == spellName)
            return it->second;
    }
    return NULL;
}

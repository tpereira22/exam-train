#include "ASpell.hpp"

ASpell::ASpell(const std::string& name, const std::string& effects)
 : name(name), effects(effects) {}

ASpell::~ASpell() {}

std::string ASpell::getName(void) const
{
    return this->name;
}

std::string ASpell::getEffects(void) const
{
    return this->effects;
}


void    ASpell::launch(const ATarget& target)
{
    target.getHitBySpell(*this);
}
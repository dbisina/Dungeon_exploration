#include "../Header Files/Mediator.h"
#include "../Header Files/Entity.h"

void Mediator::EntityAttack(Entity *entity)
{
    Monk::instance().setHealthPoints(Monk::instance().getHealthPoints() - entity->getAttackPoints());
}

void Mediator::EntityDefend(Entity *entity)
{
    entity -> setHealthPoints(entity-> getHealthPoints() + 1);
}

void Mediator::MonkDefend(){ //Function for monk defending
    Monk::instance().setHealthPoints(Monk::instance().getHealthPoints() + 1);
}

void Mediator::Pray(){ //Function for when praying in the prayer room
    Monk::instance().setHealthPoints(Monk::instance().getMaxHealthPoints());
}

void Mediator::MonkAttack(Entity *entity){ //Function for attacking
    entity->setHealthPoints(entity->getHealthPoints() - Monk::instance().getAttackPoints());
}

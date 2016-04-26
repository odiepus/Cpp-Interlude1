#ifndef PLAINBOX_H
#define PLAINBOX_H

template<class ItemType>

class Plainbox{
    private:
        ItemType item;

    public:
        Plainbox();

        Plainbox(const ItemType& theItem);

         void setItem(ItemType& theItem);

        ItemType getItem();
};

#include "Plainbox.hpp"
#endif

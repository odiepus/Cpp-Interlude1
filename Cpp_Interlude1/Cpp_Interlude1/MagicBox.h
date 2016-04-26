#ifndef MAGICBOX_H
#define MAGICBOX_H
#include "Plainbox.h"

template<class ItemType>
class MagicBox : public Plainbox<ItemType> {
    private:
        bool firstItemStored;

    public:
        MagicBox();

        MagicBox(const ItemType& theItem);

        void setItem(const ItemType& theItem);

};

#include "MagicBox.hpp"

#endif

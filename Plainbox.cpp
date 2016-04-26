#include "Plainbox.h"

template<class ItemType>
Plainbox<ItemType>::Plainbox(){};

template <ItemType>
Plainbox<ItemType>::Plainbox(const ItemType& theItem)
{
    item = theItem;
}

template<class ItemType>
void Plainbox<ItemType>::setItem(ItemType& theItem)
{
    item = theItem;
}

template<class ItemType>
ItemType Plainbox<ItemType>::getItem()
{
    return item;
}

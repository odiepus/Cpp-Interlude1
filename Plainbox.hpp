
template<class ItemType>
Plainbox<ItemType>::Plainbox(){};

template <class ItemType>
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

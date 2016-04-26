#ifndef TOYBOX_H
#define TOYBOX_H
#include "Plainbox.h"

enum Color {BLACK, RED, YELLOW, GREEN, PUPRLE, ORANGE};

template <class ItemType>

class ToyBox : public Plainbox<ItemType>
{
    private:
        Color boxColor;

    public:
        ToyBox();

        ToyBox(const Color& theColor);

        ToyBox(const ItemType& theItem, const Color& theColor);

        Color getColor() const;
};

#include "ToyBox.hpp"

#endif

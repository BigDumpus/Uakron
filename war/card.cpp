// cards cpp
#include "card.hpp" // makes header file happen here


Card::Card(Suit s, Rank r) // here is the constructor definition from earlier
    // im not knowing what this is : e_rank(r) wait i get it
    {
        e_suit = s;
        e_rank =r;
    } // do i need to make a default constructor i dont remeber i think we all agreed that the idea of a default card isnt really a thing.

    Rank Card::getRank()
    {
        return e_rank;
    }

    Suit Card::getSuit()
    {
        return e_suit;
    }

    std::ostream& operator<<(std::ostream& os, const Card& c) // allows cout to print card rank and suit thats usefuel
{
   os<< c.getRank() << c.getSuit() << std::endl;
   return os;
}

    Deck
    make_deck() // function for making deck probably
    {
    // since i have suit first then suit must be first i think
        Card c0 {hearts, ace};
        Card c1 {hearts, two};
        Card c2 {hearts, three};
        Card c3 {hearts, four};
        Card c4 {hearts, five};
        Card c5 {hearts, six};
        Card c6 {hearts, seven};
        Card c7 {hearts, eight};
        Card c8 {hearts, nine};
        Card c9 {hearts, ten};
        Card c10 {hearts, jack};
        Card c11 {hearts, queen};
        Card c12 {hearts, king};
        Card c13 {diamonds, ace};
        Card c14 {diamonds, two};
        Card c15 {diamonds, three};
        Card c16 {diamonds, four};
        Card c17 {diamonds, five};
        Card c18 {diamonds, six};
        Card c19 {diamonds, seven};
        Card c20 {diamonds, eight};
        Card c21 {diamonds, nine};
        Card c22 {diamonds, ten};
        Card c23 {diamonds, jack};
        Card c24 {diamonds, queen};
        Card c25 {diamonds, king};
        Card c26 {spades, ace};
        Card c27 {spades, two};
        Card c28 {spades, three};
        Card c29 {spades, four};
        Card c30 {spades, five};
        Card c31 {spades, six};
        Card c32 {spades, seven};
        Card c33 {spades, eight};
        Card c34 {spades, nine};
        Card c35 {spades, ten};
        Card c36 {spades, jack};
        Card c37 {spades, queen};
        Card c38 {spades, king};
        Card c39 {clubs, ace};
        Card c40 {clubs, two};
        Card c41 {clubs, three};
        Card c42 {clubs, four};
        Card c43 {clubs, five};
        Card c44 {clubs, six};
        Card c45 {clubs, seven};
        Card c46 {clubs, eight};
        Card c47 {clubs, nine};
        Card c48 {clubs, ten};
        Card c49 {clubs, jack};
        Card c50 {clubs, queen};
        Card c51 {clubs, king}; // this should make a card for each card in a normal deck


    return {}; //i dont get this i need to ask him
    }

//cards head
#ifndef CARD_HPP
#define CARD_HPP // makes header guarded

#include <iostream>
#include <deque> // im not familiar with this vector like thing but you said it was good to use and i trust you

enum Suit // makes variable type Suit
{
    hearts, // things a Suit variable can be i guess
    diamonds,
    spades,
    clubs,
};

enum Rank
{
    ace,
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    jack,
    queen,
    king,

};

class Card
{
    public:
        Card(Rank r, Suit s); // constructor declaration. my friend told me to stop doing inline definitions.

    private: // don't let people change cards because thats cheating
        Rank = e_rank; // my friend said somthing about enumerated things should have e on them so i did e
        Suit = e_suit;
};


// need to make get functions for to get rank and suit for bools and couts how do i do that
using Deck = std::deque<Card>; // i forgot what this line would do i should have asked you earlier. this is like making deck be made of cards i think.

#endif

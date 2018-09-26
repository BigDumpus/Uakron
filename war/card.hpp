//cards head
#ifndef CARD_HPP
#define CARD_HPP // makes header guarded

#include <iostream>
#include <deque> // im not familiar with this vector like thing but you said it was good to use and i trust you

enum Suit // makes variable type Suit
{
    hearts =1, // things a Suit variable can be i guess
    diamonds,
    spades,
    clubs,
};

enum Rank
{
    ace =1,
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
        Card( Suit , Rank ); // constructor declaration. my friend told me to stop doing inline definitions.
        Rank getRank();
        Suit getSuit(); // retreives suit without allowing modifications i think if i did it right
        friend std::ostream& operator<<(std::ostream& os,  Card& c);

    private: // don't let people change cards because thats cheating
        Rank e_rank; // my friend said somthing about enumerated things should have e on them so i did e
        Suit e_suit;
};



// need to make get functions for to get rank and suit for bools and couts how do i do that
using Deck = std::deque<Card>; // i forgot what this line would do i should have asked you earlier. this is like making deck be made of cards i think.

#endif

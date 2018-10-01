#include "card.hpp"
#include <iostream>
#include <algorithm>

// its getting late. i think we are going to have a study/ do this in class day tommorow ill just do the rest then.
// its super not compiling so i cant test the functions i made for the game
//
void game(std::deque <Card> , std::deque <Card> );
void deal(std::deque <Card> , std::deque <Card>, std::deque <Card> );
int main()
{
    // how do i make the deck. maybe Deck deck; deck.make_deck; well the first part seems right i guess but im getting that deck is empty even
    std::deque <Card> deck (52);
    //make_deck();
    //std::cout << c0;
    std::deque <Card> P1 (26);
    std::deque <Card> P2 (26);


    // sort // actually i only really need shuffle

    // shuffle
    std::shuffle(deck);

    // function that divides deck in two
    deal(P1, P2, deck);

    game(P1, P2);

   return 0;
}


    // function that divides deck in two
    void deal(std::deque <Card> x, std::deque <Card> y, std::deque <Card> deck)
    {
        while(!deck.empty())
        {
            x.push_front(deck.pop_front()); // puts top card from deck in x
            y.push_front(deck.pop_front());
        }
    }


    //function that puts two cards into a deque and compares them
    // if they are == then ad two more cards to the deque
    // if > then the cards go to p1 if < then cards go to p2
    // include counter
    void game(std::deque <Card> x, std::deque <Card> y)
    {
        int i =0;
        std::deque <Card> hold (2); // creates deck to hold cards in play
        while (!x.empty() && !y.empty())
        {
            hold.push_front(x.pop_front()); //takes card from top of x and puts in front of hold
            hold.push_back(y.pop_front());  // take card from top of y and puts in back of hold
            if((hold.front()).getRank() >( hold.(back())).getRank()) // card rank comparison
            {
                while (!hold.empty())
                    x.push_back(hold.pop_front());
            }
            else if((hold.front()).getRank() < ( hold.(back())).getRank()) // if the high card is in front then x gets all the cards if high card is in back then y gets all cards. if neither card is high the loop loops
            {
                while (!hold.empty())
                    y.push_back(hold.pop_front());
            }
            i++; // counter increments


            /*else
            {
                //game(x, y);
                wait do i acually need to do anything. it will just loop and put more cards on the end until either deck is empty // i think i need to overload the > and <
            unless
            }*/

        }
        if (x.empty())
                std::cout<< "P2 won in "<< i << " turns";
        else if (y.empty())
                std::cout<< "P1 won in "<< i << " turns";
    }

    // function to check if either deck is empty and declared winner and number of turns.







/* to do
make card class:
    he already has a lot in the git hub but you still need to make the get_() functions and some where you need to overload > < = and cout which i dont remeber how to do

make card sorter and card shuffler(unsorter) i think it can go in main

update:
    the ostream overload isnt coming along as i easily as i thouht it would. also i dont remember how he made the out put like AS for ace spades and stuff like that. i mean if i do get it working now the out put for std::cout << c0; would be 02 which is fine if bad hard to read stuff is good.
    once i can print cards and stuff the actual practice will begin i suppose.
    alright the << operator is overloaded now i just need it to print the things i want it to print. like A for ace and 2 for two intstead of the mess it it now. also i tried to call c0 from the deck but it didnt work that needs to be fixed
    okay << is working great now i think i just need to make the Deck i made work in main and then i can make the sorter and shuffler. after that i can acutally get to work on making war happen

make the war game itself:
    i think its cpu v cpu so have it simulate splitting one deck (some fuction that splits a deque into two = deque) randomly ( using shuffle(unsort)) for playing i think i may need a deque for the spoils pile because it may not be just two cards at a time and even if it is maybe a spoils deque would be handy still for the next part also really figure out how deques work and how they relate to vectors.
    have each top of deque be compared and the higher rank wins ( so function for that too)
    have several functions for how cards are put into deck vis a vis player one card always first or shuffle then place in deck. use only one function for each simulation probably
    and have a play function that plays until one player has no cards (empty deque)
     this should maybe be in its own file but i dont know i just need to make it work

    alright thats the gist of it how hard can this be. i dont know yet but i know im tired so ill figure out how to put this on git hub and work on it tomrow in class with my peers and maybe Dark Sutton (i assume Dr Sutton's brother with a goatee)
*/

// maybe download the linix for windows thing and cmake and probably stop using codeblocks so you dont look like training wheels.
// or not i am a mechanical engineer after all.
//stop treating coding practice like a diary maybe.

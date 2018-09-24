#include "card.hpp"
#include <iostream>

// its getting late. i think we are going to have a study/ do this in class day tommorow ill just do the rest then.
int main()
{

    Card c (spades, two);
   std::cout << c;
   //std::cout <<c.getRank(); alritght so it sort of works how do i make it print a for ace and s for spades. i feel bad because im actually just trying to catch up to where he was in class
    return 0;
}
/* to do
make card class:
    he already has a lot in the git hub but you still need to make the get_() functions and some where you need to overload > < = and cout which i dont remeber how to do

make card sorter and card shuffler(unsorter) i think it can go in main

update:
    the ostream overload isnt coming along as i easily as i thouht it would. also i dont remember how he made the out put like AS for ace spades and stuff like that. i mean if i do get it working now the out put for std::cout << c0; would be 02 which is fine if bad hard to read stuff is good.
    once i can print cards and stuff the actual practice will begin i suppose.

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

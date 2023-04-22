# 🚀 The Homer Problem Challenge 🤔

This project is a solution to the Homer problem where we have to identify a person, Homer, who didn't interact with anyone in an event. 

**The challenge is to solve the problem using a stack data structure.**

# 📝 The Problem

You are Ethan Hunt and the IMF has sent you on a mission to protect the nuclear engineer
specialist, Homer Simpson, who is in town for a very important presentation from a possible
kidnap by the evil corporation called The Syndicate. You are gathering the information about
your target but you soon discover that the IMF has no image of him, so you don’t know what
your target looks like. What you do know is the fact that he is a reputable specialist and
everyone will talk to him. What you also know is the fact that Homer is a really shy guy and
he will not try to talk to anyone in return because he doesn’t know anyone from the event.
Tonight, there is a formal dinner for all the participants and you are sent to gather information
about the interaction between people in order to identify your target. After the event, you take
your notes back to the base camp and you look over all the interactions that have happened
between people under a matrix of N x N form, where 0 means that the person i has not talked
to person j and 1 means that person i has talked to person j.

Using a Stack, find your target and save him from the kidnapers. (Extra info: the time
complexity should be O(n))

Obs: You can use the input matrix ONLY for gathering data, checking a certain element (i, j)
OR at a maximum, traversing a particular row ± column. You MUST use the stack for getting
the solution.

# 💻 The Solution

We use a stack data structure to store the number of people each person interacted with. We then pop the stack until we find a person who didn't interact with anyone, which is likely to be Homer. We then validate if everyone interacted with this person, if yes, then we have identified Homer, otherwise, Homer didn't show up at the event.

# 🚀 Quick Start

    git clone https://github.com/lexofficial29/HomerStack.git
    cd HomerStack
    g++ homer.cpp -o homer
    ./homer

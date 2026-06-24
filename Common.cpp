#include <stdio.h>
#include <stdlib.h>

#include <string>

#include "Common.h"

using std::string;

Card MakeCard(int rank, int suit)
{
  return rank * GameInfo::NumSuits() + suit;
}

bool InCards(Card c, const Card *cards, int num_cards)
{ 
  for (int i = 0; i < num_cards; ++i)
    if (c == cards[i])
      return true;
  return false;
} 

int MaxSuit(Card *board, int num_board)
{
  int max_suit = Suit(board[0]);
  for (int i = 1; i < num_board; ++i)
  {
    int s = Suit(board[i]);
    if (s > max_suit)
      max_suit = s;
  }
  return max_suit;
}

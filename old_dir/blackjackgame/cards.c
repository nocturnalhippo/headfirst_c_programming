/*
 * Proram to evaluate face values.
 * Released under the Vegas Public License.
 * (c)2014 The College Blackjack Team.
 */

#include <stdlib.h>
#include <stdio.h>

int main()
{
  char card_name[3];
  int count = 0;

  while (card_name[0] != 'X'){
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    int val = 0;

    switch(card_name[0]){
    case 'K':
    case 'Q':
    case 'J':
      val = 10;
      break;
    case 'A':
      val = 11;
      break;
    case 'X':
      continue; // continue will send us back to the top of the while condition
    default:
      val = atoi(card_name);
      if ((val < 1)||(val > 10)){
        puts("You have entered a value outside of the legal range.");
        continue;
      }
    }
    if ((val>2) && (val < 7)) {
      count++;
    } else if (val == 10) {
      count--;
    }
    printf("Current count: %i\n", count);
  }
  return 0;
}

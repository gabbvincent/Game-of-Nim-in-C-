#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

int main() {


  int pile1 = 10 ;
  int pile2 = 10 ;
  int pickPile ;
  int pickPebbles ;
  int count ;
  std::string check ;
  srand (time(NULL)) ;
  
  for (count = 1; pile1 != 0 && pile2 != 0; count ++) {

   std::cout << " Choose pile 1 or 2: " ;

   std::cin >> pickPile ;

   std::cout << " # of pebbles? " ;

   std::cin >> pickPebbles ;
   
   if (pickPile == 1) {

    pile1 = pile1 - pickPebbles ;

   }
   else if (pickPile == 2) {

    pile2 = pile2 - pickPebbles ;

   }

   pickPile = rand() % 2 + 1 ;

   pickPebbles = rand() % 3 + 1 ;

   if (pickPile == 1) {

    pile1 = pile1 - pickPebbles ;

   }
   else if (pickPile == 2) {

    pile2 = pile2 - pickPebbles ;

   }

   std::cout << std::endl << pile1 << std::endl << pile2 << std::endl << std::endl ;

   if (pile1 == 0 && pile2 == 0) {

     if (count % 2 == 1) {

       std::cout << " you win " ;
     } else if (count % 2 == 0) { 
       std::cout << " you lose " ;
     } else {
       continue ;
     }

   }
 
  }
  }

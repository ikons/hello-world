/* REVERSE.C */ 

#include <stdio.h> 
#include "reverse.h" 

      /********************************************/ 

      void reverse( before, after ) 

      char *before;  /* Δείκτης στην σειρά χαρακτήρων προέλευσης */ 
      char *after;    /* Δείκτης στην αντεστραμμένη σειρά χαρακτήρων */ 

      { 
          int i; 
          int j; 
          int len; 

              len = strlen(before); 

              for( j=len-1, i=0; j>=0; j--, i++)  /* Βρόγχος αντιστροφής */ 
                 after[i] = before[j]; 
              
              after[len] = NULL;  /* Το NULL τερματίζει την αντεστραμμένη σειρά χαρακτήρων */ 
      } 
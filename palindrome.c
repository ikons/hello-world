     /* PALINDROME.C */ 

     #include "palindrome.h" 
     #include "reverse.h" 
     #include <string.h> 

     /***********************************************/ 

     int palindrome(str) 

     char *str; 

     { 
       char  reverseStr[100]; 
       reverse( str, reverseStr );  /* Αντιστροφή πρωτότυπης σειράς χαρακτήρων */ 
       return ( strcmp(str, reverseStr ) == 0 );  /* σύγκριση των δυο χαρακτήρων */
     } 
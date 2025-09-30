for (int i = 1; i <= 5; i++) {        // outer loop (rows)
             for (int j = 1; j <= i; j++) {    // inner loop (stars)
                printf("*");
              }
  printf("\n");
}

/*
Start outer loop i = 1
   → Start inner loop j = 1 → print *
   Inner loop ends
   Print newline

Start outer loop i = 2
   → j = 1 → print *
   → j = 2 → print *
   Inner loop ends
   Print newline

Start outer loop i = 3
   → j = 1 → print *
   → j = 2 → print *
   → j = 3 → print *
   Inner loop ends
   Print newline

Start outer loop i = 4
   → j = 1 → print *
   → j = 2 → print *
   → j = 3 → print *
   → j = 4 → print *
   Inner loop ends
   Print newline

Start outer loop i = 5
   → j = 1 → print *
   → j = 2 → print *
   → j = 3 → print *
   → j = 4 → print *
   → j = 5 → print *
   Inner loop ends
   Print newline
*/

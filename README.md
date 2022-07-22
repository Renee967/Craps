# Craps

(Game: craps) Craps is a popular dice game played in casinos. Write a program to play a variation of the game, as follows:
 
Roll two dice. Each dice has six faces representing values 1,2, …, and 6, respectively. Check the sum of the two dice. If the sum is 2,3 or 12(called craps), you lose; if the sum is 7 or 11 (called natural), you win; if the sum is another value (i.e. 4,5,6,8,9,10), a point is established. Continue until you roll either 7(you lose) or the same point value (you win). 
 
Your program acts as a single player. Here are some sample runs.
 
Example1: you rolled 5+6=11  
You win
Example2:  you rolled 1+2=3  
You lose
Example3:  you rolled 4+4=8  
Point is 8
You rolled 6+2=8
You win
Example4:  you rolled 3+2=5  
Point is 5
You rolled 2+5=7
You lose
 
Make sure that you use functions to implement subtasks and call these functions in your main function.  
(Hint: function rand() will return you a random number)

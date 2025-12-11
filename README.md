# cricket-score-card
This project is a simple cricket scoreboard program written in C language. It simulates 5 overs (30 legal balls) and allows the user to input the result of each delivery. The program automatically calculates the total score, wickets, extras, and overs bowled.
how to compile and run the program
1)save the program
2)compile the program using gcc
3)run the program  
This scoreboard simulates only 5 overs, meaning 30 legal balls will be bowled
The match ends early if the batting team loses 10 wickets.
Wide ball (input: 7) is treated as a legal delivery as per custom requirement, even though this is not standard cricket rule.
No-ball (input: 8) does not count as a legal ball and gives an extra delivery.
Normal run values are restricted to 0–6.
Any input outside the allowed range will be considered invalid and the program will re-ask for the same ball.

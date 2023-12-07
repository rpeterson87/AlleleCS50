# AlleleCS50
This is my final project for CS50

#### Video Demo:  https://youtu.be/BvI-4xY2NMA

#### Description:

AlleleCS50 is a command-line program developed in C, functioning as a Punnet square generator. I used this project to merge my backgrounds in software engineering, alongside my experience in the reptile breeding industry. Learning about Punnet squares during my time at a reptile farm sparked the idea for this allele calculator. It not only aligns with my passions but also incorporates various aspects learned throughout the CS50 course.

Though not a master in C programming, my goal is to delve deeper into this language. This project reflects elements from the course, including inspirations from 'Mario' and other lectures.

#### Hurdles 

One of the hardest things about this was trying to get the punnet square to output the correct data. Also the formatting proved to be pretty difficult. 


#### How to use

The program allows for inputting 2 to 4 alleles to output the corresponding Punnet square and allele combinations. It accepts two command-line arguments, each representing a gene, and generates a Punnet square for them. The current version supports the letters ```A, B, C, D, X,``` and ``Y.``

### Example

```bash
./allele Aa Aa
```
or 
```bash
./allele AaBb AaBb
```

Additionally, the program generates a CSV file with the data output to stdout, facilitating data manipulation in a more user-friendly format.

#### Pain/Learning points 
One of the most challenging aspects of this project was building the 'build Punnet square' function. I must have refactored it a hundred times. Although I believe there's still room for improvement, when I finally realized that all I was missing was a conditional everything came together. Another significant hurdle was figuring out how to output data not only to STDOUT but also to a CSV file. The C manual pages proved invaluable, in assisting me time and again throughout this course. 

#### Future Plans
I aim to enhance the program's functionality to handle more inputs and calculate the probability of each gene. This would provide insights into the odds of specific breeding outcomes.



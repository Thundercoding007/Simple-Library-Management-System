#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

struct Student {
    char name[50];
    char dept[50];
    int prnnum;
    char div;
};

int main() {
    FILE *fptr ;
    fptr = fopen("student.txt","w");


    printf("               >>>>>>>>>>** Hi! We are here to help you while finding the books in VIT library **<<<<<<<<<<\n\n");
    printf("                       **Add your details properly in the below section before you borrow the book **\n\n");
    struct Student students;


    int max_students=100;
    int book_num;
    char books[100][200] = {
            "Thinking, Fast and Slow by Daniel Kahneman",
            "Thinking, Fast and Slow by Daniel Kahneman",
            "Man's Search for Meaning by Viktor E. Frankl",
            "Influence: The Psychology of Persuasion by Robert B. Cialdini",
            "The Power of Habit by Charles Duhigg",
            "Drive: The Surprising Truth About What Motivates Us by Daniel H. Pink",
            "To Kill a Mockingbird by Harper Lee",
            "1984 by George Orwell",
            "The Great Gatsby by F. Scott Fitzgerald",
            "One Hundred Years of Solitude by Gabriel Garcia Marquez",
            "The Catcher in the Rye by J.D. Salinger",
            "Sapiens: A Brief History of Humankind by Yuval Noah Harari",
            "The Immortal Life of Henrietta Lacks by Rebecca Skloot",
            "The Last Book for your Best Life by Pushkar Raj Thakur",
            "The Devil in the White City by Erik Larson",
            "The Sixth Extinction: An Unnatural History by Elizabeth Kolbert",
            "Steve Jobs by Walter Isaacson",
            "The Diary of a Young Girl by Anne Frank",
            "The Glass Castle by Jeanette Walls",
            "Unbroken: A World War II Story of Survival, Resilience, and Redemption by Laura Hillenbrand",
            "Malcolm X: A Life of Reinvention by Manning Marable",
            "The Interpretation of Dreams by Sigmund Freud",
            "Flow: The Psychology of Optimal Experience by Mihaly Csikszentmihalyi",
            "Quiet: The Power of Introverts in a World That Can't Stop Talking by Susan Cain",
            "Nudge: Improving Decisions About Health, Wealth, and Happiness by Richard H. Thaler and Cass R. Sunstein",
            "The Man Who Mistook His Wife for a Hat by Oliver Sacks",
            "The Lord of the Rings by J.R.R. Tolkien",
            "Pride and Prejudice by Jane Austen",
            "The Hobbit by J.R.R. Tolkien",
            "The Alchemist by Paulo Coelho",
            "Brave New World by Aldous Huxley",
            "Doglapan by Ashneer Grover",
            "Into the Wild by Jon Krakauer",
            "Born to Run by Christopher McDougall",
            "The Wright Brothers by David McCullough",
            "The Talent Code by Daniel Coyle",
            "Think and Grow Rich by Napoleon Hill",
            "The Story of My Experiments with Truth by Mahatma Gandhi",
            "The Diary of Samuel Pepys by Samuel Pepys",
            "Benjamin Franklin: An American Life by Walter Isaacson",
            "Long Walk to Freedom by Nelson Mandela",
            "The Social Animal by David Brooks",
            "The Tipping Point by Malcolm Gladwell",
            "Mindsight: The New Science of Personal Transformation by Daniel J. Siegel",
            "The Happiness Hypothesis by Jonathan Haidt",
            "Emotional Intelligence by Daniel Goleman",
            "The Kite Runner by Khaled Hosseini",
            "The Girl on the Train by Paula Hawkins",
            "All the Light We Cannot See by Anthony Doerr",
            "The Road by Cormac McCarthy",
            "The Color Purple by Alice Walker",
            "The Power of Now by Eckhart Tolle",
            "The Emperor of All Maladies by Siddhartha Mukherjee",
            "Cosmos by Carl Sagan",
            "Freakonomics by Steven D. Levitt and Stephen J. Dubner",
            "The Innovators by Walter Isaacson",
            "Wealth Management 101 by Nikhil Kamath",
            "Leonardo da Vinci by Walter Isaacson",
            "Wings of Fire by A. P. J. Abdul Kalam",
            "The Wright Brothers by David McCullough",
            "Einstein: His Life and Universe by Walter Isaacson",
            "A Beautiful Mind by Sylvia Nasar",
            "The Body Keeps the Score by Bessel van der Kolk",
            "The Man's Guide to Women by John Gottman and Julie Schwartz Gottman",
            "The Four Agreements by Don Miguel Ruiz",
            "Mistakes Were Made (But Not by Me) by Carol Tavris and Elliot Aronson",
            "Blink by Malcolm Gladwell",
            "The Handmaid's Tale by Margaret Atwood",
            "The Martian by Andy Weir",
            "The Hunger Games by Suzanne Collins",
            "The Book Thief by Markus Zusak",
            "The Goldfinch by Donna Tartt",
            "Homo Deus: A Brief History of Tomorrow by Yuval Noah Harari",
            "Educated by Tara Westover",
            "Atomic Habits by James Clear",
            "Bad Blood: Secrets and Lies in a Silicon Valley Startup by John Carreyrou",
            "1001 Inventions that changed the World by Jack Challoner",
            "The Power of your Subconscious Mind by Joseph Murphy",
            "Great Expectations by Charles Dickens",
            "Little Women by Louisa May Alcott",
            "In Search of Lost Time by Marcel Proust",
            "Madame Bovary by Gustave Flaubert",
            "To Kill a Mockingbird by Harper Lee",
            "Rich Dad Poor Dad by Robert Kiyosaki",
            "The 48 Laws of Power by Robert Greene",
            "Let us C by Yashavant Kanetkar",
            "Dropping Out of the School by Nikhil Kamath",
            "Ambani & Sons by Hamish McDonald",
            "The IndiGo Story by Shelley Vishwajeet",
            "Big Billion Startup by Mihir Dalal",
            "Everything started as Nothing by Bhaskar Majumdar",
            "Everything is out of Syllabus by Varun Duggirala",
            "Everything I know about Love by Dolly Alderton",
            "Everything is Figureoutable by Marie Forleo",
            "Same as Ever by Morgan Housel",
            "Don't Believe in Everything you Think by Joseph Nguyen",
            "One Indian Girl by Chetan Bhagat",
            "Three mistakes of my life by Chetan Bhagat",
            "Life's Amazing Secrets by Gaur Gopal Das",
            "The Monk who sold his Ferrari by Robin Sharma",
            "The 5 a.m. Club by Robin Sharma"
        };



        for(int count=1;count<=2;count++){
        printf("\nEnter name of student%d: ",count);
        gets(students.name);

        printf("Enter PRN of student%d: ",count);
        scanf("%d", &students.prnnum);
        while (getchar() != '\n');

        printf("Enter department of student%d: ",count);
        gets(students.dept);

        printf("Enter division of student%d: ",count);
        scanf(" %c", &students.div);

        printf("\n\n\nNow select the book which you want to borrow\n   (the list of the books is given below)\n");


        for (int i = 0; i < 100; i++) {
            printf("%d. %s\n", i + 1, books[i]);
        }
        printf("\n\n*Now enter the number which is written in front of the book which you want to borrow*");
        printf("\n\nEnter the number of the book : ");
        scanf("%d",&book_num);

      if (book_num >= 1 && book_num <= 100) {
            printf("\nYou have selected : %s\n", books[book_num - 1]);
        } else if(book_num < 1 || book_num > 100){
            printf("\n\nInvalid book number\n");
            printf("\n\nEnter the number of the book again: ");
            scanf("%d",&book_num);
            printf("\nYou have selected : %s\n", books[book_num - 1]);
        }else{
          break ;
        }


       printf("\n%s book is situated in the Row = %d & Column= %d", books[book_num-1],(book_num-1)/10+1,(book_num-1)%10+1);

       time_t t;
        time(&t);
        struct tm *local = localtime(&t);
        char date_time[50];
        strftime(date_time, sizeof(date_time), "%Y-%m-%d %H:%M:%S", local);

     printf("\n\nDATA SAVED SUCCESSFULLY ! \n\n");
     char choice[3];
      printf("If you want to see the student information, type 'YES'. Otherwise, type 'NO' to fill data for another student: ");
        scanf("%s", choice);


        for (int i = 0; i < 3; i++) {
            choice[i] = toupper(choice[i]);
        }

        if (strcmp(choice, "YES") == 0) {

            printf("Student Information\n");
            printf( "1. Name: %s\n", students.name);
            printf( "2. PRN: %d\n", students.prnnum);
            printf( "3. Department: %s\n", students.dept);
            printf( "4. Division: %c\n", students.div);
            printf( "5. Book Borrowed : %s\n",books[book_num - 1]);
            printf( "6. Borrowed On: %s\n", date_time);
            printf("\n\nNOW YOU CAN PROCEED FOR FILLING THE DATA OF ANOTHER STUDENT\n\n\n");
            }
            else {
            printf("\n\nProceeding to fill data for another student.\n\n\n");

        }
        while (getchar() != '\n');
            fprintf( fptr,"1. Name: %s\n", students.name);
            fprintf( fptr,"2. PRN: %d\n", students.prnnum);
            fprintf( fptr,"3. Department: %s\n", students.dept);
            fprintf( fptr,"4. Division: %c\n", students.div);
            fprintf( fptr,"5. Book Borrowed : %s\n\n\n",books[book_num - 1]);
            fprintf(fptr, "6. Borrowed On: %s\n\n\n", date_time);


        }
        fclose(fptr);
    return 0;

     }

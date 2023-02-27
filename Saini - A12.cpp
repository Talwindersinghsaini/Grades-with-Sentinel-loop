//************************************************************************
// Name : Talwinder singh saini
// course : CS 155 computer science
// Semester : 1
// Assignment A12 : Practice with User-defined Functions (void)
// Date : 10/18/2021
/*Description : Write a function called printGrade.
a. function has a void return type
b. function accepts one char parameter
c. If the parameter is an ‘A’, the function prints out: “Great Work!”
d. If the parameter is a ‘B’, the function prints out: “Good job.”
e. If the parameter is a ‘C’, the function prints out: “Passing.”
f. If the parameter is a ‘D’, the function prints out: “Not good.”
g. If the parameter is a ‘F’, the function prints out: “Failing!”
h. For any other value, the function prints out: “Not a grade.”
2. Write a main function with a sentinel-controlled loop that repeatedly asks the user to enter an uppercase letter grade, or Z to quit.
3. For each input, the main should call printGrade and pass it the most recent grade entry.*/
//************************************************************************

#include<iostream>

using namespace std;

//Declare Function Printgrade with one parameter
void Printgrade(char);

//main function
int main()
{
    //make character variable grade
    char grade;
    //Initilise varable grade value
    grade = '0';
    //Calling function Printgrade here
    Printgrade(grade);
    
    return 0;
   
}
//Defining function Printgrade with same variable name as taken in main function
void Printgrade(char grade)
{
    //Initilise variable grade value
    grade = '0';
    
    //Using while loop here
    while (grade != 'Z')
    {
        //Enter the character from the user
        cout<<"Enter the Grade:(Enter Z to exit)"<<endl;
        cin>>grade;
        
        //Using if statement here
        if (grade == 'A')
        {
            cout<<"Great work!"<<endl;
        }
        else if (grade == 'B')
        {
            cout<<"Good job!"<<endl;
        }
        else if (grade == 'C')
        {
            cout<<"Passing!"<<endl;
        }
        else if (grade == 'D')
        {
            cout<<"Not Good!"<<endl;
        }
        else if (grade == 'F')
        {
            cout<<"Failling!"<<endl;
        }
        //if the user enter Z to exit the value should not be consider as not a grade
        else if (grade == 'Z')
        {}
        //All other value apart from above value should be consider as not a grade
        else
        {
            cout<<"Not a grade"<<endl;
        }
        
    }
}

#include <iostream> 
#include <string>
using namespace std;

char guess; //Answer user inputs for question.
int total;  //Total score.
 char username[10]="suchi",password[10]="khadse";
	char a, user[10],pass[10];
int i=0;
//4 possible answers, correct answer and question score.
class Question{
public:
    void setValues(std::string, std::string, std::string, std::string, std::string, char, int); 
    void askQuestion(); 

private:
    std::string Question_Text;
    std::string answer_1;
    std::string answer_2;
    std::string answer_3;
    std::string answer_4;

    char correct_answer;
    int Question_Score;
};

int main()
{
    
cout<<endl<<"************** Welcome To QUIZ PROGRAM ******************"<<endl<<endl;
 		cout<<"1.Login "<<endl<<endl;
    std::cout << " 2 Press enter to start...\n";
    std::cin.get();

    //Get the user's name.
  std::cout<<"enter username : ";
	 std::cin>>user;
    std::cout << "\n";
std::cout<<"enter password : ";
std::cin>>password;
/*for(i=0;;0)
{
    a=getch();
    if((a>'a' && a<='z') || (a>='A' && a<='Z') || (a>='0') && a<='9'))
    {
        pass[i]=a;
        ++i;
        cout<<"*";
    }
    if(a=='\b' && i>=1)
    {
        cout<<"\b \b"; //rub behind cursor
        --i;
    }
    if(a=='\r')
    {
        pass[i]='\0';
        break;
    }
    if(i<=5)
    {
        cout<<"minimum 6 digit required.\n Enter Again";
    }
} */
   
    std::string respond;
    std::cout << "Are you ready to start the quiz, " << user << "? Yes/No.\n";
    std::cin >> respond;
    

    if (respond == "Yes" || respond == "yes") {
        std::cout << "\n";
        std::cout << "Good luck!\n";
        std::cout << "\n";
        std::cout << "Press enter to continue.";
        std::cin.get();
        std::cin.ignore();
    }else{
        std::cout << "\n";
        std::cout << "Goodbye!\n";
        std::cin.ignore();
        std::cin.get();
        return 0;
    }

    system("cls"); 
    Question q1;
    system("cls"); 
    Question q2;
    system("cls"); 
    Question q3;
    system("cls"); 
    Question q4;
    system("cls"); 
    Question q5;
    system("cls"); 
    Question q6;
    system("cls"); 
    Question q7;
    system("cls"); 
    Question q8;
    system("cls"); 
    Question q9;
    system("cls"); 
    Question q10;
    system("cls"); 
    Question q11;
    system("cls"); 
    Question q12;
    system("cls"); 
    Question q13;
    system("cls"); 
    Question q14;
    system("cls"); 
    Question q15;
    system("cls"); 
    Question q16;
    system("cls"); 
    Question q17;
    system("cls"); 
    Question q18;
    Question q19;
    Question q20;
    Question q21;
    Question q22;
    Question q23;
    Question q24;
    Question q25;

    
    q1.setValues("1. What command prints something to the screen?",
        "cin",
        "cout",
        "char",
        "print",
        'b',
        4);

    q2.setValues("2. Which of the following categories does C++ belong to?",
        "Operating System",
        "High-level programming language",
        "low-level programming language",
        "Compiler",
        'b',
        4);

    q3.setValues("3. Which command is correctly written?",
        "cout >>",
        "cin <<",
        "cout <>",
        "cin >>",
        'd',
        4);

    q4.setValues("4. What is this called, <iostream>?",
        "directive",
        "pre-processor directive",
        "file",
        "command",
        'b',
        4);

    q5.setValues("5. What punctuation ends most lines of code?",
        " . ",
        " ; ",
        " : ",
        " ' ",
        'b',
        4);

    q6.setValues("6. Which of the following is a correct comment?",
        "*/ Comments */",
        "** Comment **",
        "/* Comment */",
        "{ Comment }",
        'c',
        4);

    q7.setValues("7. Which of the following is the boolean operator for logical-and?",
        "&",
        "|",
        "&&",
        "|&",
        'c',
        4);

    q8.setValues("8. Which of the following shows the correct syntax for an if statement?",
        "if expression",
        "if {expression",
        "if (expression)",
        "expression if",
        'c',
        4);

    q9.setValues("9. How many times is a do while loop guaranteed to loop?",
        "1",
        "0",
        "Infinitely",
        "Variable",
        'a',
        4);

    q10.setValues("10. A subscipt is a(n) __________ .",
        "element in an array",
        "alternate name for an array",
        "number that represents the highest value stored within an array",
        "number that indicates the position of the particular item in an array",
        'd',
        4);

    q11.setValues("11. Which of the following correctly declares an array?",
        "int anarray[10];",
        "int anarray",
        "anarray{10};",
        "array anarray[10];",
        'a',
        4);

    q12.setValues("12. What is the index number of the last element of an array with 29 elements?",
        "29",
        "28",
        "0",
        "Programmer-defined",
        'b',
        4);

    q13.setValues("13. Which is not a loop structure?",
        "for",
        "do while",
        "while",
        "repeat until",
        'd',
        4);

    q14.setValues("14. When does the code block following while(x < 100) execute?",
        "When x is less than one hundred",
        "When x is greater than one hundred",
        "When x is equal to one hundred",
        "While it wishes",
        'a',
        4);

    q15.setValues("15. Most programmers use a for loop __________ .",
        "for every loop they write",
        "when a loop will not repeat",
        "when they do not know the exact number of times a loop will repeat",
        "when they know the exact number of times a loop will repeat",
        'd',
        4);

    q16.setValues("16. Adding 1 to a  variable is also called __________ it.",
        "digesting",
        "incrementing",
        "decrementing",
        "resetting",
        'b',
        4);

    q17.setValues("17. What is required to avoid falling through from one case to the next?",
        "end;",
        "break;",
        "Stop;",
        "A semicolon",
        'b',
        4);

    q18.setValues("18. A __________ is a variable that you set to indicate whether some event has occured.",
        "subscript",
        "banner",
        "counter",
        "flag",
        'd',
        4);

    q19.setValues("19. Identify the C++ compiler of Linux.",
        "cpp",
        "g++",
        "Borland",
        "vc++",
        'b',
        4);

    q20.setValues("20. What is the size of 'int'? ",
        "2",
        "4",
        "8",
        "Compiler dependent",
        'd',
        4);

    q21.setValues("21. Which data type can be used to hold a wide character in C++?",
        "unsigned char;",
        "int",
        "wchar",
        "none of the above.",
        'c',
        4);

    q22.setValues("22. C++ does not support the following",
        "Multilevel inheritance",
        "Hierarchical inheritance",
        "Hybrid inheritance",
        "None of the above.",
        'd',
        4);

    q23.setValues("23. Which is not a protection level provided by classes in C++?",
        "protected",
        "hidden",
        "private",
        "public",
        'b',
        4);

    q24.setValues("24. What purpose do classes serve?",
        "data encapsulation",
        "providing a convenient way of modeling real-world objects",
        "simplifying code reuse",
        "all of the above",
        'd',
        4);

    q25.setValues("25. Who developed the C++ language?",
        "Steve Jobs",
        "Linus Torvalds",
        "Bill Gates",
        "Bjarne Stroustrup",
        'd',
        4);

    
    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();
    q11.askQuestion();
    q12.askQuestion();
    q13.askQuestion();
    q14.askQuestion();
    q15.askQuestion();
    q16.askQuestion();
    q17.askQuestion();
    q18.askQuestion();
    q19.askQuestion();
    q20.askQuestion();
    q21.askQuestion();
    q22.askQuestion();
    q23.askQuestion();
    q24.askQuestion();
    q25.askQuestion();

    
    std::cout << "Your Total Score is " << total << " out of 100!\n";
    std::cout << "\n";

    
    if (total > 69) {
       
        std::cout << "\n";
        std::cin.get();
        std::cin.ignore();
        return 0;
    }
    else
    {
        std::cout << "You failed... Sorry, better luck next time.\n";
        std::cout << "\n";
    }
    std::cin.get();
    std::cin.ignore();
    return 0;
}


void Question::setValues(std::string q, std::string a1, std::string a2, std::string a3, std::string a4, char ca, int pa)
{
    Question_Text = q;
    answer_1 = a1;
    answer_2 = a2;
    answer_3 = a3;
    answer_4 = a4;
    correct_answer = ca;
    Question_Score = pa;
}
//Format for possible answers displayed when program executes. 
void Question::askQuestion()
{
    std::cout << "\n";
    std::cout << Question_Text << "\n";
    std::cout << "a. " << answer_1 << "\n";
    std::cout << "b. " << answer_2 << "\n";
    std::cout << "c. " << answer_3 << "\n";
    std::cout << "d. " << answer_4 << "\n";
    std::cout << "\n";

   
    std::cout << "What is your answer?" << "\n";
    std::cin >> guess;
   
    if (guess == correct_answer) {
        std::cout << "\n";
        std::cout << "Correct!" << "\n";
        total = total + Question_Score;
        std::cout << "\n";
        std::cout << "Press enter to continue." << "\n";
        std::cin.get();
        std::cin.ignore();
    }
    else 
    {
        std::cout << "\n";
        std::cout << "Sorry, you're wrong..." << "\n";
        std::cout << "The correct answer is " << correct_answer << "." << "\n";
        std::cout << "\n";
        std::cout << "Press enter to continue." << "\n";
        std::cin.get();
        std::cin.ignore();
    }
}
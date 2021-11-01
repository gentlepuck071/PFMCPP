/*
 Project 6: Part 1 / 2
 Video: Chapter 3 Part 2

Create a branch named Part1

Purpose:  This project will show you the difference between member functions and static class functions, as well as the difference between pointers and references and the code semantics that accompany pointers and references.

 Pointers

 Please look at the screenshot in the files to see what happens if you paste this assignment into an existing cpp file in an xcode project
 
 Task: replace all of the <#place holder#> placeholders with proper names and types that will make this program compile and run.
 
 press the Compile, link and run... button and work your way through all of the error messages.
 

 steps:
 
 1) finish implementing the constructor for T. the constructor parameters need to initialize 2) and 3)
 
 2) provide a member variable in T of a type of your choosing that works with the compare function below T
         note the name of the variable used in the compare function
 
 3) provide a member variable of type std::string in T that works with the *first* cout statement in main().
         note the name of the variable used in the *first* cout statement in main()
 
 4) finish defining the struct with the compare function
 5) provide proper types for the arguments to compare, and a proper return value
         be sure to make it work with the pointer semantics being used in the if statements.
         see 8) for a hint about what type to use.
 
 6) finish instantiating the two T instances being declared in main(), based on the constructor you finished implementing in T
     Their names (line 105,106) are different than the member variables names (line 77), even tho the placeholders share the same name.
     Don't let this confuse you.
 
 7) Declare 'f' with the proper type so the call to f.compare works
 
 8) call f.compare() with the correct arguments, based on 2) and 5)
 
 9) correct the cout that uses smaller's member variable with some safe pointer usage.
         the possible return values of the compare() function should give you a hint.
 
 10) complete the implementation for the static function in <structName2>
 
 11) call the <structName2> static function correctly in main()
 
 12) replicate the functionality of <structName2>'s static function by implementing a member function in U that does the same thing.
 
 13) remember the rules for using pointers!  What is the one thing we always do before we use a pointer?
 
 After you finish, click the [run] button.  Clear up any errors or warnings as best you can.
 */

#include <iostream>
#include <string>
struct T
{
    T(<#type name#> v, const char* <#variable name#>)   //1
    //2
    //3
};

struct <#structName1#>                                //4
{
    <#type name#> compare(<#type name#> a, <#type name#> b) //5
    {
        if( a->value < b->value ) return a;
        if( a->value > b->value ) return b;
        return nullptr;
    }
};

struct U
{
    float <#name1#> { 0 }, <#name2#> { 0 };
    <#returnType#> <#memberFunction#>(<#type name#>* <#updatedValue#>)      //12
    {
        
    }
};

struct <#structname2#>
{
    static <#returntype#> <#staticFunctionA#>(U* that, <#type name#>* <#updatedValue#> )        //10
    {
        std::cout << "U's <#name1#> value: " << that-><#name1#> << std::endl;
        that-><#name1#> = <#updatedValue#>;
        std::cout << "U's <#name1#> updated value: " << that-><#name1#> << std::endl;
        while( std::abs(that-><#name2#> - that-><#name1#>) > 0.001f )
        {
            /*
             write something that makes the distance between that-><#name2#> and that-><#name1#> get smaller
             */
            that-><#name2#> += ;
        }
        std::cout << "U's <#name2#> updated value: " << that-><#name2#> << std::endl;
        return that-><#name2#> * that-><#name1#>;
    }
};
        
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    T <#name1#>( , );                                             //6
    T <#name2#>( , );                                             //6
    
    <#structName1#> f;                                            //7
    auto* smaller = f.compare( , );                              //8
    std::cout << "the smaller one is << " << smaller->name << std::endl; //9
    
    U <#name3#>;
    float updatedValue = 5.f;
    std::cout << "[static func] <#name3#>'s multiplied values: " << <#structname2#>::<#staticFunctionA#>( , ) << std::endl;                  //11
    
    U <#name4#>;
    std::cout << "[member func] <#name4#>'s multiplied values: " << <#name4#>.<#memberFunction#>( &updatedValue ) << std::endl;
}

#include <iostream>
using namespace std;

class Movie{

    //private attributes, functions
    private:
        string rating; //now cannot access in main function


    //publin attributes, functions
    public:
        string title;
        string director;
        

        Movie(string aTitle, string aDirector, string aRating){
            title =  aTitle;
            director = aDirector;
            setRating(aRating);
        }

        /// @brief to obtain this in main function
        /// @param aRating 
        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            }

            else {
                rating ="NR";

            }

        
            
        }

        string getRating(){
            return rating;
        }

        
};

///constructor is a function which is called when object is created
int main()
{
    
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    ///cout << avengers.rating;

    avengers.setRating("DOG"); ///TO CHANGE THE RATING HAVE TO GO THROUGHT THE FUNCTIPON

    cout << avengers.getRating();


    return 0;
}
// Abstract Base Class

#include<iostream>
#include<cstring>

using namespace std;

class CWH{

    protected:
        string title;
        float rating;

    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }

        // AGAR HUM YE VIRTUAL NAHI LAGATE HAI THEN BASE CLASS KA HI DISPLAY RUN HOGA HAR BAR. JUST CHECK THIS THING BY REMOVING THE VIRTUAL KEYWORD...!!
        
        virtual void display() = 0; // do-nothing function --> PURE VIRTUAL FUNCTION
};

class CWHVideo : public CWH{

    float videoLength;
    public:
        CWHVideo(string s, float r, float vl) : CWH(s, r){
            videoLength = vl;
        }

        void display(){
            cout << "This is an amazing video with title " << title << endl;
            cout << "Ratings: " << rating << " out of 5 stars." << endl;
            cout << "Length of this video is: " << videoLength << " minutes." << endl;
        }

};

class CWHText : public CWH{

    int words;
    public:
        CWHText(string s, float r, int wc) : CWH(s, r){
            words = wc;
        }


        // Because of pure virtual function we have to declare this. Without this class display it will show us an error...!!

        void display(){
            cout << "This is an amazing text with title " << title << endl;
            cout << "Ratings of this text tutorial: " << rating << " out of 5 stars." << endl;
            cout << "Number of words in this text tutorial is: " << words << " words." << endl;
        }
};


int main()
{

    string title;
    float rating, vlen;
    int words;

    //for CWH Video
    title = "Django Tutorial";
    vlen = 4.56;
    rating = 4.89;

    cout << "\n";
    CWHVideo djVideo(title, rating, vlen);
    djVideo.display();
    cout << "\n";


    //for CWH Text
    title = "Django Tutorial Textual";
    words = 499;
    rating = 4.13;

    cout << "\n";
    CWHText djText(title, rating, words);
    djText.display();
    cout << "\n";


    // ******************************************************
    CWH * tuts[2]; // Do pointers banaye hai
    tuts[0] = &djVideo;  // Object of Video class
    tuts[1] = &djText;   // Object of Text class

 
    cout << "\n";
    cout << "****************************************************************"<<endl;
    tuts[0] -> display();
    cout << "\n";
    tuts[1] -> display();
    

    return 0;
}
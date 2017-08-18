#include <stdexcept>
       #include <limits>
       #include <iostream>
       using namespace std;
       void func(int c)
       {
           if (c < numeric_limits<char> :: max())
               throw invalid_argument("MyFunc argument too large.");
           else
           {
               cout<<"Executed";
           }
       }
       int main()
       {
           try
           {
               func(256);
           }
           catch(invalid_argument& e)
           {
               cerr << e.what() << endl;
               return -1;
           }
           return 0;
       }
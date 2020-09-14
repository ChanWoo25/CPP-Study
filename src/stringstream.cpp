#include "../include/stringstream.hpp"


void T1()
{
    stringstream ss;
    ss << "string hello!";

    stringstream ss2;
    ss2 << "twice hello!";


    cout << ss.str() << endl;
    cout << ss2.str() << endl;
    // This is done by calling "basic_iostream<CharT, Traits>::swap(other)" 
    // and "rdbuf()->swap(*other.rdbuf())".
    ss.swap(ss2);

    // Returns pointer to the underlying raw string device object.
    // std::basic_stringbuf<CharT, Traits, Allocator>* rdbuf() const;
    
    cout << "ss: "  << ss.str()  << endl;
    cout << "ss2: " << ss2.str() << endl;

    __cxx11::basic_stringbuf<char>* rd = ss.rdbuf();
    cout << rd->str();

}
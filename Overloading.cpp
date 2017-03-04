//overloading.cpp
//phone number class defination

#include <iostream>
#include <string>

class
{
friend std::ostream &operator<<( std::ostream & , const PhoneNumber & );
friend std::istream &operator<<( std::istream & ,  PhoneNumber & );
private:
std::string areaCode;  //3-digit area code
std::string exchange;  //3-digit exchange
std::string line;      // 4-digit line


};
//end of the class phoneNumber

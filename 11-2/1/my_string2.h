#ifndef __STRING_H__
#define __STRING_H__
// my_string2.h - DO NOT modify this class definition
class MyString2
{
public:
 // Add constructors you need, including copy constructor
 // Add an assignment operator
 // Just use the same implementations for these operators
 MyString2 operator+(const MyString2& b);
 MyString2 operator*(const int b);
 friend std::ostream& operator<<(std::ostream& out, MyString2& my_string);
 friend std::istream& operator>>(std::istream& in, MyString2& my_string);
 //additional constructor & assignment operator
 MyString2();
 MyString2(MyString2& p);
 MyString2& operator=(MyString2& p);
private:
 std::string str;
};
#endif //__STRING_H__

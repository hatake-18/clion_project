//
// Created by hatak on 2023-06-16.
//

#ifndef CLION_PROJECT_MYSTRING_H
#define CLION_PROJECT_MYSTRING_H

class MyString {
public:
  MyString(const MyString& str);
  MyString(MyString&& str);

  MyString& operator=(const MyString&str);
  MyString& operator=( MyString&&str) noexcept;

private:
  char* data_;
};

#endif//CLION_PROJECT_MYSTRING_H

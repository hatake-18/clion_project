//
// Created by hatak on 2023-06-16.
//

#include "MyString.h"
MyString::MyString(const MyString& str) {
}
MyString::MyString(MyString&& str) {
}
MyString& MyString::operator=(const MyString& str) {

  return *this;
}
MyString& MyString::operator=( MyString&& str) noexcept{
  return *this;
}

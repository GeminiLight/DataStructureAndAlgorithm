#pragma once
 template <class T>

 class List {
     void clear();
     bool isEmpty();
     /*Ôö */
     bool append(const T value);  // ;
     // É¾
     bool delete(const int p);
     // ¸Ä
     bool insert(const T value, const int p);
     // ²é
     bool getPos(int& p, const T value);
     bool getValue(const int p, T& value);
     bool setValue(const int p, const T value);
 };

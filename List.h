#pragma once
 template <class T>

 class List {
     void clear();
     bool isEmpty();
     /*�� */
     bool append(const T value);  // ;
     // ɾ
     bool delete(const int p);
     // ��
     bool insert(const T value, const int p);
     // ��
     bool getPos(int& p, const T value);
     bool getValue(const int p, T& value);
     bool setValue(const int p, const T value);
 };

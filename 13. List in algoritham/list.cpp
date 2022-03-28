#include <iostream>
#include <list>
#include <bits/stdc++.h>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout<<endl;
}

int main()
{

    list<int> list1;
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);

    list1.push_front(11);
    display(list1);
    
    list1.sort();
    display(list1);
    
    list1.remove(7);
    display(list1);
    
    list1.pop_back();
    display(list1);
    
    list1.pop_front();
    display(list1);

//secound method in insald in value in the list
    list<int> list2(3);
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 4;

    display(list2);

    list1.sort();
    list2.sort();
    list1.merge(list2);
    display(list1);

    return 0;
}
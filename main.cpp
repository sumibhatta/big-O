//Big O notation
//"How quickly runtime grows relative to input(n), as input gets arbitarily large"
//O(n) => Our runtime grows on the order of size of input
//O(n) => Our runtime grows on the order of square of size of input

#include<iostream>
#include<vector>
using namespace std;

void printFirstItem(const vector<int> & items)
{
    cout<<items[0];
}
//For the size of input 'n' . This function runs in 0(1) i.e constant time...
//i.e if our vector has 1 or 10000's of input our output is printed once


void printAllItems(const vector<int> & items){
    for(int item: items){
        cout<<item;
    }
}
//For the size of input 'n' . This function runs in 0(n) i.e relative time...
//i.e if our vector has 1 items output is printed once and for input 10000 output is printed 10000 times


void printAllPossibleOrderedPairs(const vector<int> & items){
    for(int firstItem: items){
        for(int secondItem: items){
            cout<<firstItem<<","<<secondItem;
        }
    }
}
//For the size of input 'n' . This function runs in 0(n^2) i.e quadratic time...
//i.e if our vector has 10 items output is printed 100 times and for input 1000 output is printed 1000000 times


int main(){
vector<int> items(5,2);
printFirstItem(items);
cout<<endl;
printAllItems(items);
cout<<endl;
printAllPossibleOrderedPairs(items);
cout<<endl;
return 0;
}

//Everything is copied from interviewcake.com

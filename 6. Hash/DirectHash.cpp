#include <iostream>
#include <string>

using namespace std;


typedef struct Hash
{
    int key;
    string data;
};


Hash Nil;


Hash Direct_Address_Search(Hash* Table, Hash x)
{
    return Table[x.key];
}

void Direct_Address_Delete(Hash* Table, Hash x)
{
    Table[x.key] = Nil; // empty struct
}

void Direct_Address_Insert(Hash* Table, Hash x)
{
    Table[x.key] = x;
}

int main()
{
    Hash* Direct_Address = new Hash[4];
    Hash x0, x1, x2, x3;
    x0.key = 0;
    x0.data = "data 0";

    x1.key = 1;
    x1.data = "data 1";

    x2.key = 2;
    x2.data = "data 2";

    x3.key = 3;
    x3.data = "data 3";



    Direct_Address_Insert(Direct_Address, x0);
    Direct_Address_Insert(Direct_Address, x1);
    Direct_Address_Insert(Direct_Address, x2);
    Direct_Address_Insert(Direct_Address, x3);

    Direct_Address_Delete(Direct_Address, x3);

    
    cout << Direct_Address_Search(Direct_Address, x1).key << endl;
    cout << Direct_Address_Search(Direct_Address, x1).data << endl;
    cout << endl;

    cout << Direct_Address_Search(Direct_Address, x2).key << endl;
    cout << Direct_Address_Search(Direct_Address, x2).data << endl;
    cout << endl;


    cout << Direct_Address_Search(Direct_Address, x3).key << endl;
    cout << Direct_Address_Search(Direct_Address, x3).data << endl;
    cout << endl;




    delete []Direct_Address;

}

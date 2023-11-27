// writng poem using functions
#include <iostream>

using namespace std;
void repeated_lines1()
{
   cout<<"There was a hunter who went to hunt a lion.\n";
   cout<<"No sign of a lion, just a roar in the horizon.\n";


}
void repeated_lines2()
{
    cout<<"I don’t know how he can catch a lion \n";
    cout<<"But, maybe he will watch Orion! \n";
    cout<<endl;

}
void stanza2()
{
    cout<<"On the trail he caught a snail \n";
    cout<<"How absurd to catch a snail\n";

}
void stanza3()
{
    cout<<"He used the snail to catch a bird \n";
    cout<<"The bird wriggled and jiggled\n";

}
void stanza4(){
    cout<<"He used the bird to catch a cat\n";
    cout<<"Imagine that, catching a cat\n";
}
void stanza5()
{
    cout<<"He used the cat to catch a dog\n";
    cout<<"I don’t know where he kept the dog\n";

}
void stanza6()
{
    cout<<"He used the dog to catch a deer\n";
    cout<<"Perhaps he should have left with that deer\n";
}
void stanza7()
{
    cout<<"He tied the deer with a tree\n";
    cout<<"Hid in a bush, waiting for the lion spree\n";

}
void stanza8()
{
    cout<<"As he waited for the lion\n";
    cout<<"The hunter got devoured by the lion!\n";

}
int main()
{//calling functions

   repeated_lines1();
   repeated_lines2();

   repeated_lines1();
    stanza2();
    repeated_lines2();

    repeated_lines1();
    stanza3();
    repeated_lines2();

    repeated_lines1();
    stanza4();
    repeated_lines2();

    repeated_lines1();
    stanza5();
    repeated_lines2();

    repeated_lines1();
    stanza6();
    repeated_lines2();

    repeated_lines1();
    stanza7();
    repeated_lines2();

    repeated_lines1();
    stanza8();
    repeated_lines2();

  return 0;
}

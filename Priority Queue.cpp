// https://www.geeksforgeeks.org/implement-min-heap-using-stl/

#include<bits/stdc++.h>
using namespace std;

class point
	{

		int x,y;
	public:
		point(int _x,int _y)
			{
			x= _x;
			y= _y;
			}
		int getx() const
			{
			return x;
			}
		int gety() const
			{
			return y;
			}
	};
class comparator
	{
	public:
		int operator()( point &p1, point &p2)
			{
			return p1.getx()<p2.getx();
			}
	};
	//  use of constant ttps://www.geeksforgeeks.org/const-member-functions-c/
	//   http://duramecho.com/ComputerInformation/WhyHowCppConst.html

	// When a function is declared as const, it can be called on any type of object.
	// Non-const functions can only be called by non-const objects.
int main()
	{

	priority_queue<point, vector<point>, comparator> v ;
	v.push(point(10,2));
	v.push(point(1,20));
	v.push(point(15,2));
	v.push(point(100,25));
    while (v.empty() == false)
    {
        point p = v.top();
        cout << "(" << p.getx() << ", " << p.gety() << ")";
        cout << endl;
        v.pop();
    }

    return 0;

	}

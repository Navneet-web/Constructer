#include<iostream>
using namespace std;
class pro{
	public:
	string name,cls;
	int roll;
	
	pro(string x,string y, int z){
		name=x;
		cls=y;
		roll=z;
	}
	void hlo(){
		cout<<"This Is  "<<name<<endl<<"in class "<<cls<<endl<<"roll no is :: "<<roll;
	}


	
};
int main(){
	
	pro me("Navneet Raj","11th",16);
me.hlo();
	
	
}


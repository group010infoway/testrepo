//Q.1 Solution
/*
#include<iostream>
#include<cmath>
const float PI=3.14;
void calculate(int &vala,int &valc){
	int val;
	std::cout<<"Enter Radius of Circle"<<std::endl;
	std::cin>>val;
	vala=PI*(val*val);
	valc=2*PI*val;
}
void calculate(int &vala,int &valp,int i){
	int s1,s2,s3;
	std::cout<<"Enter the length of 3 sides of the Triangle"<<std::endl;
	std::cin>>s1>>s2>>s3;
	valp=(s1+s2+s3)/2;
	vala=sqrt(valp*((valp-s1)*(valp-s2)*(valp-s3)));
}
void calculate(int &vala,int &valp,double i){
	int len,bredth;
	std::cout<<"Enter the Length and Breadth of the Rectangle"<<std::endl;
	std::cin>>len>>bredth;
	vala=len*bredth;
	valp=2*(len+bredth);
}
void calculate(int &vala,int &valp,bool i){
	int a;
	std::cout<<"Enter the length of a side of the Square"<<std::endl;
	std::cin>>a;
	vala=a*a;
	valp=4*a;
}
int main(){
	int i,run=1,carea,ccer,tarea,tperi,rarea,rperi,sarea,speri;
	while(run!=0){
	std::cout<<"----:Mensuration operations:----\n"<<std::endl;
	std::cout<<"1 Circle.\n2 Triangle.\n3 Rectangle.\n4 Square.\n5 Exit."<<std::endl;
	std::cin>>i;
	switch (i){
		case 1:
			calculate(carea,ccer);
			std::cout<<"Area of Circle is "<<carea<<"\nCircumference of circle is"<<ccer<<std::endl;
			std::cout<<std::endl;
			break;
		case 2:
			calculate(tarea,tperi,2);
			std::cout<<"Area of Triangle is "<<tarea<<"\nPerimeter of Triangle is"<<tperi<<std::endl;
			std::cout<<std::endl;
			break;
		case 3:
			calculate(rarea,rperi,3.0);
			std::cout<<"Area of rectangle is "<<rarea<<"\nPerimeter of rectangle is"<<rperi<<std::endl;
			std::cout<<std::endl;
			break;
		case 4:
			calculate(sarea,speri,true);
			std::cout<<"Area of Square is "<<sarea<<"\nPerimeter of Square is"<<speri<<std::endl;
			std::cout<<std::endl;
			break;
		case 5:
			run=0;
			break;
		default:
			std::cout<<"Wrong Input Try again or Exit"<<std::endl;
		}
	}
	return 0;
}

//Q.2 Solution
#include<iostream>
void sum(int &a,int &b){
	std::cout<<a+b<<std::endl;
}
void sum(float &a,float &b){
	std::cout<<a+b<<std::endl;
}
void sum(float &a,int &b)
{
	std::cout<<a+b<<std::endl;
}
void sum(int &a, float &b){
	std::cout<<a+b<<std::endl;
}
int main()
{
	int a,b,i,run=1;
	float a1,b1;
	while(run!=0){
	
	std::cout<<"Arithmatic operations"<<std::endl;
	std::cout<<"1 int + int\n2 float + float\n3 float + int\n4 int + float\n5 Exit"<<std::endl;
	std::cin>>i;
	switch(i)
	{
		case 1:
			std::cin>>a>>b;
			sum(a,b);
			break;
		case 2:
			std::cin>>a1>>b1;
			sum(a1,b1);
			break;
		case 3:
			std::cin>>a1>>b;
			sum(a1,b);
			break;
		case 4:
			std::cin>>a>>b1;
			sum(a,b1);
			break;
		case 5:
			run=0;
			break;
		default:
		std::cout<<"INVALID INPUT"<<std::endl;	
	}}
	return 0;
}


//Q.3 Solution

#include<iostream>
using namespace std;
int mult(int a,int b,int c=1,int d=1){
	return a*b*c*d;
}
int main(){
	int i,run=1,a,b,c,d;
	while(run==1){
	
	cout<<"multiplications---\n1 two numbers\n2 three numbers\n3 four numbers\n4 exit\n";
	cin>>i;
	switch(i){
		case 1:
			cin>>a>>b;
			cout<<mult(a,b)<<endl;
			break;
		case 2:
			cin>>a>>b>>c;
			cout<<mult(a,b,c)<<endl;
			break;
		case 3:
			cin>>a>>b>>c>>d;
			cout<<mult(a,b,c,d)<<endl;
			break;
		case 4:
			run=0;
			break;
		default:
			std::cout<<"Invalid Input";
			break;
	}
	}
}
*/
//Q.4 Solution



//Q.5 Solution

/*
//Q.6 Solution

#include<iostream>

class Time{
    int hh,mm,ss;
    void normalize(){
        mm=mm+ss/60;
        ss=ss%60;
        hh=hh+mm/60;
        mm=mm%60;
        hh=hh%24;
        if(mm<0)
            mm=mm*(-1);
        if(hh<0)
            hh=hh*(-1);
        if(ss<0)
            ss=ss*(-1);
    }
    public:
    Time(){
        hh=0;
        mm=0;
        ss=0;
    }
    void settime(int h,int m, int s){
        this->hh=h;
        this->mm=m;
        this->ss=s;
    }
    void display(){
        if(hh<10)
            std::cout<<0;
        std::cout<<hh<<":";
        if(mm<10)
            std::cout<<0;
        std::cout<<mm<<":";
        if(ss<10)
            std::cout<<0;
        std::cout<<ss<<std::endl;
    }
    Time operator +(Time const &obj){
        Time temp;
        temp.hh=hh+obj.hh;
        temp.mm=mm+obj.mm;
        temp.ss=ss+obj.ss;
        temp.normalize();
        return temp;
    }
    Time operator -(Time const &obj){
        Time temp;
        temp.hh=hh-obj.hh;
        temp.mm=mm-obj.mm;
        temp.ss=ss-obj.ss;
        temp.normalize();
        return temp;
    }
    
};
int main(){
    Time t1,t2,t3,t4;
        t1.settime(3,59,59);
        t2.settime(01,0,1);
        t3=t1+t2;
        t4=t2-t1;
        t1.display();
        t2.display();
        t3.display();
        t4.display();
    return 0;
}
*/
#include<iostream>
using namespace std;
void sum(int a,int b){
	cout<<a+b<<endl;
}
void sum(int a, int b, float c){
	cout<<a+b+c<<endl;
}
void sum(int a){
	cout<<a<<endl;
}
int main(){
	int a=1,b=2;
	float c=1.2f;
	sum(a,b);
	sum(a,b,c);
	sum(a);
	return 0;
}

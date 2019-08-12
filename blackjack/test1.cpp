#include <iostream>
using namespace std;


class Enemy
{
	private:
	public:
		Enemy();
		virtual void PrintMe();
	protected:

};


class Ninja : public Enemy
{
		private:
		public:
			Ninja();
		protected:
};


class Spider : public Enemy
{
		private:
		public:
			Spider(); 
		protected:
};

class SuperSpider : public Spider
{
		private:
		public:
			SuperSpider(); 
			virtual void PrintMe();
		protected:
};
 
 
void Enemy::PrintMe(){
	cout << "enemy print" << endl;
}

void SuperSpider::PrintMe(){
	cout << "Super Spider Print" << endl;
	return;
}

Enemy::Enemy(){
		cout << "enemy created" << endl;
}

Ninja::Ninja(){
		cout << "ninja created" << endl;
}

Spider::Spider(){
		cout << "spider created" << endl;
}


SuperSpider::SuperSpider(){
		cout << "Super Spider created" << endl;
}


int main(){
	  
	SuperSpider myenemy;
	
	myenemy.PrintMe();
	 
	return 0;
}
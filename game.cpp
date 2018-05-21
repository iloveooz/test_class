#include <iostream>

using std::cout;

class Unit {
	protected:
		int health;
	
	public:
		void ShowHealth () {
			cout << "Unit health: " << health << '\n'; 
		}
		
		Unit(): health(100) { }
		
		Unit(int a): health(a) { }
	};
	
	int main () {
		Unit Kyle;
		Kyle.ShowHealth();
		
		Unit Jack(80);
		Jack.ShowHealth();
		
		return 0;
	}
	

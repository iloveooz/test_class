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
	
class Soldier : public Unit {
	private:
		int damage;
	public:
		void ShowDamage() {
			cout << "Soldier damage: " << damage << '\n';
		}
		
		Soldier():damage(16) { }
		
		Soldier(int a):damage(a) { }
		
		Soldier(int a, int b): Unit(a), damage(b) { }
};
	
	
	int main () {
		Unit Kyle;
		Kyle.ShowHealth();
		
		Unit Jack(80);
		Jack.ShowHealth();
		
		Soldier Hulk(90);
		Hulk.ShowHealth();
		Hulk.ShowDamage();
		
		Soldier Achile(16, 60);
		Achile.ShowHealth();
		Achile.ShowDamage();
		
		return 0;
	}
	

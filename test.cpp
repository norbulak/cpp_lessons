#include "test.hpp"
#include <cstdio>
#include <unistd.h>

void player::print_player(){
	std::cout << m_name << " [" << m_score << "]\n";
}
player::player(std::string name){
		m_name = name;
		m_score = 0;
}
void foo(){
	player a("a");
	std::cout << "mazal kayen" << "\n";
}
int main()
{
	foo();
	player player_1("Houda");
	player player_2("Simo");
	player player_3("Mohammed");
	player player_4("Nicolas");
	player player_5("Ilias");

	std::cout <<  "end\n";

	while(player_2.getScore() < 10)
	{
		player_1.add_one();	
		player_1.add_one();	
		player_2.add_one();	
		sleep(1);
	}
	return 0;

}

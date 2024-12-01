#include <iostream>
#include <string>

// Private
// Public 
class player {
public:
	player(std::string name);	
	~player(){
		std::cout <<"bye bye " << m_name <<"\n";
	}
// Getter
	int getScore(){ return m_score; };
// Setter
	void setScore(int s){ 
		m_score = s;
	};
	void add_one(){
		m_score++;
		print_player();
	}
private:
	int m_score;
	std::string m_name;
	void print_player();
} ;


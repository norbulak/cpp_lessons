#include  "test2.hpp"
#include <iostream>

Rectangle::Rectangle(int height, int width, std::string name){
     m_height = height;
     m_width = width;
     m_name = name;
}

void Rectangle::setHeight(int height){
    m_height = height;
}

void Rectangle::setWidth(int width){
    m_width = width;
}

int Rectangle::getHeight(){
    return m_height;
}

int Rectangle::getWidth(){
    return m_width;
}
void Rectangle::print(){
    std::cout << m_name <<"'s height = ";
    std::cout << m_height << "cm\n";
    std::cout << m_name <<"'s width = ";
    std::cout << m_width << "cm\n";
}
void Rectangle::draw(){
    // draw the rectangle using | and -
    if (m_height == m_width)
        std::cout << "It is not a rectangle" << '\n';
    else
    {
        for (int i = 0; i < m_width; i++)
            std::cout << "-";  
        std::cout << '\n';
          
        for (int j = 0; j < m_height; j++)
        {
            std::cout << "|";
            for (int k = 0; k < m_width - 1; k++)
                std::cout << " ";
            std::cout << "|";
            std::cout << '\n';
        }
        for (int i = 0; i < m_width; i++)
            std::cout << "-"; 
        std::cout << '\n';  
    }
}
int main(){
    Rectangle my_rect(42,123, "big rectangle");
    Rectangle small(4,12, "small boy");
    // my_rect.print();
    // small.print();
    small.draw();
}

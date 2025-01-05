#include  "test2.hpp"
#include <iostream>
Rectangle::~Rectangle(){
    std::cout <<  m_num << " has been destroyed \n";
}



Rectangle::Rectangle(int height, int width, std::string name, int num)
    : m_height(height), 
    m_width(width), 
    m_name(name),
    m_num(num)
{
    std::cout << "just declared a rect and gave it parameters, its name is "<< m_name << '\n';
}

Rectangle::Rectangle()
    : m_height(10), 
    m_width(10), 
    m_name("square")
{
    std::cout << "just declared a rect with default values " << m_name << '\n';
}
Rectangle::Rectangle(int num){
    m_height = 10;
    m_width = 10;
    m_name = "square";
    m_num = num;
    std::cout << m_num << "has been declared\n";
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
    for (int i = 0; i < m_width; i++)
        std::cout << "---";  
    std::cout << '\n';

    for (int j = 0; j < m_height; j++)
    {
        std::cout << "|";
        for (int k = 0; k < m_width - 1; k++)
            std::cout << "   ";
        std::cout << "|";
        std::cout << '\n';
    }
    for (int i = 0; i < m_width; i++)
        std::cout << "---"; 
    std::cout << '\n';  
}
int main(){
    Rectangle rect1(1);
    Rectangle rect2(2);
    Rectangle rect3(3);
    Rectangle rect4(4);
    Rectangle rect5(5);
/*    Rectangle rect2(100, 200, "SimoRect");*/
/*//... Because of the constuctor, this is not necessary (we have default values)*/
/*//    rect.setWidth(42); */
/*    rect2.print();*/
}

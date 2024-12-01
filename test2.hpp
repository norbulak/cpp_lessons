#include <string>
class Rectangle {
public:
    Rectangle(int height, int width, std::string name);
    void setHeight(int height);
    void setWidth(int width);
    int getHeight();
    int getWidth();
    void print();
    void draw();

private:    
    int m_height; 
    int m_width;
    std::string m_name;
};



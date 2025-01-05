#include <string>
class Rectangle {
public:
    Rectangle();
    Rectangle(int num);
    ~Rectangle();
    Rectangle(int height, int width, std::string name, int num);
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
    int m_surface;
    int m_num;
};



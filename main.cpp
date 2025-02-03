#include <iostream>
#include <string>

using std::string, std::cout, std::endl;

static constexpr int viewport_x = 32;
static constexpr int viewport_y = 14;

struct Vector
{   
    float x = 0;
    float y = 0;
    float z = 0;

    Vector(float x, float y, float z) : x(x), y(y), z(z) {}
};

void fill_viewport(char (&viewport)[viewport_y][viewport_x], char fill_char)
{
    for (auto &row : viewport)
    {
        for (auto &pixel : row)
        {
            pixel = fill_char;
        }
    }
}

void render_viewport(char (&viewport)[viewport_y][viewport_x]) 
{
    for (auto &row : viewport)
    {
        for (auto &pixel : row)
        {
            cout << pixel;
        }
        cout << endl;
    }
}

int main()
{
    cout << "Hello donut!" << endl;

    char viewport[viewport_y][viewport_x];


    while (true)
    {
        fill_viewport(viewport, 'a');
        render_viewport(viewport);
        system("clear");
    }
    

    fill_viewport(viewport, 'a');
    render_viewport(viewport);

    system("pause");
}


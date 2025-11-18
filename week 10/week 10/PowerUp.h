#pragma once

#include "OnScreenObject.h"
#include <string>
using namespace std;

class Vector2f;

class PowerUp : public OnScreenObject
{
private:
    string name;

public:
    PowerUp();
    explicit PowerUp(string name);
    PowerUp(Vector2f* postion, string name);
    ~PowerUp();

    void setName(string name);
    string getName();

    void draw();

};
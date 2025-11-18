#pragma once
class Vector2f;

class OnScreenObject
{
protected:
    Vector2f* position;


public:
    OnScreenObject();

    virtual ~OnScreenObject();

    OnScreenObject(Vector2f* position);

    void setPosition(Vector2f* value);

    Vector2f* getPosition();

    virtual void draw() = 0;   //Pure virtual method

};
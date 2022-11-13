#include <iostream>
#include <string.h>
#include "Ball.h"
#include "Car.h"
#include "Blog.h"

int main()
{
    // ----Q1----
    //char type[] = "football";
    //char brand[] = "adidas";

    //Ball football1(type, brand, 3);
    //football1.throwBall(24);
    //football1.kickBall(41);
    //football1.inflateBall(4);

    // ----Q2----
    //char model[50];
    //char color[25];
    //strcpy_s(model, "ferrari");
    //strcpy_s(color, "red");
    //Car ferrari(model, color, 3200912, 2);
    //for (int i = 0; i < 5; i++)
    //{
    //    ferrari.addRide(i * 50);
    //}
    //ferrari.carStatus();
    //strcpy_s(model, "lamborgini");
    //strcpy_s(color, "green");
    //Car lamborgini(model, color, 4233912, 2);
    //for (int i = 0; i < 5; i++)
    //{
    //    lamborgini.addRide(i * 27);
    //}
    //lamborgini.carStatus();
    //strcpy_s(model, "bugatti");
    //strcpy_s(color, "blue");
    //Car bugatti(model, color, 5576711, 2);
    //for (int i = 0; i < 5; i++)
    //{
    //    bugatti.addRide(i * 42);
    //}
    //bugatti.carStatus();
    //strcpy_s(model, "tesla");
    //strcpy_s(color, "white");
    //Car tesla(model, color, 5572211, 5);
    //for (int i = 0; i < 5; i++)
    //{
    //    tesla.addRide(i * 22);
    //}
    //tesla.carStatus();
    //strcpy_s(model, "skoda");
    //strcpy_s(color, "black");
    //Car skoda(model, color, 3083134, 5);
    //for (int i = 0; i < 5; i++)
    //{
    //    skoda.addRide(i * 73);
    //}
    //skoda.carStatus();

    // ----Q3----
    char BName[100];
    char line[100];
    strcpy_s(BName, "My Blog");
    Blog MyBlog(BName, 1000);

    strcpy_s(line, "hi,");
    MyBlog.AddLine(line);
    strcpy_s(line, "my name is yarin,");
    MyBlog.AddLine(line);
    strcpy_s(line, "and i am happy,");
    MyBlog.AddLine(line);

    MyBlog.Print();

    MyBlog.SaveInFile();
    MyBlog.LoadFromFile();

    MyBlog.Print();

}

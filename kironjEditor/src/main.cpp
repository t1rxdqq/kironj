#include <iostream>
#include <memory>
#include <kironjCore/Application.hpp>

class MyApp : public kironj::Application
{
    virtual void on_update() override
    {
        // std::cout << "Update frame: " << frame++ << std::endl;
    };

    int frame=0;
};

int main()
{
    auto myApp=std::make_unique<MyApp>();
    int returnCode=myApp->start(600,400,"test");
    std::cin.get();
    return returnCode;
}
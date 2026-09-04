#include "greeting.hpp"
#include <string>
#include <stdexcept>

std::string CreateGreeting(const std::string userName){
    if(userName.empty()){
        throw std::invalid_argument("Empty username");
    }
    return "Hello, " + userName + "!";
}

std::string GenerateWelcomeMessage(const std::string userName){
    std::string greeting = CreateGreeting(userName);
    greeting += " Welcome to the class!";
    return greeting;
}
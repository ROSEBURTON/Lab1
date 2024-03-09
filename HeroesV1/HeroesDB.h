#pragma once
#include <string>
#include "Hero.h"

#include <iostream>

class HeroesDB : public JSONBase
{
public:
    HeroesDB();
	virtual ~HeroesDB() {};
    size_t Count() { return _heroes.size(); }
    Hero GetBestHero(); //DECLARE the method in the header (.h) file



private:
    std::vector<Hero> _heroes;

    static bool charComparer(char c1, char c2);
    static bool isPrefix(const std::string& prefix, const std::string& word);

    virtual bool Deserialize(const std::string& s);
    virtual bool Deserialize(const rapidjson::Value& obj) { return false; };
    virtual bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer) const;
};
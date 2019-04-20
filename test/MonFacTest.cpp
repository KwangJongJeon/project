#include <iostream>
#include <string>
#include <catch2/catch.hpp>
#include "MonsterFactory.h"

using namespace std;

/*
TEST_CASE( "monster factory can generate monsters properly") {
	MonsterFactory monFac;
	
	const char* monsterName = "slime"
	Monster monster = monFac.createMonst(monsterName);
	
	
	REQUIRE(monster.get_STR() == 5);
	REQUIRE()
}
*/

// TEST_CASE("findMonster can find monster properly")
// {
// 	MonsterFactory monFac;
// 	// string monster = monFac.findMonster("slime");
// }


// TEST_CASE("IOControl can generate correct string")
// {
// 	// using namespace std;
	
// 	MonsterFactory monFac;
// 	const char* fileName = "resource/TestFile";
	
	
// 	auto real = monFac.IOControl(fileName);
// 	vector<map<string, vector<string>>> expected;
// 	REQUIRE(monsters == "");
	
// 	cout << str << endl;
// }

// TEST_CASE("can add map in MonsterFactory's member var to monster properly")
// {
// 	//std::map<std::string, std::vector<std::string>> m_monsters;

// 	string str = "abc,def,ghi";
// 	MonsterFactory monFac;
	
// 	monFac.parseMonsterFrom(str);
	
// 	auto real = monFac.getMonsters().at("abc");
// 	vector<string> expected;
// 	expected.push_back("def");
// 	expected.push_back("ghi");
// 	auto realIter = real.begin();
// 	auto expIter = expected.begin();
	
// 	while (realIter != real.end()) {
// 		REQUIRE(*realIter == *expIter);
// 		++realIter;
// 		++expIter;
// 	}
// }


// TEST_CASE("MonsterFactory can initialize properly")
// {
// 	MonsterFactory monFac;
// 	const char* filename = "resource/TestFile";
	
// 	monFac.initMapUsing(filename);
	
	
// 	auto real = monFac.getMonsters();
// 	map<string, vector<string>> expected;
	
// 	string x[2] = {"b", "c"};
// 	string y[2] = {"e", "f"};
	
// 	vector<string> expected_vector1(x, x+2); 
// 	vector<string> expected_vector2(y, y+2);
	
// 	expected["a"] = expected_vector1;
// 	expected["d"] = expected_vector2;
 
// 	REQUIRE(real.at("a")[0] == expected.at("a")[0]);
// 	REQUIRE(real.at("a")[1] == expected.at("a")[1]);
// 	REQUIRE(real.at("d")[0] == expected.at("d")[0]);
// 	REQUIRE(real.at("d")[1] == expected.at("d")[1]);	

// }

// TEST_CASE("get line well!!!") {
// 	const char* filename = "resource/TestFile";
// 	ifstream ifs(filename);
// 	string str;
// 	getline(ifs, str);
// 	REQUIRE(str == "a,b,c");
// }

// TEST_CASE("MonsterFactory can generate Monster properly")
// {
// 	MonsterFactory monFac;
// 	Monster real = monFac.createMonster("Slime");
	
// 	map<Stat, int> expected_status;
	
// 	expected_status[Stat::UNIT_TYPE] = 10;
// 	expected_status[Stat::BASIC_ATK] = 0;
// 	expected_status[Stat::BASIC_DEF] = 0;
// 	expected_status[Stat::LEVEL] =  1;
// 	expected_status[Stat::STR] = 5;
// 	expected_status[Stat::INT] = 0;
// 	expected_status[Stat::DEX] = 5;
// 	expected_status[Stat::EXP] = 20;
// 	//expected_status[Stat::STRINGFORM] = "s"; 
// 	Monster expected(expected_status);
// 	REQUIRE(real == expected);
// }


SCENARIO("Factory can generate properly") {
	
	GIVEN("Slime can generate with proper") {
		
		MonsterFactory monFac;
		
		auto slime = monFac.createMonster("Slime");
	}
	
	GIVEN("Slime can attack another unit") {
		MonsterFactory monFac;
		auto slime1 = monFac.createMonster("Slime");
		auto slime2 = monFac.createMonster("Slime");
		
		slime1.attack(slime2);
	}
}
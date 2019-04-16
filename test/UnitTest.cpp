#include <catch2/catch.hpp>
#include <iostream>
#include "MovableUnit.h"

using namespace std;

SCENARIO("Unit can move around board") {
	GIVEN("Unit is in somewhere middle of board") {
		std::pair<int, int> board(5, 5);
		MovableUnit real_unit(1, 1, board);
		MovableUnit expected_unit;
		
		WHEN("Unit moves upward") {
			real_unit.move(0, 1);
			expected_unit = MovableUnit(1, 2);
			std::cout << real_unit << std::endl;
			THEN("Unit moved up") {
				REQUIRE(real_unit == expected_unit);
			}
			
		}
		WHEN("Unit moves Down"){
			real_unit.move(0, -1);
			expected_unit = MovableUnit(1, 0);
			THEN("Unit moved down") {
				REQUIRE(real_unit == expected_unit);
			}
		}
		
		WHEN("Unit moves left"){
			real_unit.move(-1, 0);
			expected_unit = MovableUnit(0, 1);
			THEN("Unit moved left") {
				REQUIRE(real_unit == expected_unit);
			}
		}
		WHEN("Unit moves upward"){ 
			real_unit.move(1, 0);
			expected_unit = MovableUnit(2, 1);
			THEN("Unit moved right") {
				REQUIRE(real_unit == expected_unit);
			}
		}
	}
	
	GIVEN("Unit is at edge of board") {
		std::pair<int, int> board(5, 5);
		MovableUnit real_unit(5, 5, board);
		MovableUnit expected_unit(5, 5, board);

		WHEN("Unit moves down") {
			real_unit.move(0, 1);
			THEN("Unit can't move")
			{
				REQUIRE(real_unit == expected_unit);
			}
		}
		
		WHEN("Unit moves right") {
			real_unit.move(1, 0);
			THEN("Unit can't move")
			{
				REQUIRE(real_unit == expected_unit);
			}
		}
	}
	
	GIVEN("Theres another unit next to unit") {
		std::pair<int, int> board(5, 5);
		// std::vector<*MovableUnit> units;
		// unique_ptr<MovableUnit> real(1, 1, board);
		// unique_ptr<MovableUnit> real_enemy(1, 2, board);
		
		
		MovableUnit real(1, 1, board);
		MovableUnit real_enemy(1, 2, board);
		
		vector<MovableUnit*> units;
		units.push_back(&real);
		units.push_back(&real_enemy);
	
		MovableUnit expected(2, 1, board);

		MovableUnit real_with_list(units, 1, 1, board);
		
		WHEN("Unit tries to move to there") {
			real_with_list.move(0, 1);
			
			THEN("Unit attacks") {
				REQUIRE(units.at(1)->get_hp() == 45);
			}
		}
	}
}


/*
class I_Unit {
public:
	virtual void move(const std::pair<int, int>) = 0;
	
	virtual ~I_Unit() {};
};



class MoableUnit: public I_Unit {
public:
	void move(const std::pair<int, int>) override;

priavte:
	std::pair<int, int> _pos;
}


class BoundUnit: public I_Unit{
public:
	void move(const std::pair<int, int>) override;

private:
	MovableUnit movableUnit;
	
	pair<int, int> border
}

BoundUnit::move(pair value) {
	여기서 이제 자기가 들고있는 경계랑
	들고있는 무버블 유닛의 위치 비교해서
	movableUnit을 어떻게 움직일지 판단가능하겠지?
	그러면 또 기능 구현 한거임
}


class AttackableUnit: public I_Unit, public I_Attackable{
public:
	move() {
		if no unit
		move
		else unit
		redueTheirHp
	}
	redueceHp(int) {
		attackable.redueHp(int)
	}
private
	boundunit
	attackable
}

SENARIO("Attackable can attack to redue hp") {
	그러명이제 상황에서
	hp가 0이상으로 남는공격일때
	0이하로 줄어드는 공격일때
	이런 테스트케이스를 쭉 적어두면
	각각에 맞게 행동하도록 구현하면됨

}
*/